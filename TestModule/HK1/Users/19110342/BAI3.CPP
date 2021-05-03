#include<iostream>
using namespace std;

int tinh(int n,int A[])
{
	int t=-1, vt=0;
	if(A[0]%2==0)
	{
		for(int i=1;i<n;i++)
		{
			if(A[i]%2==1&&A[i+1]%2==0)
			{
				t=-1;
				i+=2;
			}
			else if(A[i]%2==0)
			{
				vt=i;
				return vt;
				break;
			}
			else if(A[i]%2==1&&A[i+1]%2==1)
			{
				vt=i+1;
				return vt;
				break;
			}
			else if(A[i]%2==1)
			{
				t=-1;	
			}
		}
		return t;
	}
	else if(A[0]%2==1)
	{
		for(int j=1;j<n;j++)
		{
			if(A[j]%2==0 && A[j+1]%2==1)
			{
				t=-1;
				j+=2;
			}
			else if(A[j]%2==1)
			{
				vt=j;
				return vt;
				break;
			}
			else if(A[j]%2==0 && A[j+1]%2==0)
			{
				vt=j+1;
				return vt;
				break;
			}
			else if(A[j]%2==0)
			{
				t=-1;	
			}
		}
		return t;
	}
}
void main()
{
	int n,A[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<tinh(n,A);
}