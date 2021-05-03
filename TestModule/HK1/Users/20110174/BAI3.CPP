#include<stdio.h>
void xuat(int kq);
void nhap(int a[],int&n);
int ktchanle(int a[],int n);
void main()
{
	int a[200],n;
	nhap(a,n);
	int kq=ktchanle(a,n);
	xuat(kq);
}
void nhap(int a[],int&n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int ktchanle(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(a[i-1]%2==0)
			if(a[i]%2==0)
				return i;
		if(a[i-1]%2!=0)
			if(a[i]%2!=0)
				return i;
	}
	return -1;
}