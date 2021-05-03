#include<stdio.h>
void nhap(int &m, int &n, int a[][100]);
int ngyento(int x);
void xuly( int m,int n,int a[][100]);
void main()
{
	int m,n,a[100][100];
	nhap(m,n,a);
	xuly(m,n,a);

}
void nhap(int &m, int &n, int a[][100])
{
	scanf("%d%d",&m, &n);
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}

	}
}
int ngyento(int x)
{
	int dem=0;
	for(int i=1; i<=x; i++)
	{
		if(x%i==0);
		dem++;
	}
	if(dem==2)
	{
		return 1;
	}
	return 0;
}
void xuly( int m,int n,int a[][100])
{
	int min=100;
	int tonghang=0;
	for(int i=0; i<m; i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ngyento(a[i][j])==1)
			{
				tonghang=tonghang+a[i][j];
			}
		}
		if(tonghang<min)
		{
			min=tonghang;
		}
	}
	printf("%d",min);
}
