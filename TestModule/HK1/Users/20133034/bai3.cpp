#include<stdio.h>
#define size 100
void nhap(int a[],int &n);
int kiemtra(int a[],int n);
void xuat(int s);
void main()
{
	int a[size],n;
	nhap(a,n);
	int s=kiemtra(a,n);
	xuat(s);
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int kiemtra(int a[],int n)
{
	 int s=-1;
	for(int i=0;i<n-1;i++)
		if(a[i]%2==0&&a[i+1]%2==0||a[i]%2!=0&&a[i+1]%2!=0)
		{
			s=i+1;
			break;
		}
	return s;
}
void xuat(int s)
{
	printf("%d",s);
}