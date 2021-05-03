#include <stdio.h>
void nhap(int &m, int &n, int A[][100]);
int sNT(int a);
int TimMin(int a, int A[]);
int xuly(int m, int n, int A[][100]);
int main ()
{
	int m,n;
	int A[100][100];
	nhap(m,n,A);
	xuly(m,m,A);
	return 0;
}
void nhap(int &m, int &n, int A[][100])
{
	scanf("%d%d",&m,&n);
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
int sNT(int a)
{
	int d = 0;
	for(int i = 1; i <= a; i++)
	{
		if(a % i == 0)
		{
			d++;
		}
	}
	if(d == 2)
	return 1;
	return 0;
}
int TimMin(int a, int A[])
{
	int min = A[0];
	for(int i = 0; i < a; i++)
	{
		if(A[i] < min)
		{
			min = A[i];
		}
	}
	return min;
}
int xuly(int m, int n, int A[][100])
{
	int kq = 20000;
	for(int i = 0; i < m; i++)
	{
		int sum = 0;
		for(int j = 0; j < n; j++)
		{
			if(sNT(A[i][j]) == 1)
			{
				sum = sum + A[i][j];
			}
		}
		if(sum <= kq)
		kq = sum;
	}
	return kq;
}
