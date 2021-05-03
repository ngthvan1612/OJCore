#include<stdio.h>
#define MAX 100

void nhap(int a[][MAX], int &m, int &n)
{
	scanf("%d%d",&m, &n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

int laSNT(int n)
{
	int d=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			d++;
	}
	if(d==2)
		return 1;
	return 0;
}

int timMin(int a[], int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
		if(a[i]<min)
			min=a[i];
	return min;
}

int xuLy(int a[][MAX], int m, int n)
{
	int b[MAX],nb=0;
	for(int i=0;i<m;i++)
	{
		int t=0;
		for(int j=0;j<n;j++)
		{
			if(laSNT(a[i][j])==1)
				t+=a[i][j];
		}
		b[nb++]=t;
	}
	return timMin(b,nb);
}

void main()
{
	int a[MAX][MAX],m,n;
	nhap(a,m,n);
	printf("%d",xuLy(a,m,n));
}