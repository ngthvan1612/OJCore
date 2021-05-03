#include<iostream>
using namespace std;
int main()
{
	int A[100];
	int n,count=0,x;
	cin >>n;
	for(int i=0;i<n;i++)
		cin >>A[i];
	if(A[0]%2==0)
	{
		for(int j=1;j<n;j++)
		{
			if(j%2==1)
			{
				if(A[j]%2==0)
				{
					count++;
					x=j;
					break;
				}
			}
			else
				if(A[j]%2==1)
				{
					count++;
					x=j;
					break;
				}
		}
	}
	else
	{
		for(int k=1;k<n;k++)
		{
			if(k%2==1)
			{
				if(A[k]%2==1)
				{
					count++;
					x=k;
					break;
				}
			}
			else
				if(A[k]%2==0)
				{
					count++;
					x=k;
					break;
				}
		}
	}
	if(count ==0)
		cout<<-1;
	else
		cout <<x;
	return 0;
}