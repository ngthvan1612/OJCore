#include <stdio.h>
void nhap (int &m, int &n, int A[][100]);
int xulyxuat (int m, int n, int A[][100]);
int uocso (int a);
void xuat (int b);
void main ()
{
	int m,n;
	int A[100][100];
	nhap (m, n, A);
	int kq=xulyxuat(m,n,A);
	xuat (kq);
}
void nhap (int &m, int &n, int A[][100])
{
	scanf ("%d%d", &m, &n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}
int xulyxuat (int m, int n, int A[][100])
{
	int t=0;
	int s=9999;
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			if (uocso(A[i][j])==2)
				t+=A[i][j];
		if (t<s)
			s=t;
		t=0;
	}
	return s;
}
int uocso (int a)
{
	int z=0;
	for (int i=1; i<=a; i++)
		if (a%i==0)
			z++;
	return z;
}
void xuat (int b)
{
	printf ("%d", b);
}