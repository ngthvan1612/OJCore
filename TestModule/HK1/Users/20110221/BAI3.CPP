#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 

void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}

void xuat(int kq)
{
	printf("%d",kq);
}

int tinh(int A[], int n)
{
	int kq=-1;
	for(int i=0;i<n-1;i++)
		if((A[i]%2==0 && A[i+1]%2==0) || (A[i]%2==1 && A[i+1]%2==1))
			return(i+1);
	return kq;
}


void main()
{
	int n,A[200];
	nhap(A,n);
	int kq=tinh(A,n);
	xuat(kq);
}