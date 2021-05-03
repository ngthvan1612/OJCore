#include <iostream>
using namespace std;

void nhap(int A[][100], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> A[i][j];
		}
	}
}

bool checkNT(int x)
{
	int dem = 0;
	for(int i=1;i<=x;i++)
	{
		if(x % i == 0)
		{
			dem++;
		}
	}
	return dem == 2 ? true : false;
}

int tinhKq(int A[][100], int n, int m)
{
	int B[200];
	int lenB = 0;
	for(int i=0;i<n;i++)
	{
		int S = 0;
		for(int j=0;j<m;j++)
		{
			if(checkNT(A[i][j]))
			{
				S += A[i][j];
			}
		}
		
		B[lenB++] = S;
	}

	int min = B[0];
	for(int k=0;k<lenB;k++)
	{
		if(B[k] < min)
		{
			min = B[k];
		}
	}
	return min;
}

void main()
{
	int A[100][100];
	int n, m;
	cin >> n >> m;
	nhap(A,n,m);
	int kq = tinhKq(A,n,m);
	cout << kq;
}