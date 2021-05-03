#include<stdio.h>
#define N 100
void nhap(int A[N],int &n);
void xuly(int A[N],int n);
void main()
{
	int A[N],n;
	nhap(A,n);
	xuly(A,n);
}
void nhap(int A[N],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
void xuly(int A[N],int n)
{
	int a=-1;
	for(int i=1;i<n;i++)
	{
		if(A[i-1]%2==0&&A[i]%2==0)
		{
			a=i;
		}
		if(A[i-1]%2==1&&A[i]%2==1)
		{
			a=i;
		}
	}
	printf("%d",a);
}
