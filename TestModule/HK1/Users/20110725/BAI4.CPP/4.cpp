#include<stdio.h>

void nhap(int &m, int &n, int A[][100]);
void tachmang(int m, int n, int A[][100], int B[]);
int MAX(int m, int B[]);
void xuat(int kt);

void main()
{
	int m,n,A[100][100],B[100];
	nhap(m,n,A);
	tachmang(m,n,A,B);
	int kt=MAX(m,B);
	xuat(kt);
}

void nhap(int &m, int &n, int A[][100])
{
	scanf("%d%d", &m,&n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j< n; j++)
			scanf("%d", &A[i][j]);
}

void tachmang(int m, int n, int A[][100], int B[])
{
	for(int i = 0; i < m; i++)
	{
		int sum = 0;
		for(int j = 0; j< n; j++)
			sum = sum + A[i][j];
		B[i] = sum;
	}
}

int MAX(int m, int B[])
{
	int max = B[0];
	int vitri = 0;
	for(int i = 0; i < m; i++)
		if(B[i] > max)
		{
			max = B[i];
			vitri = i;
		}
	return vitri;	
}

void xuat(int kt)
{
	printf("%d", kt);
}

