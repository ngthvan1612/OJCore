#include<stdio.h>
int laNT(int a);
int NT(int A[100][100], int m, int n, int i);
int minNT(int A[100][100], int m, int n);
void xuat(int n);
void nhap(int A[100][100], int &m, int &n);
void main()
{
	int A[100][100];
	int m,n;
	nhap(A,m,n);
	int t= minNT(A,m,n);
	xuat(t);
}
int laNT(int a)
{
	int d=0;
	for(int i=0; i<a; i++)
	{
		if(a%i==0) d++;
	}
	if(d==2) return 1;
	return 0;
}
int NT(int A[100][100], int m, int n, int i)
{
	int tong=0;
	for(int j=0; j< n; j++)
	{
		if( laNT(A[i][j]) ) tong=tong+A[i][j];
	}
	return tong;
}
int minNT(int A[100][100], int m, int n)
{
	int i=0;
	int k, min= NT(A,m,n,i);
	for(i; i<m ; i++)
	{
		k=NT(A,m,n,i);
		if(min > k) min=k;
	}
	return min;
}
void xuat(int n)
{
	printf("%d", n);
}
void nhap(int A[100][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
}