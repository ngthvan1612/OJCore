#include "stdio.h"
#include "iostream"
#define SIZE 101
void nhap(int &n);
void xuat(int x);
void kt(int a[], int n);
void main()
{
	int n,a[SIZE];
	nhap(n);
	for(int i=0;i<n;i++)
	{
		nhap(a[i]);
	}
	kt(a,n);
	system("pause");
}
void nhap(int &n)
{
	scanf("%d",&n);
}
void xuat(int x)
{
	printf("%d",x);
}
void kt(int a[], int n)
{
	int y=-1;
	for(int i=0;i<(n-1);i++)
	{
		if(a[i]%2==0)
		{
			if(a[i+1]%2==1)
			{
			}
			else if(a[i+1]%2==0)
			{
				xuat(i+1);
				break;
			}
			else if(i==(n-2))
			{
				xuat(y);
				break;
			}
		}
		else if(a[i]%2==1)
		{
			if(a[i+1]%2==0)
			{
			}
			else if(a[i+1]%2==1)
			{
				xuat(i+1);
				break;
			}
			else if(i==(n-2))
			{
				xuat(y);
				break;
			}
		}
	}
}

