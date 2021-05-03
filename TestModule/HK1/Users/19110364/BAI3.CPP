#include<iostream>
using namespace std;

int XuLy(int A[],int n);
int main()
{
	int n;
	cin>>n;
	int A[101];
	for(int i=0;i<n;i++)
		cin>>A[i];
	int kq=XuLy(A,n);
	cout<<kq;
	return 0;
}
int XuLy(int A[],int n)
{
	bool flag;
	if(A[0]%2==0)
		flag=true;
	else
		flag=false;
	for(int i=1;i<n;i++)
	{
		if(A[i]%2==0)
			if(flag==true)
				return i;
			else
				flag=true;
		else
			if(flag==false)
				return i;
			else
				flag=false;
	}
	return -1;
}