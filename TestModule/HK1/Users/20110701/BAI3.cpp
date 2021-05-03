#include<stdio.h>
void nhap(int A[], int &n);
int ktra(int A[], int n);
void xuat(int kq);
void main()
{
	int A[99]; int n;
	nhap(A,n);
	int kq= ktra(A,n);
}
void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
int ktra(int A[], int n)
{
	return -1;
}
void xuat(int kq)
{
	printf("%d",kq);
}