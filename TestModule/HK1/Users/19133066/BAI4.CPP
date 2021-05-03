#include<iostream>
#define MAX 100
using namespace std;


void nhap(int n, int m , int a[MAX][MAX])
{
	for(int i = 0 ;i <n;i++)
	{
		for(int j =0; j<m;j++)
		{
			cin >> a[i][j];
		} 
	}
}

int soNT(int t)
{
	if(t < 2)
		return 0;
	for(int i = 2 ;i < t; i++)
	{
		if( t % i ==0)
			return 0;
	}
	return 1;
}

void kq(int n, int m, int a[MAX][MAX])
{
	int sum =0;
	int i =0;
	int min = 999999;
	while(i < n)
	{
		for(int j = 0; j <m;j++)
		{
			if(soNT(a[i][j]) == 1)
				sum = sum + a[i][j];
			else 
				sum = sum + 0;
		}
		if(sum < min)
		{
			min = sum;
		}
		i++;
		sum =0;
	}
	cout << min;
}
int main()
{
	int n, m, a[MAX][MAX];
	cin >> n >> m;
	nhap(n, m,a);
	kq(n, m,a);
	return 0;
}
