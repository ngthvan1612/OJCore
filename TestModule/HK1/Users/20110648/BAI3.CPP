#include<stdio.h>
#define MAX 100
void nhapMang(int A[],int &n);
void xuat(int kt);
int kiemtra(int A[],int n);
void main()
{
	int A[MAX],n;
	nhapMang(A,n);
	int kt=kiemtra(A,n);
	xuat(kt);
}
void nhapMang(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int kiemtra(int A[],int n)
{
	int d;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0)
			if(A[i]%2==1)
				return -1;
			else
				d=-1;
		else
			if(A[i]%2==0)
				d=-1;
			if(A[i]%2==1)
				d=i-3;
	}
	return d;
}
void xuat(int kt)
{
	printf("%d ",kt);
}
