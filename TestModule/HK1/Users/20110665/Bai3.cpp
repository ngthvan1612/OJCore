#include<stdio.h>
void nhap(int &n,int A[]);
int xuly(int n,int A[]);
void xuat (int kq);



void main()
{
	int n,A[100];
	nhap(n,A);
	int kq=xuly(n,A);
	xuat(kq);
}
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int xuly(int n,int A[])
{
	for (int i=0;i<n-1;i++)
	{
		if ((A[i]%2==0&&A[i+1]%2!=0)||(A[i]%2!=0&&A[i+1]%2==0))
			return -1;
	}
}
void xuat (int kq)
{
	printf("%d",kq);
}

