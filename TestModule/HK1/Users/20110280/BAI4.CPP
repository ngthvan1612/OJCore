#include <stdio.h>
int  tinh (int B[100], int h);
void xuat (int kq);
void tong (int A[100][100], int m, int n, int B[100]);
void nhap (int A[100][100], int &m, int &n);
int songuyento (int x);
void main ()
{
	int A[100][100],m,n, B[100];
	nhap (A,m,n);
	tong(A,m,n,B);
	int kq= tinh(B,m);
	xuat (kq);
}
void nhap (int A[100][100], int &m, int &n)
{
	scanf  ("%d%d",&m,&n);
	for (int i =0;i<m;i++)
		for (int j =0;j<n;j++)
			scanf ("%d",&A[i][j]);
}
int songuyento (int x)
{
	if (x<2)
		return 0;
	else
	{
		for (int i =2;i<=x/2;i++)
			if (x%i==0)
				return 0;
		return 1;
	}
}
void tong (int A[100][100], int m, int n, int B[100])
{
			int sum=0;
			int h=0;
	for (int i =0;i<m;i++)
	{
		for (int j =0;j<n;j++)
		{
			if (songuyento (A[0][j])== 1)
				sum = sum + A[0][j];
		}

		B[h++] = sum;

	}
}
int  tinh (int B[100], int h)
{
	int min = B[0];
	for (int k =0;k<h;k++)
	{
		if (B[k]<=min)
			min = B[k];
	}
	return min;
}
void xuat (int kq)
{
	printf ("%d",kq);
}

		

