#include<iostream>
using namespace std;
void Nhap(int &n, int a[]);
int Xet(int n, int a[]);
void Xuat(int kq);
void main()
{
	int n;
	int a[100];
	Nhap(n,a);
	int kq = Xet(n,a);
	Xuat(kq);
}
void Nhap(int &n, int a[])
{
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int Xet(int n, int a[])
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if(a[i]%2==0&&a[j]%2!=0||a[i]%2!=0&&a[j]%2==0)
				return -1;
			else if(a[i]%2==0&&a[j]%2==0||a[i]%2!=0&&a[j]%2!=0)
				return i;
		}
	}	
}
void Xuat(int kq)
{
	cout<< kq;
}