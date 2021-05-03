#include <stdio.h>
int timMin(int A[], int x);
int NT(int x);
int xuli(int A[][100], int m, int n);
void nhap(int A[][100], int &m, int &n);
void main()
{
	int A[100][100], m, n;
	nhap(A, m,n);
	int kq = xuli(A, m, n);
	printf("%d", kq);
}
int timMin(int A[], int x)
{
	int min = A[x];
	for(int i = 1; i < x; i++){
		if(A[i] < min)
			min = A[i];}
	return min;
}
int NT(int x)
{
	int d = 0;
	for(int i = 1; i <= x; i++)
		if(x % i == 0)
			d++;
	if(d == 2)
		return 1;
	return 0;
}
int xuli(int A[][100], int m, int n)
{
	
	for(int i = 0; i < m; i++)
	{
		int sum = 0;
		for(int j = 0; j < m; j++)
		{
		sum += A[i][j];
		}
		printf("%d", sum);
	}
}
void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
}