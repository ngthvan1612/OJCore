#include <iostream.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
void nhap(int a[][100],int &m,int &n)
{
	cin >> m>>n;
	abs(m);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin >> a[i][j];
			abs(a[i][j]);
		}
	}
}
int kt(int x)
{
	int dem=0;
	for (int i=1;i<=x;i++)
	{
		if (x%i==0)
		{
			dem++;
		}
	}
	if (dem ==2)
	{
		return 1;
	}
	return 0;
}
int tinh(int a[][100],int m,int n)
{
	int min = 999999;
	for (int i=0;i<m;i++)
	{
		int tong=0;
		for(int j=0;j<n;j++)
		{
			
			if (kt(a[i][j])==1)
			{
				tong =tong +a[i][j];
			}
		}
		if ( tong < min )
		{
			min = tong ; 
		}
	}
	return min ;
}

int main()
{
	int a[100][100];
	int m;int n;
	nhap(a,m,n);
	int kq =tinh (a,m,n);
	cout << kq ;
	return 0;
}