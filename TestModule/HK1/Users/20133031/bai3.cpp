#include<stdio.h>
void nhap(int a[], int &n);
void xuat(int x);
int check(int a[],int n);
void main()
{
	int a[98],n;
	nhap(a,n);
	int kq=check(a,n);
	xuat(kq);
}
void nhap(int a[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void xuat(int x)
{
	printf("%d",x);
}
int check(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(a[i]%2==0)
		{
			if(a[i+1]%2==0)
				return a[i+1];
		}
		if(a[i]%2!=0)
		{
			if(a[i+1]%2!=0)
				return a[i+1];
		}
	}
	return -1;
}