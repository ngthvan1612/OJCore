#include<iostream>
#define MAX 100
using namespace std;
int ktnt(int x);
int main()
{
	int m, n, i, j, a[MAX][MAX];
	cin>>m>>n;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	int min=10000000,tong=0;
	for(i=0; i<m; i++)
	{
		tong=0;
		for(j=0; j<n; j++)
		{
			if(ktnt(a[i][j])==1)
			{
				tong+=a[i][j];
			}
		}
		if(tong<min)
		{
			min=tong;
		}
		
	}
	cout<<min;
	return 0;
}

int ktnt(int x)
{
	int dem=0;
	for(int i=1; i<=x; i++)
	{
		if(x%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	{
		return 1;
	} else return 0;
}