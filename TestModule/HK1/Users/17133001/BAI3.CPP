#include<stdio.h>


void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}

int tinh(int A[], int n)
{
	int s = -1;
	if(s = -1)
	{
		s = -1;
	}
	else 
	{
		s = 2;
	}
	return s;
}



void xuat(int kq)
{
	printf("%d",kq);
}

void main()
{
	int A[100];
	int n;
	nhap(A,n);
	int kq = tinh(A,n);
	xuat(kq);
}