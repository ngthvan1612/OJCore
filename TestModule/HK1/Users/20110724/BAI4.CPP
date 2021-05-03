#include<stdio.h>

void nhap(int A[][100], int &m, int &n);
int LaNT(int a);
int tinh(int A[][100], int m, int n, int B[]);

int main()
{
	int A[100][100], B[100];
	int m, n;
	nhap(A, m, n);
	tinh(A, m, n, B);
	return 0;
}

void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	}
}

int LaNT(int a)
{
	int dem = 0;
	for(int i = 1; i <= a; i++)
	{
		if(a % i == 0)
			dem++;
	}
	if(dem == 2)
		return 1;
	return 0;
}

int tinh(int A[][100], int m, int n, int B[])
{
	for(int i = 0; i < m; i++)
	{
		int sum = 0;
		for(int j = 0; j < n; j++)
		{
			if(LaNT(A[i][j]))
				sum += A[i][j];
		}
		B[i] = sum;
		sum = 0;
	}
	int min = B[0];
	for(i = 1; i < m; i++)
	{
		if(B[i] < min)
			min = B[i];
	}
	printf("%d", min);
	return 0;
}