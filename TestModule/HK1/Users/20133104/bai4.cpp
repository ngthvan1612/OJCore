#include<stdio.h>
#define SIZE 100
void nhap(int A[][SIZE],int &m,int &n);
void xuat(int t);
int check(int A[][SIZE],int m,int n);
void main()
{
	int A[SIZE][SIZE];
	int m,n;
	int kq=check(A,m,n);
	xuat(kq);
}
int check(int A[][SIZE],int m,int n)
{
	int s=0;
 for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			s=s+A[i][j];
		}
 return 0;
}

void nhap(int A[][SIZE],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			scanf("%d%d",&A[i][j]);
		}
}
void xuat(int t)
{
	printf("%d",0);
}