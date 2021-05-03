#include <iostream>
#define SIZE 101

using namespace std;

int laNT(int n);

void main()
{
	int m,n,i,j,sum;
	int minn=999999;
	cin >> m >> n;
	int matran[SIZE][SIZE];
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			cin >> matran[i][j];
	for (i=0; i<m; i++)
	{	
		sum=0;
		for (j=0; j<n; j++)
		{
			if (laNT(matran[i][j])==1)
				sum+=matran[i][j];
		}
		
		if (minn>sum)
			minn = sum;
	}
	cout << minn;
}


int laNT(int n)
{
	if (n<2)
		return 0;
	else
	{
		for (int i=2; i<n; i++)
			if (n%i==0)
				return 0;
		return 1;
	}
		
}