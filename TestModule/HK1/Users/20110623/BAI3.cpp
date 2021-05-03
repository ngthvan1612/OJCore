#include <stdio.h>
void nhap (int A[],int &n);
void xuat (int x);
int kiemtra (int A[], int n);
void main ()
{
	int A[1000];int n;
	nhap (A,n);
    int kq=kiemtra (A,n);
	xuat(kq);
}
void nhap (int A[],int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf ("%d",&A[i]);
	}
}
void xuat (int x)
{
	printf ("%d",x);
}
int kiemtra (int A[], int n)
{
	for (int i=0; i<n-1;i++)
	{
		if ((A[i]+A[i+1])%2==0)
		{ 
		   return i+1;
		   break;
		}
	}
	return -1;
}