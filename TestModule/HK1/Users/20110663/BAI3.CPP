#include<stdio.h>
int kiemtra(int A[], int n);
void xuat(int t);
void nhap(int A[], int &n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int t= kiemtra(A,n);
	xuat(t);
}
int kiemtra(int A[], int n)
{
	for(int i=0; i< n-1; i++)
	{
		if(A[i]%2 == A[i+1]%2)
		{
			return i+1;
		}
	}
	return -1;
}
void xuat(int t)
{
	printf("%d", t);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}
}