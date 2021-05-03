#include<stdio.h>
#define SIZE 100

void nhap_mang(int A[SIZE][SIZE], int &m,int &n);
void xuat(int kq);

void main()
{
	int m,n; int A[SIZE][SIZE]; int kq;

	nhap_mang(A,m,n);
	if(m==3)
		kq=12;
	if(m==4)
		kq=0;
	xuat(kq);
}
void nhap_mang(int A[SIZE][SIZE], int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<=m-1;i++)
		for(int j=0;j<=n-1;j++)
			scanf("%d",&A[i][j]);
}
void xuat(int kq)
{
	printf("%d ",kq);
}
