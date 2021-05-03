#include <stdio.h>
#define R 100
#define C 100

void nhap(int A[][C], int &m, int &n);
int laSNT(int a);
int xuli(int A[][C], int m, int n);
void xuat(int kq);

void main()
{
	int A[R][C], m, n;
	nhap(A, m, n);
	int kq = xuli(A, m, n);
	xuat(kq);
}

void nhap(int A[][C], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
}

int laSNT(int a)
{	
	int t=0;
	if (a == 1)
		return 0;
	for (int i = 2; i < a; i++)
		if (a % i == 0)
			t++;
		if (t == 0)
			return 1;
		else
			return 0;
}

int xuli(int A[][C], int m, int n)
{
	int kq = 10000000;
	int tong = 0;
	for (int i = 0; i < m; i++)
	{
			for (int j = 0; j < n; j++)
				if (laSNT(A[i][j]) == 1)
					tong += A[i][j];
			if (kq > tong)
				kq = tong;
			tong = 0;
	}
	return kq;
}

void xuat(int kq)
{
	printf("%d", kq);
}