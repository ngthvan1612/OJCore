# include <stdio.h>
# define SIZE 100
void nhapMang(int A[SIZe][SIZE], int &m, int &n);
void xuat (int kq);
int XuLy (int A[SIZE][SIZE], int m, int n);
void main ()
{
	int A[SIZE][SIZE];
	int m,n;
	nhapMang(A,m,n);
	int kq=XuLy(A,m,n);
	xuat (kq);
}
void nhapMang(int A[SIZe][SIZE], int &m, int &n)
{
	scanf ("%d%d", &m, &n);
	for (int i=0, i<m, i++)
		for (int j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}
void xuat (int kq)
{
	printf ("%d",kq);
}
int XuLy (int A[SIZE][SIZE], int m, int n)
{
	int S=0;
	for (int i=0, i<m, i++)
		S=S+A[i];
	return S;
}