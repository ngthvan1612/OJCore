#include<stdio.h>
void nhap(int &n,int&m, int A[][100]);
int snt(int n);
int nguyentohang(int m,int A[][100],int hang);
int tong(int n,int m,int A[][100]);
void xuat(int kq);
void main()
{
	int n,m,A[100][100];
	nhap(n,m,A);
	int kq=tong(n,m,A);
	xuat(kq);
}
void nhap(int &n,int&m, int A[][100])
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&A[i][j]);
}
int snt(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}
int nguyentohang(int m,int A[][100],int cot)
{
	int s=0;
	for(int j=0;j<m;j++)
		if(snt(A[cot][j])==1)
			s=s+A[cot][j];
		return s;
}
int tong(int n,int m,int A[][100])
{
	int min=nguyentohang(m,A,0);
	for(int i=1;i<n;i++)
		if(nguyentohang(m,A,i)<min)
			min=nguyentohang(m,A,i);
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}