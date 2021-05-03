#include<stdio.h>
#define SIZE 100

void main()
{
	int A[SIZE][SIZE], m, n;
	nhap(m);
	nhap(n);
	nhapMang(A, m, n);
	int kq = nhoNhat(A, m, n);
	xuat(kq);
}

void nhap(int &x)
{
	scanf ("%d", &x);
}

void nhapMang(int A[][SIZE], int m, int n)
{
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}

void xuat(int x)
{
	printf("%d", x);
}

int laNT (int x)
{
	int dem = 0;
	for (int i=1; i<=x; i++)
		if (x%i==0)
			dem++;
		if (dem==2)
			return 1;
		return 0;
}

int tongNT (int A[][SIZE], int m, int n)
{
	int tong = 0;
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			if (laNT==1) tong += laNT(A[i][j]);
			min
	}
}
