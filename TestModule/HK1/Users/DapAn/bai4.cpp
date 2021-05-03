#include<stdio.h>
#define SIZE 100
void nhap(int A[][SIZE], int &m, int &n);
void xuat(int x);
int tinhToan(int A[][SIZE], int m, int n);
int laNT(int x);
int timMin(int A[], int n);
void main()
{
	int A[SIZE][SIZE],m,n;
	nhap(A,m,n);
	int kq = tinhToan(A,m,n);
	xuat(kq);
}
int tinhToan(int A[][SIZE], int m, int n)
{
	int B[SIZE];
	for (int i=0;i<m;i++)
	{
		int t=0;
		for (int j=0;j<n;j++)
			if (laNT(A[i][j]))
				t = t + A[i][j];
		B[i]=t;
	}
	int kq = timMin(B,m);
	return kq;
}
int timMin(int A[], int n)
{
	int min = A[0];
	for (int i=1;i<n;i++)
		if (A[i]<min)
			min = A[i];
	return min;
}
int laNT(int x)
{
	int d=0;
	for (int i=1;i<=x;i++)
		if (x%i==0)
			d++;
	if (d==2)
		return 1;
	return 0;
}
void nhap(int A[][SIZE], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuat(int x)
{
	printf("%d",x);
}