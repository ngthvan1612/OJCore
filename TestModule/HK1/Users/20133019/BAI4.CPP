#include<stdio.h>
#define SIZE 100
void nhapMang(int A[][SIZE], int &m, int &n);
int ktNT(int n);
int tongNT1Hang(int A[][SIZE], int i,int n);
void tachMang(int A[][SIZE], int m, int n, int B[], int &nB);
int timMin(int B[], int nB);
void xuat(int kq);
void main()
{
	int A[SIZE][SIZE],m,n;
	nhapMang(A,m,n);
	int B[100], nB;
	tachMang(A,m,n,B,nB);
	int kq=timMin(B,nB);
	xuat(kq);
	
}
void nhapMang(int A[][SIZE], int &m, int &n)
{
	scanf("%d%d",&m, &n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int ktNT(int n)
{	int dem=0;
	for( int i=1;i<=n;i++)
	{
		if(n%i==0)
		dem=dem+1;
	}
	if(dem==2)
		return 1;
	else 
		return 0;
}
int tongNT1Hang(int A[][SIZE], int i,int n)
{
	int tong=0;
	for(int j=0;j<n;j++)
	{
		if(ktNT(A[i][j])==1)
			tong=tong+A[i][j];
	}
	return tong;
}
void tachMang(int A[][SIZE], int m, int n, int B[], int &nB)
{
	nB=0;
	for(int i=0;i<m;i++)
	{
		
		B[nB]=tongNT1Hang(A,i,n);
		nB++;
	}
}
int timMin(int B[], int nB)
{
	int min=B[0];
	for(int i=1;i<nB;i++)
	{
		if(B[i]<min)
			min=B[i];
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}

