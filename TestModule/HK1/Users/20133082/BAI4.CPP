#include<stdio.h>
#define N 100
void nhap(int A[N][N],int &m,int &n);
void xuly(int A[N][N],int m,int n);
int snt(int c);
void main()
{
	int A[N][N],m,n;
	nhap(A,m,n);
	xuly(A,m,n);
}
void nhap(int A[N][N],int &m,int &n)
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
void xuly(int A[N][N],int m,int n)
{
	int b=10000;
	for(int i=0;i<m;i++)
	{
		int a=0;
		for(int j=0;j<n;j++)
		{
			if(snt(A[i][j])==0&&A[i][j]!=1)
			a=a+A[i][j];
		}
		if(a<b)
		{
			b=a;
		}

	}
	printf("%d",b);

}
int snt(int c)
{
	int v=0;
	for(int i=2;i<c;i++)
	{
		if(c%i==0)
			v++;
	}
	return v;
}
