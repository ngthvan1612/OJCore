#include <stdio.h>
#define size 100

void nhap(int &m,int &n,int A[][size]);
bool isPrime(int a);
int sumPrime(int i,int n,int A[][size]);
int min(int n, int M[]);
int sumPrimeMin(int m, int n, int A[][size]);
void xuat(int kq);

int main()
{
	int m,n,A[size][size];
	nhap(m,n,A);

	int kq = sumPrimeMin(m,n,A);
	xuat(kq);

	return 0;
}

void xuat(int kq)
{
	printf("%d",kq);
}

int sumPrimeMin(int m, int n, int A[][size])
{
	int T[size];
	for(int i=0;i<m;i++)
	{
		T[i] = sumPrime(i,n,A);
	}

	return min(m,T);
}

int min(int n, int M[])
{
	int min = M[0];

	for(int i=1;i<n;i++)
	{
		if(M[i] < min)
			min = M[i];
	}

	return min;
}

int sumPrime(int i,int n, int A[][size])
{
	int sum =0;
	for(int j=0;j<n;j++)
	{
		if(isPrime(A[i][j]) == 1)
			sum +=A[i][j];
	}
	return sum;
}

bool isPrime(int a)
{
	if(a <= 1)
		return 0;
	else 
	{
		for(int i=2; i*i <= a;i++)
		{
			if(a % i == 0)
				return 0;
		}
		return 1;
	}
}

void nhap(int &m,int &n,int A[][size])
{
	scanf("%d%d",&m,&n);

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}