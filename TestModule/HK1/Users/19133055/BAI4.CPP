#include<iostream>
#include<cmath>
#define size 100
using namespace std;

void nhapMang(int a[][size], int m, int n);
int laSoNguyenTo(int n);
void tongMax(int a[][size], int m, int n);

int main()
{
	int a[size][size],m,n;
	cin >> m >> n;
	nhapMang(a,m,n);
	tongMax(a,m,n);
	return 0;
}
void nhapMang(int a[][size], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
	}
}
int laSoNguyenTo(int n)
{
	if(n<2)
		return 0;
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void tongMax(int a[][size], int m, int n)
{
	int min = 999999;
	for(int i=0;i<m;i++)
	{
		int sum = 0;
		for(int j=0;j<n;j++)
		{
			if(laSoNguyenTo(a[i][j])==1)
			{
				sum += a[i][j];
				
			}
		}
		if(sum < min)
			min= sum;
	}
	cout << min;
}
