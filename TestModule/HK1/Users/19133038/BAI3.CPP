#include<iostream>
using namespace std;

void nhap(int arr[],int n);
void chanLe(int arr[],int n);

void main()
{
	int arr[100],n;
	cin>>n;
	nhap(arr,n);
	chanLe(arr,n);
}

void nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
}

void chanLe(int arr[],int n)
int tam=0;
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0 && arr[i+1]%2!=0)
		{
			tam = -1;

		}
		else if(arr[i]%2!=0 && arr[i+1]%2==0)
		{
			tam = -1;
		}
		else
			tam = i;

	}
	cout << tam;
}