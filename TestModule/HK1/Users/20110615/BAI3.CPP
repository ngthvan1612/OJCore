#include<stdio.h>
void nhap(int a[],int &n);
int kiemtra(int a[],int n,int &x);
void xuat(int kq,int x);
int main()
{
	int a[100];
	int n;
	nhap(a,n);
	int x;
	int kq=kiemtra(a,n,x);
	xuat(kq,x);
	return 0;
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int kiemtra(int a[],int n,int &x)
{
	int flag=-1;
	x=0;
	for(int i=1;i<n-1;i++)
	{
		if((a[i]%2==0)&&(a[i+1]%2==0)&&(a[i-1]%2==1))
		{
			flag=1;
			x=i+1;
		}
		else if((a[i]%2==0)&&(a[i+1]%2==0)&&(a[i-1]%2==0))
		{
			flag=1;
			x=i;
		}
		else if((a[i]%2==0)&&(a[i+1]%2==1)&&(a[i-1]%2==0))
		{
			flag=1;
			x=i;
		}
		else if((a[i]%2==1)&&(a[i+1]%2==1)&&(a[i-1]%2==0))
		{
			flag=1;
			x=i+1;
		}
		else if((a[i]%2==1)&&(a[i+1]%2==0)&&(a[i-1]%2==1))
		{
			flag=1;
			x=i;
		}
		else if((a[i]%2==1)&&(a[i+1]%2==1)&&(a[i-1]%2==1))
		{
			flag=1;
			x=i;
		}
	}
	return flag;
}
void xuat(int kq,int x)
{
	if(kq==-1)
	{
		printf("%d",kq);
	}
	else if(kq==1)
	{
		printf("%d",x);
	}
}