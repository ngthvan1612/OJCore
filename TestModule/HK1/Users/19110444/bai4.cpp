#include <stdio.h>
void nhap(int a[][100],int &n,int &m);

void kiemtra(int a[][100],int n,int m);
int laNT(int x);
void main()
{
	int a[100][100],n,m;
	nhap(a,n,m);
	kiemtra(a,n,m);

}
void nhap(int a[][100],int &n,int &m)
{
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
void kiemtra(int a[][100],int n,int m)
{
	int min=100000;
	for (int i=0;i<n;i++)
	{
		int s=0;
		for (int j=0;j<m;j++)
			if (laNT(a[i][j])==1)
				s=s+a[i][j];
		if (s<min)
		{
			min=s;
		}
	}
	
	printf("%d",min);
}
int laNT(int x)
{
	if (x<=1)
		return 0;
	if (x==2)
		return 1;
	for(int i=2;i<x;i++)
		if (x%i==0)
			return 0;
	return 1;
}