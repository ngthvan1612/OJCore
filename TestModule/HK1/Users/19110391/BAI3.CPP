#include<stdio.h>
#include<iostream>

using namespace std;

void NhapMang(int &n, int A[101],int B[101])
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
	for(int j=0; j<n; j++)
		B[j]=999999;

}
int KtChanLeXenKe(int n, int A[101], int B[101])
{
	int flag=0;
	for(int i=0; i<n-1; i++)
	{
		if(A[i]%2==0)
			if(A[i+1]%2==0)
			{
				flag++;
				B[i+1]=A[i+1];
			}
		if(A[i]%2!=0)
			if(A[i+1]%2!=0)
			{
				flag++;
				B[i+1]=A[i+1];
			}
	}
	return flag;
}

void main()
{
	int n, A[101];
	int B[101];
	NhapMang(n,A,B);
	int kq=KtChanLeXenKe(n,A,B);
	if(kq==0)
		cout<<-1;
	else
	{
		int min=B[0];
		for(int i=0; i<n; i++)
		{
			if(B[i]<min)
				min=i;
		}
		cout<<min;
	}
}