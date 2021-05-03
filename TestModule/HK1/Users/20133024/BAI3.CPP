#include<stdio.h>
void nhapmang(int A[], int &n);
int Xuly(int A[], int n);
void xuat(int kq);
void main()
{
	int A[100], n;
	nhapmang(A, n);
	int kq = Xuly(A, n);
	xuat(kq);
}

void nhapmang(int A[], int &n)
{
	scanf("%d", &n);
	for(int i = 0;i< n; i++)
		scanf("%d", &A[i]);
}

int Xuly(int A[], int n)
{
	for(int i = 0; i< n - 1; i++)
	{
		if((A[i] % 2 == 0 && A[i + 1] % 2 == 0) || (A[i] % 2 != 0 && A[i + 1] % 2 != 0))
			return i + 1;
	}
	return -1;

}

void xuat(int kq)
{
	printf("%d", kq);
}