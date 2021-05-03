#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
int ktnt(int x);
int xuly(int A[][100],int m,int n);
void xuat(int kq);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=xuly(A,m,n);
	xuat(kq);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int ktnt(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
	{
		if((x%i)==0)
			d++;
	}
	if(d==2)
		return 1;
	return 0;
}
int xuly(int A[][100],int m,int n)
{
	int t,d;
	t=10000;
	for(int i=0;i<m;i++)
	{
		d=0;
		for(int j=0;j<n;j++)
		{
			if(ktnt(A[i][j]))
			d=d+A[i][j];
		}
		if(d<t)
		{
			t=d;
		}

	}
	return t;
}
void xuat(int kq)
{
	printf("%d",kq);
}