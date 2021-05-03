#include<stdio.h>
#define size 100
void nhap(int A[][size],int &m,int &n);
int tongsonguyen(int A[][size],int m, int n);
int ktnguyento(int x);
void xuat(int kq);
void main()
{
	int A[size][size],m,n;
	nhap(A,m,n);
	int kq=tongsonguyen(A,m,n);
	xuat(kq);
}
int tongsonguyen(int A[][size],int m, int n)
{	int sum=0;
	for(int i=0;i<m;i++)
	{
	
		for(int j=0;j<n;j++)
			if(ktnguyento(A[i][j])==2)
				sum=sum+A[i][j];
	}
		return sum;
}
void nhap(int A[][size],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}


void xuat(int kq)
{
	printf("%d",kq);
}
int ktnguyento(int x)
{
	int dem=0;
	for(int i=0;i<=x;i++)
		if(x%i==0)
			dem++;
	return dem;
}