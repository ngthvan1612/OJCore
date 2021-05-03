#include<stdio.h>
void nhap(long a[200][200],long &n,long&m);
int NT(long x);
void tinh(long a[200][200],long n,long m);
void main()
{
	long a[200][200];
	long n,m;
	nhap(a,n,m);
	tinh(a,n,m);
}
void nhap(long a[200][200],long &n,long&m)
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
int NT(long x)
{
	int dem=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			dem++;
	if(dem==2)
		return 1;
	else
		return 2;
}
void tinh(long a[200][200],long n,long m)
{
	int min=100000000;
	for(int i=0;i<n;i++)
	{
		long tong =0;
		for(int j=0;j<m;j++)
		{
			if(NT(a[i][j])==1)
				tong = tong +a[i][j];
		}
		if(tong < min)
			min=tong;
	}
	printf("%d",min);
}



