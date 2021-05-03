#include<stdio.h>
#define SIZE 101
void Nhap(int A[SIZE][SIZE], int &m, int &n);
int Songuyento(int a);
void Xuly(int A[SIZE][SIZE], int m, int n);
void Xuat(int a);

void main()
{
	int A[SIZE][SIZE], m, n;
	Nhap(A, m, n);
	Xuly(A, m, n);
}

void Nhap(int A[SIZE][SIZE], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}

int Songuyento(int a)
{
	if (a<2)
		return 0;
	for (int i=2; i<a; i++)
		if (a%i==0)
			return 0;
	return 1;
}

void Xuly(int A[SIZE][SIZE], int m, int n)
{
	int sum, min = 99999999;
	for (int i=0; i<m; i++)
	{
		sum=0;
		for (int j=0; j<n; j++)
			if (Songuyento(A[i][j])==1)
				sum+=A[i][j];
		if (sum<min)
			min=sum;
	}
	Xuat (min);
}

void Xuat(int a)
{
	printf("%d", a);
}