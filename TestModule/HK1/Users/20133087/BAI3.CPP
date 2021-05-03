#include <iostream>
#include <math.h>

using namespace std;

void solve(int a[], int n)
{
	int res1 = 0, res2 = 0, res3 = 0, res4 = 0;
	if (a[0] % 2 == 0)
	{
		for (int i = 2 ; i < n ; i+=2)
		{
			if (a[i] % 2 != 0)
			{
				res1 = i;
			}
		}
	}

		if (a[0] % 2 == 0)
	{
		for (int i = 1 ; i < n ; i+=2)
		{
			if (a[i] % 2 == 0)
			{
				res2 = i;
			}
		}
	}
		if (a[0] % 2 == 0)
		{
			if (res1 == 0 && res2 == 0)
			{
				cout<<-1;
				return;
			}
			else if (res1 != 0 && res2 != 0)
			{
				cout<<min(res1,res2);
				return;
			}
			else if (res1 != 0 && res2 == 0)
			{
				cout<<res1;
				return;
			}
			else if (res1 == 0 && res2 != 0)
			{
				cout<<res2;
				return;
			}
		}

			if (a[0] % 2 != 0)
	{
		for (int i = 2 ; i < n ; i+=2)
		{
			if (a[i] % 2 == 0)
			{
				res3 = i;
			}
		}
	}

		if (a[0] % 2 != 0)
	{
		for (int i = 1 ; i < n ; i+=2)
		{
			if (a[i] % 2 != 0)
			{
				res4 = i;
			}
		}
	}

			if (a[0] % 2 != 0)
		{
			if (res3 == 0 && res4 == 0)
			{
				cout<<-1;
				return;
			}
			else if (res3 != 0 && res4 != 0)
			{
				cout<<min(res3,res4);
				return;
			}
			else if (res3 != 0 && res4 == 0)
			{
				cout<<res3;
				return;
			}
			else if (res3 == 0 && res4 != 0)
			{
				cout<<res4;
				return;
			}
		}

}

int main()
{
	int a[101],n;
	cin >> n;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}

	solve(a,n);
	return 0;
}