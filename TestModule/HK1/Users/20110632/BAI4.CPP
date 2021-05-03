#include<stdio.h>
#define SIZE 100
void nhap(int A[][SIZE], int &m, int &n);
int laNT(int x);
int timMin(int A[][SIZE], int m, int n);
void xuat(int kq);
void main()
{
	int A[SIZE][SIZE], m,n;
	nhap(A,m,n);
	int kq= timMin(A,m,n);
	xuat(kq);
}
void nhap(int A[][SIZE], int &m, int &n)
{
	scanf("%d%d", &m,&n);
	for (int i =0;i<n;i++)
		for (int j =0;j<m;j++)
		{
			scanf("%d",&A[i][j]);
		}
}
int laNT(int x)
{
	if(x==1)
		return 0;
	for (int i=2;i<x;i++){
		if (x%i==0)
			return 0;
	}
	return 1;
}
int timMin(int A[][SIZE], int m, int n)
{
	int min=0;
	for (int i=0;i<n;i++)
	{
		int tong=0;
		for(int j=0;j<n;j++)
			if(laNT(A[i][j])==1)
			tong +=i;
			if (tong<min)
				return tong;
	}

}
void xuat(int kq)
{
	printf("%d",kq);
}
