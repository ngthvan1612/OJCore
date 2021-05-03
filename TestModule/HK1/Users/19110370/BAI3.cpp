#include<iostream>
using namespace std;

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	
	}

}
int kiemTra(int a[],int n)
{
	int flag =0;

	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2==0&&a[i+1]%2==1||a[i]%2==1&&a[i+1]%2==0)
		{

			
		
		}
		else
		{
			flag=i+1;
			return flag;
		}

	
	}
	return flag;

}

void main()
{
	int a[1000];
	int n;
	cin>>n;
	nhap(a,n);
	int temp=kiemTra(a,n);
	if(temp==0)
	{

	cout<<-1;

	
	}
	else
	{
	cout<<temp;
	
	}

}