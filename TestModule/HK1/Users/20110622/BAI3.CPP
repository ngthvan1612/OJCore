#include<iostream>
using namespace std;
void nhap(int a[], int &n);
int check(int a[], int n);
void xuat(int a[], int n);
int main(){
	int a[100];
	int n;
	nhap(a,n);
	xuat(a,n);
	return 0;
}
void nhap(int a[], int &n)
{
	do{
		cin>>n;
	}while(n>=100||n<=1);
	for(int i=0;i<n;i++)
		cin>>a[i];
}
int check(int a[], int n)
{
	int S=a[0];
	for(int i=1;i<n;i++)
	{
		if(S%2==0&&a[i]%2==0)
		{
			return i;
		}
		if(S%2==1&&a[i]%2==1)
		{
			return i;
		}
		else
		{
			S=a[i];
		}
	}
	return -1;
}
void xuat(int a[], int n)
{
	cout<<check(a,n);
}