#include <iostream>
#define M 100
using namespace std;
int NT(int x)
{
	int dem = 0;
	for(int i = 0;i <= x;i++)
		if(x % i == 0)
			dem++;
	if(dem == 2)
		return 1;
	return 0;
}
int main()
{
	int m,n,a[M][M];
	cin>>m>>n;
	for(int i = 0;i < m;i++)
		for(int j = 0;j < n;j++)
			cin>>a[i][j];
	int b[100],Min;
	for(int i = 0;i < m;i++)
	{
		b[i] = 0;
		for(int j = 0;j < n;j++)
		{
			if(NT(a[i][j]) == 1)
				b[i] += a[i][j];
		}
	}
	Min = b[0];
	for(int k = 0;k < m;k++)
		if(Min > b[k])
			Min = b[k];
	cout<<Min;
	return 0;
}

