#include<stdio.h>

void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for (int i = 0; i<m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
}

int isSoNT(int n)
{
	int c = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			c++;
	if (c == 2)
		return 1;
	return 0;
}

int tinh(int A[][100], int m, int n)
{
	int min = 2000000;
	for (int i = 0; i<m; i++)
	{
		int s = 0;
		for (int j = 0; j < n; j++)
		{
			if (isSoNT(A[i][j]))
			{
				s = s + A[i][j];
			}
		}
		if (s < min)
				min = s;
	}
	return min;
}

void main()
{
	int A[100][100], m, n;
	nhap(A, m, n);
	int kq = tinh(A, m, n);
	printf("%d", kq);
}