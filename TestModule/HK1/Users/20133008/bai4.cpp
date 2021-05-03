#include<stdio.h>
#define size 100
void xuat(int x);
void nhap(int A[][size],int &m,int &n);
int demNT(int A[][],int m,int n);
int timmax(int A[],int n);
int laNT(int x);
void main()
{
		int A[size][size],m,n;
		nhap(A,m,n);
		int kq=demNT(A,m,n);
		xuat(kq);
}
int 
}
void xuat(int x)
{
		printf("%d",x);
}
void nhap(int A[][size],int &m,int &n)
{
		scanf("%d%d",&m,&n);
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&A[i][j]);
}
