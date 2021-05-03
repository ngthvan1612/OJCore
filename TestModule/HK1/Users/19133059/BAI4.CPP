#include<stdio.h>
#define size 100
void main()
{
	int A[size][size];
	int B[size];
	int nB;
	int m,n;
	nhap(m,n);
	nhapMang(A,m,n);
	tinhTong
	
}
void tinhTong(int A[size][size],int m,int n)
{
	int tong=0;
	int B[size];
	int nB=0;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
           tong=tong+A[i][j];
		}
		B[nB++]=tong;
	}
}
void timMin(int B[],int nB)
{
	max =B[0];
	for (int i=0;i<nB;i++)
	{
		if (B[i] <max)
		{
			min=B[i];
		}
	}
	return max;
}
void nhap(int &m,int &n)
{
	scanf("%d%d", &m,&n);
}
void nhapMang(int A[size][size],int m,int n)
{
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
