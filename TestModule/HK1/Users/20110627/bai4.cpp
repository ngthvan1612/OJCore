#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
int timMin(int A[],int n);
int tongMin(int A[][100],int m,int n);
int laNT(int x);
void xuat(int kq);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=tongMin(A,m,n);
	xuat(kq);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int timMin(int A[],int n)
{
	int min=A[0];
	for(int i=0;i<n;i++)
		if(A[i]<min)
			min=A[i];
	return min;
}
int tongMin(int A[][100],int m,int n)
{
	int B[100];
	for(int i=0;i<m;i++)
	{
		int d=0;
		for(int j=0;j<n;j++)
			if(laNT(A[i][j])==1)
			   d=d+A[i][j];
		B[i]=d;
	}
	int t=timMin(B,m);
	return t;
}
int laNT(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			d++;
	if(d==2)
		return 1;
	return 0;
}
void xuat(int kq)
{
	printf("%d",kq);
}

			
