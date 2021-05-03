#include<stdio.h>
void xuat(int x);
void nhap(int &m, int &n, int A[][100]);
int tinhtong(int m, int n, int A[][100]);
int kiemtra(int x);
void main()
{
	int m,n;
	int A[100][100];
	nhap(m,n,A);
	int kq=tinhtong(m,n,A);
	xuat(kq);
}

void nhap(int &m, int &n, int A[][100])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
}

int tinhtong(int m, int n, int A[][100])
{
	int tongmin=0;
	int tong=0;
	for(int k=0;k<n;k++)
	{
		if(kiemtra(A[0][k])==1)
		{
			tongmin=tongmin+A[0][k];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(kiemtra(A[i][j])==1)
			{
				tong=tong+A[i][j];
			}
		}
		if(tong<tongmin)
		{
			tongmin=tong;
		}
		tong=0;
	}
	return tongmin;
}

int kiemtra(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			d++;
		}
	}
	if(d==2) return 1;
	return 0;
}

void xuat(int x)
{
	printf("%d",x);
}