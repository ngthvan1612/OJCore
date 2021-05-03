#include<iostream>
#define size 100
using namespace std;

void nhap (int &m, int &n, int a[][size])
{
	cin >> m >> n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin >> a[i][j];
}

int snt(int n)
{
	int dem=0;
	for (int i=1; i<n; i++)
		if (n%i==0)
			dem++;
	if (dem==1)
		return 1;
	else
		return 0;
}

int timMin(int n, int a[])
{
	int min=a[0];
	for (int i=0; i<n; i++)
		if (a[i]<min)
			min=a[i];
	return min;
}

int minTong(int m, int n, int a[][size])
{
	int min=0;
	int t[size]={0};
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			if (snt(a[i][j]))
				t[i]=t[i]+a[i][j];
	min=timMin(m,t);
	return min;
}

void main()
{
	int m, n, a[size][size];
	nhap(m,n,a);
	int kq=minTong(m,n,a);
	cout << kq;
}