#include<stdio.h>
void nhap(int a[][98],int &m,int &n);
int snt(int x);
void gan(int a[][98],int m,int n,int b[]);
void xuat(int b[],int m);
int main()
{
	int a[98][98],b[98],m,n;
	nhap(a,m,n);
	for(int i=0;i<m;i++)
		b[i]=0;
	gan(a,m,n,b);
	xuat(b,m);
	return 0;
}
void nhap(int a[][98],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
}
int snt(int x)
{
	int dem=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
			dem++;
	}
	if(dem==2)
		return 0;
	else 
		return 1;
}
void gan(int a[][98],int m,int n,int b[])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{ 
		if(snt(a[i][j])==0)
		b[i]=b[i]+a[i][j];
		}
	}
}
void xuat(int b[],int m)
{
	int min=b[0];
	for(int i=0;i<m;i++)
	{
		if(b[i]<min)
			min=b[i];
	}
	printf("%d",min);
}