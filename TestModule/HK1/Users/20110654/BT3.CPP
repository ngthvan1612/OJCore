#include<stdio.h>
void nhap(int A[], int &n);
int kt(int A[], int n);
void xuat(int kq);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=kt(A,n);
	xuat (kq);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}
}
int kt(int A[], int n)
{
	int a=0;
	for(int i=0;i<n-1;i++)
	{
		if(A[i]%2==0 && A[i+1]%2==1)
			a=-1;
	    else if(A[i]%2==1 && A[i+1]%2==0)
			a=-1;
		else
		{
			a=i+1;
			break;
		}
	}
	return a;
}
void xuat(int kq)
{
	printf("%d", kq);
}