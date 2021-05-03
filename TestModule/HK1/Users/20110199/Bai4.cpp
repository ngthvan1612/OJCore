#include<stdio.h>
#define SIZE 100
void nhap(int A[], int &m, int &n);
int timsoNT(int A[][SIZE], int A, int mA, int nA, int B[][SIZE], int B, int mB, int nB);
int laNT(int x);
int tinhtong(int B[][SIZE]; int mB; int nB);
void main()
{
	int A[SIZE][SIZE];
	int m,n
	nhap(A,m,n);
	int kq=minsum(A,m,n);
	xuat(kq);
}
void nhap(int A[], int &m, int &n)
{
	scanf("%d", m);
	for (int i=0; i<m, i++)
		scanf("%d",n);
	     for (j=0; j<n; j++)
			 scanf("%d", &A[i][j]);
}
void xuat(int x)
{
	printf("%d",x);
}
int timsoNT(int A[][SIZE], int A, int mA, int nA, int B[][SIZE], int B, int mB, int nB)
{
	nB=0;
	mB=0;
	for (int i=0; i<mA;i++)
	{
		int B[i][];
		for (int j=0; j<nA; j++)
		{if(laNT(A[i][j]))
		{
			B[mB][nB]=A[i][j];
			mB++;
			nB++;
		}
		}
	}
}
int laNT(int x)
{
	int d=0
		for (int i=1; i<x; i++)
			if (x%i==0)
				d++;
		if(d==2)
			return 1;
		return 0;
}
int tinhtong(int B[][SIZE]; int mB; int nB)
{
	for(int i=0; i<mB; i++)
	{
		int sum=0;
		for (int j=0;j<nB; j++)
				sum = sum + B[i][j];
	}
}
int timmin(int A[)