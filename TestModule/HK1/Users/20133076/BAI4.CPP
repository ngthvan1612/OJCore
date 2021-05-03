#include <stdio.h>
void nhapmang(int A[][100], int &m, int &n);
void xuly(int A[][100], int m, int n,int B[],int &x);
int nguyento(int x);
int timmin(int B[],int x);
void xuat(int kq);
void main()
{
	int A[100][100],  m,  n,B[100], x;
	nhapmang(A, m,  n);
	xuly(A,m,n,B,x);
	int kq=timmin(B,x);
	xuat(kq);
}
void nhapmang(int A[][100], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuly(int A[][100], int m, int n,int B[],int &x)
{
	int sum =0;
	x=0;
	for(int i=0;i<m;i++)
	{	
		for(int j=0;j<n;j++)
			if (nguyento(A[i][j])==1) sum=sum+A[i][j];
		B[x]=sum;
		x++;
	}
}
int nguyento(int x)
{
	int dem=0;
	for (int i=1;i<x;i++)
		if (x%i==0) dem =dem+1;
	if (dem ==1) return 1; else return 0;
}
int  timmin(int B[],int x)
{
	int min=B[0];
	for(int i=0; i<x;i++)
		if (B[i]<min) min=B[i];
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}