#include<stdio.h>
#include<math.h>
int TimMin(int A[], int n);
void Nhap(int A[][200], int &m, int &n);
void TinhTong(int A[][200], int m, int n, int B[], int &nB);
int NT(int n);
void main()
{
	int A[200][200], m,n, B[200], nB;
	Nhap(A,m,n);
	TinhTong(A,m,n,B,nB);
	int kq = TimMin(B,nB);
	printf("%d", kq);
}

void Nhap(int A[][200], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i = 0; i< m; i++)
		for(int j = 0; j < n;j++)
			scanf("%d", &A[i][j]);
}

void TinhTong(int A[][200], int m, int n, int B[], int &nB)
{
	nB = 0;
	for(int i = 0; i < m; i++)
	{
		int t = 0;
		for(int j = 0; j < n; j++)
		{
			if( NT(A[i][j]) == 1 )
				t += A[i][j];
		}
		B[nB++] = t;
	}
}

int NT(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n%i == 0)
			return 0;
	return 1;
}

int TimMin(int A[], int n)
{
	int min = A[0];
	for(int i = 1 ;i < n; i++)
		if(A[i] < min)
			min = A[i];
	return min;
}