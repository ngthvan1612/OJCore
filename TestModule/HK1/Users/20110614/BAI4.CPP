#include<stdio.h>
void nhap(int A[100][100],int&m,int&n);
int songuyento(int&x);
int kiemtra(int A[100][100],int m,int n,int B[]);
void xuat(int kq);
void main()
{
	int A[100][100],B[100],m,n;
	nhap(A,m,n);
	int kq=kiemtra(A,m,n,B);
	xuat(kq);
}
void nhap(int A[100][100],int&m,int&n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
int songuyento(int&x)
{
	int uoc=0;
	for(int h=1;h<=x;h++)
	{
		if(x%h==0)
		{
			uoc=uoc+1;
		}
	}
	if(uoc==2)
		return 1;
}
int kiemtra(int A[100][100],int m,int n,int B[])
{
	int k=0;
	for(int i=0;i<m;i++)
	{
		int tong=0;
		for(int j=0;j<n;j++)
		{
			if((songuyento(A[i][j]))==1)
				tong=tong+A[i][j];
		}
		B[k]=tong;
	    k++;
	}
	int min=999999;
	for(k=0;k<m;k++)
	{
		if(B[k]<min)
			min=B[k];
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}