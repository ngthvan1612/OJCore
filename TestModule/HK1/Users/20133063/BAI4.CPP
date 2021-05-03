#include<stdio.h>
#define SIZE 100
void nhap(int A[][SIZE],int &m,int &n);
void xuat(int t);
int kiemtra(int x);
int min (int A[][SIZE],int m,int n);



void main ()
{
	int m;
	int n;
	int A[SIZE][SIZE];
	nhap (A,m,n);
	int tong=min(A,m,n);
	xuat(tong);
}
void nhap(int A[][SIZE],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuat(int t)
{
	printf("%d",t);
}
int kiemtra(int x)
{
	if(x>2) return 0;
	for (int i=0;i<x;i++)
		if(x%i==0) return 0;
	return 1;
}
int min (int A[][SIZE],int m,int n)
{
	int t=0;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
			if(kiemtra(A[i][j])=1)
				t+=A[i][j];
	}
	if (t<min

}
