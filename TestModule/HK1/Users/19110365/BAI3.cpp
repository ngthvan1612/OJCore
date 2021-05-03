#include <iostream>

using namespace std;

void nhapMang(int A[], int &n)
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> A[i];
	}
}

int Solve(int A[], int n)
{
	for(int i = 0;i < n; i++)
	{
		if(i == n - 1)
			break;
		if(A[i] % 2 == 0 && A[i+1] % 2 == 0)
		{
			return i+1;			
		}
		if(A[i] % 2 != 0 && A[i+1] % 2 != 0)
		{
			return i+1;
		}
	}
	return -1;
}

void main()
{
	int A[101], n;
	nhapMang(A, n);
	cout << Solve(A, n);
}