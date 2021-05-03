#include<stdio.h>
void main()
{
	int A[100];
	int n;
	nhapMAng(A,n);
	int kq=kiemTra(A,n);
	xuat(kq);
}
void nhapMang(int A[],int &n)
{
	scanf("%d",&n)
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int kiemTra(int A[],int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		if((A[i]%2==0&&A[i+1]%2!=0)||(A[i]%2!=0&&A[i+1]%2==0))
			return -1;
		return i;
		break;
	}
void xuat(int kq)
{
	if(k==-1)
		prinft("-1",kq);
}