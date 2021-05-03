#include<iostream>
using namespace std;

void nhap(int arr[][100],int m,int n);
bool soNguyenTo(int n);
void tong(int arr[][100],int m,int n);

void main()
{
	int arr[100][100],m,n;
	cin>>m>>n;
	nhap(arr,m,n);
	tong(arr,m,n);
}

void nhap(int arr[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
  
	}
}

bool soNguyenTo(int n)
{
	if(n==1)
		return false;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

void tong(int arr[][100],int m,int n)
{
	int sum=0;
	int min=999999;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(soNguyenTo(arr[i][j]))
			{
				sum=sum+arr[i][j];				
			}
		}
		if(sum<min)
				{
					min=sum;
				}
		sum=0;
	}
	cout << min;
}