#include<stdio.h>
void nhap(int &m,int &n,int a[][100]);
int tongNTmin(int m,int n,int a[][100]);
int laNT(int a);
void xuat(int kq);

void main()
{
	int m,n,a[100][100];
	nhap(m,n,a);
	int kq=tongNTmin(m,n,a);
	xuat(kq);
}
void nhap(int &m,int &n,int a[][100])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int tongNTmin(int m,int n,int a[][100])
{
	int min=0;
	for(int j=0;j<n;j++)
	{
		if(laNT(a[0][j])==1)
			min=min+a[0][j];
		else
			min=min;
	}
	for(int x=0;x<m;x++)
	{
		int s=0;
		for(int y=0;y<n;y++)
		{
			if(laNT(a[x][y])==1)
			{
				s=s+a[x][y];
			}
			else s=s;
		}
		if(s<=min)
			min=s;
		else min =min;
	}
	return min;
}
int laNT(int a)
{
	int d=0;
	for(int i=1;i<=a;i++)
		if(a%i==0)
			d++;
	if(d==2)
	return 1;
	else
	return 0;
}
void xuat(int kq)
{
	printf("%d",kq);
}
		

