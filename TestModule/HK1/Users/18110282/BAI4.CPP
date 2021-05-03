#include <stdio.h>

void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++)
		{
		for(int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
}

void main()
{
	int m, n;
	int A[m][n];
	nhap(A,m,n);
}