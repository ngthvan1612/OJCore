#include<stdio.h>
#define N 100
void nhap(int a[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		}
}
int ktsnt(int x)
{
	if(x==1)
		return 0;
	for(int i=0;i<x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
int xuly(int a[][100],int m,int n)
{
	int tong=0;
	int tongmin=10000000,tg;
	for(int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(ktsnt(a[i][j]))
				tong+=a[i][j];
		}
		if(tong<tongmin)
		{
			tg=tong;
		}
	}
	return tg;
}
void main()
{
	int a[N][N],m,n;
	nhap(a,m,n);
	int kq=xuly(a,m,n);
	printf("%d",kq);
}

	
