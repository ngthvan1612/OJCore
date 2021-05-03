#include<stdio.h>
#define size 100
void nhap(int a[][size],int &n,int &m);
int kiemtra(int a[][size],int n,int m);
int lsnt(int m);
void xuat(int s);
void main()
{
	int a[size][size],n,m;
	nhap(a,n,m);
	int s=kiemtra(a,n,m);
	xuat(s);
}
void nhap(int a[][size],int &n,int &m)
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
int kiemtra(int a[][size],int n,int m)
{
	int s=0;
	for(int k=0;k<n;k++)
	   for(int l=0;l<m;l++)
		  s=s+a[k][l];
	for(int i=0;i<n;i++)
	{
		int d=0;
		for(int j=0;j<m;j++)
			if(lsnt(a[i][j])==1)
				d=d+a[i][j];
		if(d<s)
			s=d;
	}
	return s;
}
int lsnt(int m)
{
	int d=0;
	for(int i=1;i<=m;i++)
		if(m%i==0)
			d++;
	if(d==2)
		return 1;
	else
		return 0;
}
void xuat(int s)
{
	printf("%d",s);
}