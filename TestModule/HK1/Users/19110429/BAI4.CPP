#include<iostream>
using namespace std;
int main()
{
	int a[99][99],m,n,min = INT_MAX;
	cin >> m >> n;
	for(int x = 0;x < m;x++)
	{
		for(int y = 0;y<n;y++)
		{
			cin >> a[x][y];
		}
	}
	for(int i = 0;i < m;i++)
	{
		int tong = 0;
		for(int j = 0;j < n;j++)
		{
			bool kt = true;
			if(a[i][j] == 1)
			{
				kt = false;
			}
			else
			{
				for(int u = 2;u < a[i][j];u++)
				{
					if(a[i][j] % u == 0)
					{
						kt = false;
						break;
					}
				}
			}
			if(kt == true)
			{
				tong = tong + a[i][j];
			}
		}
		if(min > tong)
			min = tong;
	}
	cout << min;
	return 0;
}