#include<stdio.h>
#include<string.h>
#include<math.h>
long doi(char X[10]);
void xuat(long a);
void main()
{
	char A[10], B[10];
	gets(A);
	gets(B);
	long a = doi(A);
	long b = doi(B);
	xuat(a+b);
}
long doi(char X[10])
{
	long tong=0;
	int n = strlen(X);
	for (int i = 0; i < n; i++)
	{
			 if (X[i] == '1') tong +=  1*(long)pow(16,n-i-1);
		else if (X[i] == '2') tong +=  2*(long)pow(16,n-i-1);
		else if (X[i] == '3') tong +=  3*(long)pow(16,n-i-1);
		else if (X[i] == '4') tong +=  4*(long)pow(16,n-i-1);
		else if (X[i] == '5') tong +=  5*(long)pow(16,n-i-1);
		else if (X[i] == '6') tong +=  6*(long)pow(16,n-i-1);
		else if (X[i] == '7') tong +=  7*(long)pow(16,n-i-1);
		else if (X[i] == '8') tong +=  8*(long)pow(16,n-i-1);
		else if (X[i] == '9') tong +=  9*(long)pow(16,n-i-1);
		else if (X[i] == 'A') tong += 10*(long)pow(16,n-i-1);
		else if (X[i] == 'B') tong += 11*(long)pow(16,n-i-1);
		else if (X[i] == 'C') tong += 12*(long)pow(16,n-i-1);
		else if (X[i] == 'D') tong += 13*(long)pow(16,n-i-1);
		else if (X[i] == 'E') tong += 14*(long)pow(16,n-i-1);
		else if (X[i] == 'F') tong += 15*(long)pow(16,n-i-1);
	}
	return tong;
}
void xuat(long a)
{
	printf("%ld", a);
}
