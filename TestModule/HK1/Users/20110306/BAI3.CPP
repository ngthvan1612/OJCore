#include<iostream>
using namespace std;
void nhap(int A[],int &n);
int xuLy(int A[],int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=xuLy(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int xuLy(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		if((A[i]%2==0 && A[i+1]%2==0) || (A[i]%2!=0 && A[i+1]%2!=0))
			if(i!=n-1)
				return i+1;
	}
	return -1;
}
void xuat(int kq)
{
	cout<<""<<kq;
}