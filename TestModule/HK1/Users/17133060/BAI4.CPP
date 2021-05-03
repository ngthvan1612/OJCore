#include <stdio.h>

void NhapMg(int A[][100], int& m, int& n)
{
	scanf("%d", &m, &n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf_s("%d", &A[i][j]);
}

void main()
{
	int a[100][100];
	int m, n;
	NhapMg(a, m, n);
	printf("0");
}
