#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
int xuly(int A[][100],int m,int n);
void main()
{
	int A[100][100];
	int m,n;
	nhap(A,m,n);
    int kq=xuly(A,m,n);
	void xuat(int kq);
	xuat(kq);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;i<n;j++)
		scanf("%d",&A[i][j]);
}
int xuly(int A[][100],int m,int n)
{
	int min=0;
	for(int i=0;i<m;i++)
	{	int tong=0;
		for(int j=0;i<n;j++)
		{
			tong=tong+A[i][j];
		}
		if(tong<min)
		{
			min=tong;
		}
	}
		return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}