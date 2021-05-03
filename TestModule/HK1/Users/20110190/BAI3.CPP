#include <stdio.h>
void nhap (int A[], int &n);
int kiemtrachanle(int A[], int n);
void xuat (int kq);
void main()
{
	int A[100], n;
	nhap (A, n);
	int kq=kiemtrachanle(A, n);
	xuat(kq);
}
void nhap (int A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}
}
int kiemtrachanle(int A[], int n)
{
	int kt;
	for (int i=0; i<n-1; i++)
	{
		if ((A[i]+A[i+1])%2==1)
			kt=-1;
		if ((A[i]+A[i+1])%2==0)
			kt=i+1;
	}
		return kt;
}
void xuat (int kq)
{
	printf("%d", kq);
}




