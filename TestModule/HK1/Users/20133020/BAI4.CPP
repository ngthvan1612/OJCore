#include <stdio.h>
#define SIZE 100
#include <math.h>
void nhap(int A[SIZE][SIZE], int &m, int &n);
int snt(int n);
int duyettong(int A[SIZE][SIZE], int m, int n);
int tongnhonhat(int A[SIZE], int n);
void xuat(int kq);
void main()
{
	int A[SIZE][SIZE], m,n;
	nhap(A,m,n);
	int kq= duyettong(A,m,n);
	xuat(kq);
}
void nhap(int A[SIZE][SIZE], int &m, int &n)
{
	scanf("%d%d", &m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d", &A[i][j]);
}
int snt(int n)
{
	int d=0;
	for (int i=1;i<=n;i++)
		{
			if (n%i==0)
				d++;
		}
	if (d==2)
		return 1;
	return 0;
}
int duyettong(int A[SIZE][SIZE], int m, int n)
{
	int B[SIZE]={0};
	int S=0;
	for (int i=0;i<m;i++)
		{
			for (int j=0;j<n;j++)
				if (snt(A[i][j]))
					{
						S+=(snt(A[i][j]));
						B[i]+=S;
					}
		}
	int kt=tongnhonhat(B,m);
	return kt;
	
}
int tongnhonhat(int A[SIZE], int n)
{
	int min=A[0];
	for (int i=0;i<n;i++)
		if (A[i]<min)
			{
				min=A[i];
			}
	return min;
}
void xuat(int kq)
{
	printf("%d", kq);
}

	
