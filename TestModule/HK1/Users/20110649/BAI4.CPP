#include<stdio.h>
void xuat(int kq);
void nhap(int A[100][100], int &m, int &n);
int ktra(int A[100][100], int m, int );
int ngto(int x);
void main()
{
	int m, n, A[100][100];
	nhap(A,m,n);
	int kq=ktra(A,m,n);
	xuat(kq);
}
int ktra(int A[100][100], int m, int n)
{
	int C[100];
	for(int i=0; i<m;i++)
	{
		C[i]=0;
		for(int j=0; j<n; j++)
			if(ngto(A[i][j]))
				C[i]+=A[i][j];
	}
	int kq=C[0];
	for(int u=1; u<m; u++)
		kq=kq<C[u]?kq:C[u];
	return kq;
}
void nhap(int A[100][100], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&A[i][j]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int ngto(int x)
{
	if(x<2)
		return 0;
	for(int i=2; i<x; i++)
		if(x%i==0)
			return 0;
		return 1;
}