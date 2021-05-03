#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int tongMin (int A[][99], int m, int n);
int nto (int n);
void nhap (int A[][99], int &m, int &n);

int main ()
{
	int A[99][99], m, n;
	nhap (A, m, n);
	cout << tongMin (A, m, n);
	
	return 0;
}

int tongMin (int A[][99], int m, int n)
{
	int res=0;
	for (int cot=0; cot<n; cot++)
		if (nto (A[0][cot]))
			res += A[0][cot];
	for (int i=1; i<m; i++)
	{
		int t=0;
		for (int j=0; j<n; j++)
		{
			if (nto (A[i][j]))
				t+=A[i][j];
		}
		if (t<res)
			res = t;
	}
	return res;
}

int nto (int n)
{
	if (n<2)
		return 0;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0)
			return 0;
	return 1;
}

void nhap (int A[][99], int &m, int &n)
{
	cin >> m>> n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin >> A[i][j];
}