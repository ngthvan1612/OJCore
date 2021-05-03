#include<stdio.h>
#define SIZE 100
void nhap(int &n,int A[]);
int chanle(int n,int A[]);
void xuat(int kq);
void main()
{
	int A[SIZE];
	int n;
	nhap(n,A);
	int kq=chanle(n,A);
	xuat(kq);
}
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for(int i=1;i<n;i++)
		scanf("%d",&A[i]);
}
int chanle(int n,int A[])
{
	for(int i=0;i<=n;i++)
	{
		if(A[i]%2==0&&A[i+1]%2!=0)
			return -1;
		else if((A[i]%2!=0&&A[i+1]%2!=0)||(A[i]%2==2&&A[i+1]%2!=0))
			return i+1;
	}
}
void xuat(int kq)
{
	printf("%d",kq);
}
