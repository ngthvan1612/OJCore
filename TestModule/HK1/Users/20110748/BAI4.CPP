# include <stdio.h>
#define SIZE 100
void nhap (int A[][SIZE], int &m, int&n);
void xuat (int kq);
int min (int A[], int n);
int xuly (int A[][SIZE], int m, int n);
void main ()
{
	int A[SIZE][SIZE], m,n;
	nhap (A,m,n);
	int kq= xuly (A, m,n);
	xuat (kq);
} 
void nhap (int A[][SIZE], int &m, int&n)
{
	scanf ("%d%d", &m, &n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}
void xuat (int kq)
{
	printf ("%d", kq);
}
int min (int A[], int n)
{	
	int min = A[0];
	for (int i=1; i<n; i++)
		if (min > A[i]) min=A[i];
	return min;
}
int xuly (int A[][SIZE], int m, int n)
{
	int tongDong[SIZE];
	for (int i=0; i<m; i++)
	{
		int tongpt= A[i][0];
		for (int j=1; j<n; j++)
		{
			tongpt= tongpt + A[i][j];
		}
		tongDong[i]=tongpt;
	}
	int tongnhonhat= min(tongDong,m);
	return tongnhonhat;
}
