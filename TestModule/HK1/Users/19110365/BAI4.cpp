#include <iostream>

using namespace std;

bool Check(int n)
{
	int count = 0;
	for(int i = 1;i <= n ;i++)
	{
		if(n % i == 0)
			count++;
	}
	if(count == 2)
	{
		return true;
	}
	return false;
}

void nhapMang(int A[][100], int &x, int &y)
{
	cin >> x >> y;
	for(int i = 0;i < x;i++)
		for(int j = 0; j < y; j++)
			cin >> A[i][j];
}

int Solve(int A[][100], int x, int y)
{
	int min = 100;
	for(int i = 0;i < x;i++)
	{	
		int sum = 0;
		for(int j = 0; j < y; j++)
		{
			if(Check(A[i][j]))
			{
				sum += A[i][j];
			}
		}
		if(sum < min)
			min = sum;
	}
	return min;
}
void main()
{
	int A[100][100], x, y;
	nhapMang(A, x, y);
	cout << Solve(A, x, y);
}