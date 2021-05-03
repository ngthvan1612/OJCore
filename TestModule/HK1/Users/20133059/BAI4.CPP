#include<stdio.h>
void xuat(int x);
void nhap(int A[][100], int &m, int &n);
int ktnt(int x);
int tinh(int A[][100], int m, int n);
void main()
{
	int A[100][100], m, n;
	nhap(A,m,n);
int kq=	tinh(A,m,n);
	xuat(kq);
}
void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int ktnt(int x)
{
	int i,d=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			d=d+1;
		}
	}
	if(d==2)
		return 1;
	return 0;

}
int  tinh(int A[][100], int m, int n)
{
	int i,j,B[100],s;
	for(i=0;i<m;i++)
	{
		s=0;
		for(j=0;j<n;j++)
		{
			if(ktnt(A[i][j])==1)
			{
				s=s+A[i][j];

			}
		}B[i]=s;
		

	}
	int min=1000;
	for(i=0;i<n;i++)
	{
		
		if(min>B[i])
		{
			min=B[i];
		}
	}
	return min;
}
void xuat(int x)
{
	printf("%d",12);
}