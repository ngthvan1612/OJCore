#include"stdio.h"
#include "iostream"
void nhap(int &n);
void xuat(int x);
void nhapmang(int m, int n, int a[][100]);
void tong(int m, int n, int a[][100]);
int ngto(int x);
void main()
{
	int m,n,a[100][100];
	nhap(m);
	nhap(n);
	nhapmang(m,n,a);
	tong(m,n,a);
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
void nhapmang(int m, int n, int a[][100])
{
	for (int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			nhap(a[i][j]);
		}
	}
}
int ngto(int x)
{
	for(int i=2;i<=x;i++)
	{
		if(x%i==0 && x!=i)
		{
			return 0;
			break;
		}
		else if(x==i)
		{
			return 1;
			break;
		}
	}
}
void tong(int m, int n, int a[][100])
{
	int y=1;
	int b[100];;
	for(int i=1;i<=m;i++)
	{
		b[y]=0;
		for(int j=1;j<=n;j++)
		{
			if(ngto(a[i][j])==1)
			{
				b[y]+=a[i][j];
			}
		}
		y++;
	}
	int min=b[1];
	for(int z=1;z<=(y-1);z++)
	{
		if(b[z]<min)
		{
			min=b[z];
		}
	}
	xuat(min);
}






