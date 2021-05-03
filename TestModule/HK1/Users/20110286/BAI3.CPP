#include <iostream>

using namespace std;

int kt(int a[], int n);
void nhap(int a[], int &n);

int main()
{
	int a[100],n;
	nhap(a,n);
	cout<<kt(a,n);
	return 0;
}

void nhap(int a[], int &n)
{
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
}

int kt(int a[], int n)
{
	int co=0,k;
	if (a[0]%2==0) co=1;
	for (int i=0; i<n; i++)
	{
		if (a[i]%2==0 & a[i+1]%2==1) return -1;
		if (a[i]%2==1 & a[i+1]%2==0) return -1;
	}
}
int tong(int a[], int n)
{
	int sum=0;
	for (int i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	if (sum%2==0) return 0;
	return 1;
}
int kt1(int a[], int n)
{
	if (n%2==0 && tong(a,n)==0) return -1;
	if (n%2==1 && tong(a,n)==1) return -1;
}