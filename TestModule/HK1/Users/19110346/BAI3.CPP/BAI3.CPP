#include<stdio.h>
int kiemtra(int A[],int n);
void nhap(int A[],int &n);

void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=kiemtra(A,n);
	printf("%d",kq);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}
	}
}
int kiemtra(int A[],int n)
{
	int kt=-1;
	for(int i=0;i<n-1;i++)
	{
		if((A[i]%2!=0 && A[i+1]%2!=0) || (A[i]%2==0 && A[i+1]%2==0))
		{
			kt=i+1;
			break;
		}
	}
	return kt;
}