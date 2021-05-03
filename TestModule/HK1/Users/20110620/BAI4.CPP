#include<stdio.h>
void nhap (int &m, int &n, int A[][100]);
int laSNT(int  x);
int bai_lam (int n, int m, int A[][100]);
void xuat (int x);
void main ()

{
	int m,n,A[100][100];
	nhap (m,n,A);
	int kq = bai_lam(m,n,A);
	xuat (kq);
}
void nhap (int &m, int &n, int A[][100])
{
	scanf ("%d%d", &m, &n);
	int i,j;
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}
int laSNT(int  x)
{
	int i, dem =0;
	for (i =1; i<=x; i++)
		if (x%i==0)
			dem ++;
	if (dem ==2)
		return 1;
	else
	return 2;
}
int bai_lam (int n, int m, int A[][100])
{
	int nb;
	nb =0; 
	int B[100], tong,i,j;
	for (i=0; i<m; i++)
	{
		tong =0;
		for (j =0; j<n; j++)
		{
			if (laSNT(A[i][j])==1)
			{
				tong = tong + A[i][j];
			}
		}

			B[nb++]= tong;
	}

	int min = B[0];
	for (i=0; i<nb; i++)
		if (min >B[i])
			min = B[i];
	/*for (i=0; i<nb; i++)
		if (max == B[i])
		{
			return i;
			break;
		}*/
	return min;

}
void xuat (int x)
{
	printf ("%d", x);
}