#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
int tinhtong(int A[][100],int &m,int &n,int B[]);
int tinhmang(int B[],int m);
void xuat(int kq);
void main()
{
	int A[100][100];
	int B[100];
	int m,n;
	nhap(A,m,n);
	tinhtong(A,m,n,B);
	int kq=tinhmang(B,m);
	xuat (kq);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&A[i][j]);
}
int tinhtong(int A[][100],int &m,int &n,int B[])
{
	for (int u=1;u<=m;u++)
		B[u]=0;
	for (int k=1;k<=m;k++)
		for (int t=1;t<=n;t++)
			B[k]=B[k]+A[k][t];
	return 0;
}
int tinhmang(int B[],int m)
{
	int min=B[1];
	for(int s=1;s<=m;s++)
		if(B[s]<min)
			min=B[s];
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}
