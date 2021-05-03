#include<stdio.h>
#define SIZE 100
void nhapMang(int A[][SIZE], int &m, int &n);
void xuat(int x);
int laNT(int x);
int tongNT(int A[][SIZE], int m, int n);
void main()
{
	int A[SIZE][SIZE], m, n;
	nhapMang(A,m,n);
	int kq=tongNT(A,m,n);
	xuat(kq);
}
void nhapMang(int A[][SIZE], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &A[i][j]);
}
void xuat(int x)
{
	printf("%d", x);
}
int laNT(int x)
{
	int dem=0;
	for(int i=1;i<x;i++)
		if(x%i==0)
			dem++;
	if(dem==2)
		return 1;
	return 0;
}
int tongNT(int A[][SIZE], int m, int n)
{
	int tong=0; 
	int min;
	for(int i=0; i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(laNT(A[i][j])==1)
			{
				tong+=A[i][j];
			}
			min=tong;
		}
		if(min<tong)
			min=tong;
	}
	return min;
}

		