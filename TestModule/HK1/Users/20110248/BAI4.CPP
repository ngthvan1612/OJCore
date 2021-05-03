#include<stdio.h>
void tinhtongnguyento(int a[][200],int m,int n,int b[]);
int languyento(int n);
int timmin(int b[],int m);
void main()
{
	int m,n;
	int a[200][200],b[200];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	tinhtongnguyento(a,m,n,b);
	int min=timmin(b,m);
	printf("%d",min);
}
void tinhtongnguyento(int a[][200],int m,int n,int b[])
{
	int nb=0;
	for(int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
			if(languyento(a[i][j]))
				s=s+a[i][j];
		b[nb++]=s;
	}
}
int languyento(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return 1;
	else
		return 0;
}
int timmin(int b[],int m)
{
	int min=b[0];
	for(int i=1;i<m;i++)
		if(b[i]<min)
			min=b[i];
	return min;
}
