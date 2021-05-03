#include<stdio.h>
void nhap(int A[], int &n);
void xet(int A[],int n);

int main( )
{
	int A[100],n;
	nhap(A,n);
	xet(A,n);
	return 0;
}

void xet(int A[],int n)
{
	int d;
	for(int i=0; i<n-2;i++)
	{
		if(A[i]%2==0)
		{
			if(A[i+1]%2!=0 && A[i+2]%2==0)
				d = -1;
			if(A[i+1]%2==0)
				d= i+1;
		}
		if(A[i]%2!=0)
		{
			if(A[i+1]%2==0 && A[i+2]%2!=0)
				d = -1;
			if(A[i+1]%2!=0)
				d= i+1;
		}
	}
	printf("%d",d);
}

void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0; i<n;i++)
		scanf("%d",&A[i]);
}

