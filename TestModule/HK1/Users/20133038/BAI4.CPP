#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
void xuat(int kq);
int languyento(int n);
int xuli(int A[][100],int m,int n);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=xuli(A,m,n);
	xuat(kq);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int languyento(int n)
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (n%i==0)
			dem++;
	}
	if (dem==2)
		return 1;
	return 0;
}
int xuli(int A[][100],int m,int n)
{
	int i,j;
	int tongnguyentochung=0;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if(languyento(A[i][j])==1)
				tongnguyentochung+=A[i][j];
		}
		break;
	}
	int min=tongnguyentochung;
	for (i=0;i<m;i++)
	{
		int tongnguyento=0;
		for (j=0;j<n;j++)
		{
			if(languyento(A[i][j])==1)
				tongnguyento+=A[i][j];
		}
		if (tongnguyento<min)
		{
			min=tongnguyento;
		}
	}
	return min;
}