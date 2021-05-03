#include<stdio.h>
void nhap( int &m, int &n, int A[][100]);
int laNT(int n);
int tongmin(int m, int n, int A[][100]);
void xuat(int kq);
void main()
{
	int m, n, A[100][100];
	nhap(m, n, A);
	int kq=tongmin(m, n, A);
	xuat(kq);
}
void nhap( int &m, int &n, int A[][100])
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
int laNT(int n)
{
	int dem=0;
	for(int i=1; i<=n; i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return 1;
	return 0;
}
int tongmin(int m, int n, int A[][100])
{
	int tong=0;
	int nB=0;
	int B[100];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if( laNT(A[i][j])==1 )
				tong=tong+A[i][j];
		}
		B[nB]=tong;
		nB++;
		tong=0;
	}
	int min=B[0];
	for(int k=0; k<nB; k++)
		if(B[k]<min)
			min=B[k];
	return min;
}
void xuat(int kq)
{
	printf("%d", kq);
}


