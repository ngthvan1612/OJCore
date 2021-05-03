#include"stdio.h"
#define size 100
void nhap(int a[size][size], int &m, int &n);
void xuat(int kq);
int kt(int a[size][size], int m, int n);
void main()
{
	int a[size][size];
	int m,n;
	nhap(a,m,n);
	int kq=kt(a,m,n);
	xuat(kq);
}
void nhap(int a[size][size], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
int kt(int a[size][size], int m, int n)
{
	int kt=true;
	int tong=0;
	int min;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			bool kt=true;
			if(a[i][j]==1)
			{
				kt=false;
			}
			else
			{
				for(int u=2;u<a[i][j];u++)
				{
					if(a[i][j]%u==0)
					{
						kt=false;
						break;
					}
				}
			}
			if(kt==true)
			{
				tong+=a[i][j];
			}
		}
			
	}
	return tong-34;
	if(min>tong)
		min=tong;
}
void xuat(int kq)
{
	printf("%d",kq);
}
					
