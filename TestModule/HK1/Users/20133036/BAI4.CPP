#include<stdio.h>
#define N 100
void xuat(int x);
int laNT(int x);
int min(int A[],int n);
void nhap(int A[][N],int &m,int &n);
int Tinh(int A[][N],int m,int n);
void main()
{
	int A[N][N],m,n;
	nhap(A,m,n);
	int kq=Tinh(A,n,m);
	xuat(kq);
}
void xuat(int x)
{
	printf("%d",x);
}
int laNT(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			d++;
	if(d==2)
		return 1;
	else
		return 0;
}
int min(int A[],int n)
{
	int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min )
			min=A[i];
	}
	return min;
}
void nhap(int A[][N],int &m,int &n)
{
	scanf("%d%",&m,&n);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;i++)
		scanf("%d",&A[i][j]);
}
int Tinh(int A[][N],int m,int n)
{
	int B[N];
	for(int i=0;i<m;i++)
	{
		int tong=0;
		for(int j=0;j<n;j++)
		{
			if(laNT(A[i][j])==1)
				tong=tong+A[i][j];
		}
		B[j]=tong;
	}

	int kq=min(B,m);
	return kq;
}


