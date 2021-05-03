#include<stdio.h>
void nhapMang(int A[][100], int &m, int &n);
void xuat(int kq);
int dongmin(int A[][100], int m, int n);
int soNT(int x);

void main()
{
	int A[100][100], m,n;
	nhapMang(A,m,n);
	int kq=dongmin(A,m,n);
	xuat(kq);
}
void nhapMang(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
			scanf("%d", &A[i][j]);
	}
}
void xuat(int kq)
{
	printf("%d", kq);
}
int soNT(int x)
{
	int t=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
			t++;
	}
	if(t==2)
		return 1;
	return 0;
}
int dongmin(int A[][100], int m, int n)
{
	int t=0, min,x=0;
	for (int k=0;k<n;k++)
	{
		if(soNT(A[0][k])==1)
			x=x+A[0][k];
	}
	min=x;
	for (int i=1;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(soNT(A[i][j])==1)
			    t=t+A[i][j];
		}
		if(t<min)
			min=t;
		t=0;	
	}
	return min;
}