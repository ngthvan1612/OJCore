#include <stdio.h>
#include <string.h>

void nhap(char A[], char B[]);
int Tong(char A[], char B[]);
int doi(char A[]);
int luythua(int a, int n);
void xuat(int kq);

void nhap(char A[], char B[]);

void main()
{
	char A[100], B[100];
	nhap(A, B);
	int kq = Tong(A, B);
	xuat(kq);
}
void nhap(char A[], char B[])
{
	scanf("%s%s", &A, &B);
}
int Tong(char A[], char B[])
{
	int a = doi(A);
	int b = doi(B);
	return a+b;
}
int doi(char A[])
{
	int tong;
	tong = 0;
	int dodai = strlen(A);
	for (int i = 0; i < dodai; ++i)
	{
		if (A[i] >= '0' && A[i] <= '9')
			tong = tong + (A[i] - '0') * luythua(16,6 - i - 1);
		else if (A[i] == 'A')
			tong = tong +  10 * luythua(16,6 - i - 1);
		else if (A[i] == 'B')
			tong = tong + 11  * luythua(16,6 - i - 1);
		else if (A[i] == 'C')
			tong = tong + 12  * luythua(16,6 - i - 1);
		else if (A[i] == 'D')
			tong = tong + 13  * luythua(16,6 - i - 1);
		else if (A[i] == 'E')
			tong = tong + 14  * luythua(16,6 - i - 1);
		else if (A[i] == 'F')
			tong = tong + 15  * luythua(16,6 - i - 1);
	}
	return tong;
}
int luythua(int a, int n)
{
	int x;
	x = 1;
	for (int i = 0; i < n; ++i)
		x = x * a;
	return x;
}
void xuat(int kq)
{
	printf("%d", kq);
}