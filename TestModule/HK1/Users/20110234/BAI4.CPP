#include<stdio.h>
void nhap(int&m,int&n,int A[][200]);
int laNT(int x);
int xuLi(int m,int n,int A[][200]);
void xuat(int kq);
void main()
{
	int m,n,A[200][200];
	nhap(m,n,A);
	int kq=xuLi(m,n,A);
	xuat(kq);
}
void nhap(int&m,int&n,int A[][200])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int laNT(int x)
{
	if (x<=1)
		return 0;
	else
	{
		for(int i=2;i<x;i++)
			if(x%i==0)
				return 0;
		return 1;
	}
}
int xuLi(int m,int n,int A[][200])
{
	int i,j,tong=0,min=1000000;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(laNT(A[i][j]))
				tong=tong+A[i][j];
			if(tong<min)
				min=tong;
		}
		tong=0;

	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}