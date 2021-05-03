#include<iostream>
using namespace std;
void nhapmang(int A[], int n);
void chanle(int A[], int n);



void nhapmang(int A[], int n)
{
	
	
	for( int i=0;i<n;i++)
		{
			cin>>A[i];
		}
}
void chanle(int A[], int n)
{
	
	for (int i =0 ; i<n; i++)
	{
		int kt;
		if(A[i]-A[i-1]%2 !=0)
		{
			 kt=1;
		}
		else if (A[i]-A[i-1]%2 !=0)
			 kt=0;
	}
}
void main()
{
	int n;
	cin>>n;
	int i;
	int A[1000];
	nhapmang(A,n);
	int kt;
	if(kt=1)
		cout<<"-1";
	if(kt=0)
		cout<<A[i];
}
