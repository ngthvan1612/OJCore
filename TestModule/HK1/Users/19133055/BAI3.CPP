#include<iostream>
#define size 100
using namespace std;

void nhapMang(int a[], int n);
void kiemTraChanLe(int a[], int n);

int main()
{
	int a[size],n;
	cin >> n;
	nhapMang(a,n);
	kiemTraChanLe(a,n);
	return 0;
}
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}
void kiemTraChanLe(int a[], int n)
{
	int count =0;
	for(int i=0;i<n -1;i++)
	{
		if((a[i]%2==0 && a[i+2]%2==0) || (a[i]%2!=0 && a[i+2]%2!=0) )
		{
			count++;
		}
		else
		{
			cout << i - 2;
			break;
		}
	}
	if(count == n-1)
		cout << -1;
}

