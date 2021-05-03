#include<stdio.h>
void input(int A[][100], int &m, int &n);
int tinh(int A[][100], int m, int n);
int languyento(int A[][100], int i, int j);
void main()
{
	int A[100][100], m, n;
	input(A, m, n);
	int value = tinh(A, m, n);
	printf("%d", value);
}
void input(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
}
int tinh(int A[][100], int m, int n)
{
	int min = 0, tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (languyento(A, i, j)==1)
				tong += A[i][j];
			if (tong > 0)
			{
				min = tong;
				break;
			}
			else
				tong = 0;
	}
	if (min > 0)
	{
		for (i = 0; i < m; i++)
		{
			tong = 0;
			for (int j = 0; j < n; j++)
				if (languyento(A, i, j)==1)
					tong += A[i][j];
			if (tong < min)
				min = tong;
		}
		return min;
	}
	else
		return 0;
}
int languyento(int A[][100], int i, int j)
{
	int dem = 0;
	for (int t = 1; t <= A[i][j]; t++)
		if (A[i][j] % t == 0)
			dem++;
	if (dem == 2)
		return 1;
	else
		return 0;
}