#include<stdio.h>
#define size 100 
void nhap(int a[][size], int &m, int &n);
void xuat(int x);
int sum(int a[][size], int m, int n);
int snt(int a);
void main()
{
	int a[size][size],m,n;
	nhap(a,m,n);
	xuat(sum(a,m,n));
}
void nhap(int a[][size], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void xuat(int x)
{
	printf("%d",x);
}
int sum(int a[][size], int m, int n)
{
	int i,j;
	int s=0;
	int s2=0;
	for(j=0;j<n;j++)
	{
		if(snt(a[0][j])==1)
			s=s+a[0][j];
	}
	for(i=1;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(snt(a[i][j])==1)
				s2=s2+a[i][j];
		}
		if(s>s2)
			s=s2;
	}
	return s;
}
int snt(int a)
{
	int d=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
			d++;
	}
	if(d==2)
		return 1;
	else 
		return 0;
}