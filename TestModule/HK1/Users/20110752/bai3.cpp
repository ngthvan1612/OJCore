#include<stdio.h>
void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
int xet(int A[], int n)
{
	for(int i=0;i<(n-1);i++)
	{
		if(A[i]%2==0)
		{
			if(A[i+1]%2==0)
			return i+1;
		}
		else if(A[i]%2!=0)
		{
			if(A[i+1]%2!=0)
			return i+1;
		}
	}
	return -1;
}
void output(int x)
{
	printf("%d",x);
}
void main()
{
	int A[100],n;
	nhap(A,n);
	output(xet(A,n));
}