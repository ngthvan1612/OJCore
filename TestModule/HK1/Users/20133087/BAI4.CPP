#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;

int snt(int n)
{
	if ( n < 2 )
	{
		return false;
	}
	if ( n == 2 || n == 3)
	{
		return true;
	}
	for (int i = 2 ; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}


void solve(long a[101][101], int m ,int n)
{
	int i = 0;
	long  Min = 9999999;
	while (i < m )
	{
		long res = 0;
		for (int j = 0 ; j < n ; j++)
		{
			if (snt(a[i][j]) == 1)
			{
				res = res + a[i][j];
			}
		}
		if (res < Min)
		{
			Min = res;
		}
		i++;
	}
	cout<<Min;
}
int main()
{
	int m,n;
	long a[101][101];
	cin >> m >> n;
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			cin >> a[i][j];
		}
	}
	
	solve(a,m,n);

	return 0;
}