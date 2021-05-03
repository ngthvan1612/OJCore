#include<stdio.h>
void nhap(int a[][100],int &m,int &n);
int tongNTmin(int a[][100],int m,int n);
void xuat(int kq);
int laNT(int n);
void main()
{
	int a[50][100];
	int m,n;
	nhap(a,m,n);
	int kq= tongNTmin(a,m,n);
	xuat(kq);
}
void nhap(int a[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int tongNTmin(int a[][100],int m,int n)
{
	int min;
	int tong=0;
	int i,j;
	for(j=0;j<n;j++)
	{
		if(laNT(a[0][j]) == 1)
			tong += a[0][j];
	}
	min=tong;
	for(i=1;i<m;i++)
	{
		tong=0;
		for(j=0;j<n;j++)
		{
			if(laNT(a[i][j]) == 1)
				tong += a[i][j];
		}
		if(tong<min)
			min=tong;
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}
int laNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if (n%i==0)
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}