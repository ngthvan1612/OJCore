#include<stdio.h>
void xuat(int t);
void nhap(int A[],int &n);
int xuli(int A[],int n);
void main()
{
	int A[100];
	int n;
	nhap(A,n);
	int t=xuli(A,n);
	xuat(t);
}
int xuli(int A[],int n)
{
	for(int j=0;j<n-1;j++)
		if((A[j]%2==0&&A[j+1]%2==0)||(A[j]%2==1&&A[j+1]%2==1))
			return j+1;
	return -1;
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
void xuat(int t)
{
	printf("%d",t);
}