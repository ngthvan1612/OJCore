#define max 100

#include <iostream>
using namespace std;

void nhapmang(int a[], int &n);
int kt(int a[], int n);
int test(int a, int b);

int main()
{
	int a[max];
	int n;

	nhapmang(a, n);

	int kq = kt(a,n);
	cout << kq;
}

void nhapmang(int a[], int &n)
{
	cin >> n;
	if (n>1 && n<100)
	{
		for (int i=0; i<n; i++)
			cin >> a[i];
	}
}

int kt(int a[], int n)
{
	int sum=-1;
	for (int i=n-1; i>=0; i--)
	{
		if (test(a[i], a[i-1])==0)
			sum=i;
	}

	return sum;
}

int test(int a, int b)
{
	if (((a%2==0) && (b%2==0)) || ((a%2==1) && (b%2==1))) return 0;
	else return 1;
}

