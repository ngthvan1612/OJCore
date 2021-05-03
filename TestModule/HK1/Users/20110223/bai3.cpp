#include<iostream>
using namespace std;
int kt(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if((A[i]%2==0 && A[i+1]%2==1) || (A[i]%2==1 && A[i+1]%2==0))
			return -1;
		if((A[i]%2==0 && A[i+1]%2==0) || (A[i]%2==1 && A[i+1]%2==1))
			return i+1;
	}
	return 0;
}
void main()
{
	int n;
	cin>>n;
	int A[1000];
	for(int i=0;i<n;i++)
		cin>>A[i];
	int kq=kt(A,n);
	cout<<kq;
}