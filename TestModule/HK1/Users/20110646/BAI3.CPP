#include <stdio.h>
void nhap(int A[],int n);
int ktra(int A[],int n);
void xuat(int kq);
void main()
{
	int A[100],n;
    nhap(A[],n);
	int kq=ktra(A,n);
	xuat(kq);
}
void nhap(int A[],int n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
int ktra(int A[],int n)
{
	for (int i=0;i<n;i+=2)
	{
		for (int j=1;j<n;j+=2)
	if ((A[i]%2==0 && A[j]%2==1) || (A[i]%2==1 && A[j]%2==0))
	{
		return 1;
	}
	else if ((A[i]%2==0 && A[j]%2==0) || (A[i]%2==1 && A[j]%2==1))
		return 0;
	}
}
void xuat(int kq,int n)
{
	if (kq==1)
	{
		printf("-1");
	}
	else 
	{
		for (int i=0;i<n;i++)
		printf("%d",kq);
	}
}
