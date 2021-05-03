#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void nhap(int A[][200],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		scanf("%d",&A[i][j]);
}

void xuat(int kq)
{
	printf("%d",kq);
}

int prime(int x)
{
	if(x<2)
			return 0;
	else
		for(int i=2;i<=int(sqrt(x));i++)
			if(x%i==0) 
				return 0;
	return 1;
}

int tinh(int A[][200],int m,int n)
{
	int s,M=100000;
	for(int i=0;i<m;i++)
		{
			s=0;
			for (int j=0;j<n;j++)
				s+=A[i][j]*prime(A[i][j]);
			if(s<M)
				M=s;
		}		
	return M;
}

void main()
{
	int n,m;
	int A[200][200];
	nhap(A,m,n);
	int kq=tinh(A,m,n);
	xuat(kq);
}