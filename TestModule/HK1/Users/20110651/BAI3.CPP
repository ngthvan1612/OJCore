#include<iostream>
using namespace std;
void nhap(int A[100], int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}
int kiemtra(int A[100],int n)
{
	for(int i=0;i<n;i++)
	{
		if(((A[i]%2==0)&&(A[i+1]%2!=0))||((A[i]%2!=0)&&(A[i+1]%2==0)))
			return -1;
	}
	return i;
}
void main()
{
	int n;
	int A[100];
	nhap(A,n);
	int kq= kiemtra(A,n);
	cout<<kq;
}