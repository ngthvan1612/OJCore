#include<stdio.h>
int SNT(int x)
{
	int dem=0;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		{
			dem++;
		}
	}
	return dem;
}
int tongsonguyento(int A[][50],int m,int n,int C[])
{
	int nC=0;
	for(int i=0;i<m;i++)
	{
		int t=0;
		for(int j=0;j<n;j++)
		{
			if (SNT(A[i][j])==1)
			{
				t=t+A[i][j];
			}
		}
		C[nC++]=t;;
	}
	int min=C[0];
	for(int x=0;x<nC;x++)
	{	
		if(C[x]<min)
		{
			min=C[x];
		}
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}
void main()
{
	int A[50][50],C[50];
	int m,n,nC=0;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	int kq= tongsonguyento(A,m,n,C);
	xuat(kq);
}
