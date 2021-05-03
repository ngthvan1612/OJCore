#include <stdio.h>
#define M 100
#define N 100

void xuat (int x);
void nhap (int A[][N], int &m, int &n);
int tongnhonhat (int A[][N], int m, int n);
int laNT( int n);
void main ()
{
	int A[M][N]; int m,n;
	nhap (A,m,n);
	int kq=tongnhonhat (A,m,n);
	xuat (kq);
}
void nhap (int A[][N], int &m, int &n)
{
	scanf ("%d%d", &m,&n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}
int tongnhonhat (int A[][N], int m, int n)
{
	int tong; int B[100]; int b=0;
	for (int i=0; i<m; i++)
	{
	  tong=0;
	  for (int j=0; j<n; j++)
	  {
		  if (laNT(A[i][j]))
		  {
			  tong=tong+A[i][j];
		  }
	  }
	  B[b++]=tong;
	}
	int min=B[0];
	for (int k=0; k<b; k++)
	{
		if (B[k]<min)
		{
			min=B[k];
		}
	}
	return min;
}
int laNT( int n)
{ 
	int dem=0;
	for (int i=1; i<=n; i++)
	{
		if (n%i==0)
			dem++;
	}
	if (dem==2) return 1;
	return 0;
}
void xuat (int x)
{
	printf ("%d",x);
}