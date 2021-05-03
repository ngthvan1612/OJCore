#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int is_ngTo(int a);
int minSumNgto(int A[][100], int m, int n);
int minArr(int A[], int n);
void scanArray(int A[][100], int m, int n);

void main()
{
	int A[100][100], m ,n;
	scanf("%d%d", &m, &n);
	scanArray(A,m,n);
	
	printf("%d", minSumNgto(A,m,n));
}

int minSumNgto(int A[][100], int m, int n)
{
	int tongDong[100];
	for(int i = 0; i< m;i++)
	{
		int sumNgto = 0;
		for(int j = 0; j < n; j++)
		{
			if(is_ngTo(A[i][j]))
				sumNgto += A[i][j];
		}
		tongDong[i] = sumNgto;
	}

	return minArr(tongDong, m);
}

int minArr(int A[], int n)
{
	int min = A[0];
	for(int i = 1; i < n ;i++)
	{
		if(min > A[i])
			min = A[i];
	}
	return min;
}

void scanArray(int A[][100], int m, int n)
{
	for(int i = 0;i < m; i++)
		for(int j = 0; j <n ;j++)
			scanf("%d", &A[i][j]);
}

int is_ngTo(int a)
{
	for(int i = 2; i<= a/2;i++)
	{
		if(a % i == 0)
			return 0;
	}
	return 1;
}
