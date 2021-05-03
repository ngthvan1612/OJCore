#include <stdio.h>
int tinh(int A[][100], int h, int c);
void nhap(int &h, int &c, int A[][100]);
int tong(int A[][100], int VT, int c);
int laNT(int n);
void main()
{
	int h, c, A[100][100];
	nhap (h, c, A);
	int kq = tinh(A, h, c);
	printf("%d", kq);
}
void nhap(int &h, int &c, int A[][100])
{
	scanf("%d%d", &h, &c);
	for (int i = 0; i<h; i++)
	{
		for (int j =0; j<c; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
}

int tong(int A[][100], int VT, int c)
{
	int sum = 0;
	for (int i = 0; i< c; i++)
	{
		if (laNT(A[VT][i]) == 1)
			sum+=A[VT][i];
	}
	return sum;
}

int laNT(int n)
{
	if (n == 1)
		return 0;
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
				return 0;
		}
		return 1;
	}
}

int tinh(int A[][100], int h, int c)
{
	int min = tong(A, 0, c);
	for (int i = 1; i < h; i++)
	{
		if (tong(A, i, c) < min)
			min = tong(A, i, c); 
	}
	return min;
}