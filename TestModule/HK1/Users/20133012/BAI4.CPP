#include <stdio.h>
#define size 100
void nhap (int A[][size], int &m, int &n);
void xuat (int x);
int nt ( int n);
void tach ( int A[][size], int m, int n, int B[], int &nB);
int min ( int B[], int nB);
void  main ()
{
	int A[size][size],m,n;
	int B[size], nB;
	nhap (A, m,n);
	tach (A,m,n, B, nB);
	int kq= min ( B, nB);
	xuat (kq);
}
void nhap (int A[][size], int &m, int &n)
{
	scanf ("%d%d", &m, &n);
	for (int i=0; i<m; i++)
		for ( int j=0; j< n; j++)
			scanf ("%d", & A[i][j]);
}
int nt ( int n)
{
	int d=0;
	for (int i=1; i<=n; i++)
	{
		if ( n %i==0 )
			d++;
	}
	if ( d==2)
		return 1;
	else
		return 0;
}
void tach ( int A[][size], int m, int n, int B[], int &nB)
{
	nB=0;
	int s;
	for (int i=0; i<m; i++)
	{
		s=0;
		for (int j=0; j<n; j++)
		{
			if ( nt ( A[i][j]))
				s= s+ A[i][j];
		}
		B[nB] = s;
		nB ++;
	}
}
int min ( int B[], int nB)
{
	int min = B[0];
	for (int i=1; i< nB; i++)
	{
		if ( min > B[i])
			min= B[i];
	}
	return min;
}
void xuat (int x)
{
	printf ("%d", x);
}
