#include<stdio.h>

void man()
{	
	int m,n;
	int A[m][n];
	nhap(m,n,A);
	int kq=maxrow(m,n,A);
	xuat(kq);
}

void nhap(int &m,int &n,int A[][])
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}

	