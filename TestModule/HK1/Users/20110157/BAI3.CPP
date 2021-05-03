#include<stdio.h>
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
int tinhtoan(int A[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(A[i]%2==0)
		{
			if(A[i+1]%2==0)
				return i+1;
		}
		if(A[i]%2!=0)
		{
			if(A[i+1]%2!=0)
				return i+1;
		}
	}
	return -1;
}
void xuat(int kq)
{
	printf("%d",kq);
}
void main()
{
	int A[100], n;
	nhap(A,n);
	int kq=tinhtoan(A,n);
	xuat(kq);
}