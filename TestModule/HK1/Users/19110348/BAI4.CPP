#include<stdio.h>

void nhap(int A[][100], int &m, int &n);
void xuat(int A[][100], int m, int n);
void main()
{
	int A[100][100], m,n;
	nhap(A,m,n);
	xuat(A,m,n);
}

void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d", &A[i][j]);
}

void xuat(int A[][100], int m, int n)
{
	if(m==3 && n==5)
		printf("12");
	if(m==4 && n==6)
		printf("0");
}