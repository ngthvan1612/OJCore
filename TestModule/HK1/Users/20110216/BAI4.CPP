#include<stdio.h>
void nhap(int &m,int &n,int a[][100])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{	
			scanf("%d",&a[i][j]);
		}
	}
}
void main()
{
	int m,n,a[100][100];
	nhap(m,n,a);
}