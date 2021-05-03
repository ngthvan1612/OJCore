#include<stdio.h>
#define SIZE 100

void Nhap(int A[],int &n);
int xuly(int A[],int n);

void main()
{
	int A[SIZE],n;
	Nhap(A,n);
	int kq=xuly(A,n);
	printf("%d",kq);
}

void Nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}

int xuly(int A[],int n)
{
	for(int i=0;i<n-1;i++)
		if((A[i]+A[i+1])%2==0)
			return i+1;
	return -1;
}