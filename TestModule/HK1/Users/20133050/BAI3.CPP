#include<stdio.h>
#define size 100
void nhap(int A[], int &n);
void xuat(int kq);
int kiemTra(int A[], int n);
void main()
{
	int A[size],n;
	nhap(A,n);
	int kq=kiemTra(A,n);
	xuat(kq);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void xuat(int kq)
{
	printf("%d", kq);
}
int kiemTra(int A[], int n)
{
	int kq=-1;
	int i;
	for(i=0; i<n; i++)
	{
		if(A[i]%2==0 && A[i+1]%2!=0 && i+1<n)
			return -1;
		if(A[i]%2!=0 && A[i+1]%2==0 && i+1<n)
			return -1;
	}
	for(i=0; i<n; i++)
	{
		if(A[i]%2==0 && A[i+1]%2==0)
			return i+1;
		if(A[i+1]%2==0 && A[i]%2==0)
			return i+1;
		if(A[i+1]%2!=0 && A[i]%2!=0)
			return i+1;
	}
	return 0;
}