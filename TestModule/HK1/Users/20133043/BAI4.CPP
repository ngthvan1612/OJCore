#include<stdio.h>
#define size 100
void nhap(int A[][size], int &m, int &n);
int checkPrime(int n);
int central(int A[][size], int m, int n);

void main()
{
	int m, n;
	int A[size][size];
	nhap(A, m, n);
	int kq=central(A, m, n);
	printf("%d", kq);
}
void nhap(int A[][size], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
      for(int j=0; j<n; j++)
		  scanf("%d", &A[i][j]);
}
int checkPrime(int n)
{
	if (n < 2)
	  return 0;
	int dem=0;
	for(int i=2; i<=n; i++)
	{
		if (n % i == 0)
            dem++;
	}
	if (dem == 1)
		 return 1;
	return 0;
}
int central(int A[][size], int m, int n)
{
	int B[size];
	int sum=0;
	int i=0;
	for(; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if (checkPrime(A[i][j])==1)
				sum += A[i][j];
		}
		B[i]=sum;
		sum=0;
	}
	int min=B[0];
	for(int k=1; k<m; k++)
	{
		if (min > B[k])
			min=B[k];
	}
	return min;
}