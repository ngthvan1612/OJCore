#include <iostream>

using namespace std;

int snt(int x);
void nhap(int a[][100], int &m, int &n);
int tongnhonhat(int a[][100], int m, int n);

int main()
{
	int a[100][100], m,n;
	nhap(a,m,n);
	int kq=tongnhonhat(a,m,n);
	cout<<kq;
	return 0;
}

void nhap(int a[][100], int &m, int &n)
{
	cin>>m>>n;
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
}

int tongnhonhat(int a[][100], int m, int n)
{
	int tong=0,c[100];
	for (int x=0; x<m; x++)
	{
		c[x]=9999;
	}
	for (int i=0; i<m; i++)
	{
		tong=0;
		for (int j=0; j<n; j++)
		{
			if (snt(a[i][j])==1) tong=tong+a[i][j];
		}
		c[i]=tong;
	}
	int min=c[0];
	for (int k=0; k<m; k++)
	{
		if (min>c[k]) min=c[k];
		
	}
	return min;
}

int snt(int x)
{
	if (x<=1) return 0;
	for (int i=2; i<x; i++)
	{
		if (x%i==0) return 0;
	}
	return 1;
}