#include<iostream>
using namespace std;
int kiemle(int n, int A[]);
int kiemchan(int n, int A[]);
void main()
{
	int n, A[130];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int kq = 0;
	if (A[0] % 2 == 0)
	{
		kq= kiemchan(n, A);
	}
	else
	{
		kq= kiemle(n, A);
	}
	cout << kq;
}
int kiemchan(int n, int A[])
{
	for (int i = 1; i < n; i++)
	{
		if (i % 2 != 0)
		{
			if (A[i] % 2 == 0)
				return i;
		}
		else
		{
			if (A[i] % 2 != 0)
				return i;
		}
	}
	return -1;
}
int kiemle(int n, int A[])
{
	for (int i = 1; i < n; i++)
	{
		if (i % 2 != 0)
		{
			if (A[i] % 2 != 0)
				return i;
		}
		else
		{
			if (A[i] % 2 == 0)
				return i;
		}
	}
	return -1;
}