#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include<iostream>

using namespace std;



int main()
{
	int n;
	int a[100];
	cin>>n;
	for(int i =0 ; i<n;i++)
	{
		cin >> a[i];
	}
	if(a[0]%2==0)
	{
		for(int i =0 ; i<n;i++)
		{
			if(i%2==1)
			{
				if(a[i]%2==0)
				{
					cout<<a[i];
					break;
				}
			}
			 if(i%2==0)
			{
				if(a[i]%2!=0)
				{
					cout<<a[i];
					break;
				}
			}
			
		}
		cout<<"-1";
	}
	else if(a[0]%2==1)
	{
		for(int i =0 ; i<n;i++)
		{
			if(i%2==0)
			{
				if(a[i]%2==0)
				{
					cout<<a[i];
					break;
				}
			}
			 if(i%2!=0)
			{
				if(a[i]%2!=0)
				{
					cout<<a[i];
					break;
				}
			}
			
		}
		cout<<"-1";
	}
	
}
