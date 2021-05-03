#include<stdio.h>
#include<iostream>

using namespace std;

int KTLC(int A[], int n);
int KTCL(int A[], int n);
int KiemTra(int A[],int n);

int main()
{
	int A[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	int kq=KiemTra(A,n);
	if(kq==-1)
		cout<<kq;
	else 
		cout<<kq;
	return 0;
}
int KTLC(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]!=0)
		{
			if(i%2==0)
				if(A[i]%2==0)
					return i;
			if(i%2!=0)
				if(A[i]%2!=0)
					return i;
		}
		else
			return i;
	}
	
		return -1;
}

int KTCL(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]!=0)
		{
			if(i%2==0)
				if(A[i]%2==1)
					return i;
			if(i%2!=0)
				if(A[i]%2==0)
					return i;
		}
		else
			return i;
	}
	
		return -1;
}
int KiemTra(int A[],int n)
{
	if(A[0]!=0)
	{
		if(A[0]%2==0)
			return KTCL(A,n);
		else
			return KTLC(A,n);
	}
	else
		return 0;
}