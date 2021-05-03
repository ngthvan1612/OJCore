#include<stdio.h>
#define size 100
void nhap(int A[][size],int &m, int &n);
int laNT(int x);
void test(int A[][size],int m,int n, int B[],int &nB);
int xuly(int A[size],int n);
void xuat(int kq);
void main()
{
	int A[size][size],m,n;
	int B[size],nB;
	nhap(A,m,n);
	test(A,m,n,B,nB);
	int kq=xuly(B,nB);
	xuat(kq);
}
void nhap(int A[][size],int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
		
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
void test(int A[][size],int m,int n, int B[],int &nB)
{
	nB=0;
	for(int i=0;i<m;i++)
	{
		
		int s=0;
		for(int j=0;j<n;j++)
			if(laNT(A[i][j]))
				s=s+A[i][j];
		B[nB++]=s;
	}
}
int xuly(int A[],int n)
{
	int min=A[0];
	for(int i=0;i<n;i++)
		if(A[i]<min)
			min=A[i];
	return min;
		
}
void xuat(int kq)
{
printf("%d",kq);
}