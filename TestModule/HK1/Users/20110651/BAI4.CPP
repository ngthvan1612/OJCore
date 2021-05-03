#include<iostream>
using namespace std;
void nhap(int A[100][100], int &m, int &n)
{
	cin>>m;
	cin>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
}


void main()
{
	int A[100][100], m, n;
	nhap(A,m,n);
}