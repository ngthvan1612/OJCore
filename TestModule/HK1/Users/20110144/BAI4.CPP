#include<stdio.h>
#define size 100
void nhapMang(int A[size][size], int &m, int &n);
void tongDong(int A[size][size], int m, int n, int B[]);
int timMin(int B[], int n);
void xuat(int kq);
void main()
{
	int A[size][size];
	int m,n;
	nhapMang(A,m,n);
	int B[size];
    tongDong(A,m,n,B);
	int kq=timMin(B,m);
	xuat(kq);
}
void nhapMang(int A[size][size], int &m, int &n)
{
	scanf("%d%d", &m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
	}
}
void tongDong(int A[size][size], int m, int n, int B[])
{
	for(int i=0;i<m;i++)
	{
		int t=0;
		for(int j=0; j<n; j++)
		{
			 t=t+A[i][j];
		}
		B[i]=t;	
	}
}
int timMin(int B[], int n)
{
	int min=B[0];
	for(int i=1; i<n; i++)
	{
		if(B[i]<min)
			min=B[i];
	}
	return min;
}
void xuat(int kq)
{
	printf("%d", kq);
}


