#include<stdio.h>
void xuat(int t);
void nhap(int A[][100],int &m,int &n);
int laNT(int x);
int xuli(int A[][100],int m,int n);
int min(int A[],int n);
void main()
{
	int A[100][100];
	int m,n;
	nhap(A,m,n);
	int t=xuli(A,m,n);
		xuat(t);
}
int xuli(int A[][100],int m,int n)
{
	int B[100]={0};
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(laNT(A[i][j])==1)
				B[i]=B[i]+A[i][j];
	int k=min(B,m);
	return k;
	
}
int min(int A[],int n)
{
	int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
			min=A[i];
	}
	return min;
}
int laNT(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			d++;
		if(d==2)
			return 1;
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuat(int t)
{
	printf("%d",t);
}