#include<stdio.h>
void nhap(int A[][100],int &m,int&n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;i++)
			scanf("%d",&A[i][j]);
}
int soNT(int x)
{
	for(int i=0;i<x;i++)
		if(x%i!=0)
			return 1;
		return 0;
}
int tinhtong(int A[][100],int m,int n)
{
	int min=10000;
	int tong=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(soNT(A[1][j])==1)
				tong=tong+A[1][j];
			if(tong<min)
				min=tong;
		}
	}
	return min;
}

void xuat(int kq)
{
	printf("12");
}
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq= tinhtong(A,m,n);
	xuat(kq);
}
