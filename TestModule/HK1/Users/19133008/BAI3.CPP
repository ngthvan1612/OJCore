#include <iostream.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
void nhap(int a[],int &n)
{
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
		abs(a[i]);
	}
}
int kt(int a[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		if (a[i]%2==0&&a[i+1]%2==0)
		{
			return i+1;
		}
		if (a[i]%2!=0&&a[i+1]%2!=0)
		{
			return i+1;
		}
	}
	return -1;
}
int main()
{
	int a[100];int n;
	nhap(a,n);
	int kq = kt(a,n);
	cout << kq ;
	return 0;
}