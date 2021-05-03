#include <stdio.h>
#include <string.h>
#include <math.h>

void nhap(char A[]);
double doiCoSo(char A[]);
double Sum(double a,double b);
void xuat(double kq);

int main()
{
	char A[10],B[10];
	nhap(A);
	nhap(B);

	double kq = Sum(doiCoSo(A),doiCoSo(B));
	xuat(kq);


	return 0;
}

void xuat(double kq)
{
	printf("%.0lf",kq);
}

double Sum(double a,double b)
{
	return a+b;
}

double doiCoSo(char A[])
{
	int n = strlen(A);
	double num=0;
	for(int i=n-1;i>=0;i--)
	{
		if(A[i] >= '0' && A[i] <= '9')
			num += (A[i]- 48)*pow(16,(n-1-i));
		else 
			num += (A[i] - 55)*pow(16,(n-1-i)); 
	}
	return num;
}

void nhap(char A[])
{
	fflush(stdin);
	gets(A);
}