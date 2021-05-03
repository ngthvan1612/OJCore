#include<iostream>
using namespace std;

void nhap(int n, int a[])
{
	for(int i = 0 ;i <n; i++)
	{
		cin >> a[i];
	}
}

int so(int t)
{
	if(t % 2 == 0)
		return 1;
	else 
		return 0;
}

void kt(int n, int a[])
{
	int count = 0; 
	for(int i =0 ;i < n; i++)
	{
		if((so(a[i]) == 1 && so(a[i + 1]) == 0) || (so(a[i]) == 0 && so(a[i + 1]) == 1))
			count++;			
	}
	if(count == n - 1 || count == n)
		cout << "-1";
}

int main()
{
	int n, a[200];
	cin >> n;
	nhap(n, a);
	kt(n, a);
	return 0;
}