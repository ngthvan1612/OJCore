#include<iostream>
using namespace std;

void main()
{
	int A[100][100],m,n,min=10000;
	cin>>m>>n;
	for(int x=0;x<m;x++)
	{
		for(int y=0;y<n;y++)
			cin>>A[x][y];
	}
	
	for(int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
		{
			s=s+A[i][j];
		}
		if(s<min)
			min=s;
	}
	cout<<min;
}