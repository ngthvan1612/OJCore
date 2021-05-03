#include<iostream>
#define size 100
using namespace std;

int chan(int n)
{
	if (n%2==0)
		return 1;
	else
		return 0;
}

int le(int n)
{
	if (n%2==1)
		return 1;
	else
		return 0;
}

int xenke(int n, int a[])
{
	for (int i=0; i<n-1; i++)
		if ((chan(a[i])==1 && chan(a[i+1])==1) || (chan(a[i])==0 && chan(a[i+1])==0))
			return i+1;
	return -1;
}


void main()
{
	int n, a[size];
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];
	int kq=xenke(n,a);
	cout << kq;
}