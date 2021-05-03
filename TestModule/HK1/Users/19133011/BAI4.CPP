#include<iostream>
using namespace std;
int nguyento(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x % i == 0)
			dem ++;
	}
	if(dem == 2)
		return 1;
	else
		return 0;
}

int main()
{
	int A[101][101];
	int m,n;
	cin>>m>>n;
	int i, j;
	for(i = 0; i < m; i++)
	{
		for( j = 0; j < n; j ++)
		{
			cin>>A[i][j];
		}
	}
	int tong = 0;
	int C[100];
	int x = 0;


	for( i = 0; i < m; i++)
	{
		for( j = 0; j < n; j++)
		{
			if(nguyento(A[i][j]) == 1)
			{
				tong += A[i][j];
			}
		}
		C[x++] = tong;
		tong = 0;
	}
	int min = C[0];
	for( i = 0; i < x; i++)
	{
		if(C[i]<min)
			min = C[i];
	}
	cout<<min;

	return 0;
}