#include <stdio.h>
int ktra(int A[], int n);
void nhapmang(int A[],int n);
void xuatmang(int A[],int n);
void xuat (int x);

void main()
{
	int A[100],n;
	nhapmang(A,n);
	xuatmang(A,n);
	int kq=ktra(A,n);
	xuat(kq);
}
void nhapmang(int A[],int n)
{
	scanf("%d",&n);
	for (int i=0 ;i<n;i++);
	printf("%d",A[i]);
}
void xuatmang(int A[],int n)
{
	for (int i=0;i<n;i++)
		printf("%d",A[i]);
}
void xuat (int x)
{
	printf("\n%d",x);
}
int ktra(int A[], int n)
{
	for (int i=0;i<n;i++)
		if ( (A[i]+A[i+1])%2!=0)
			return -1;
		else
			return 2;
}
