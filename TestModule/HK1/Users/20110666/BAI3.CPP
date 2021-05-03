#include<stdio.h>
void nhap(int A[],int &n);
int ktraChan_le(int A[],int n);
void xuat(int kq);
void main()
{
	int A[100];
	int n;
	nhap(A,n);
	int kq=ktraChan_le(A,n);
	xuat(kq);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int ktraChan_le(int A[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if((A[i]%2==0 && A[i+1]%2==0) || (A[i]%2!=0 && A[i+1]%2!=0))
			return i+1;
	}
	return -1;
}
void xuat(int kq)
{
	printf("%d",kq);
}