#include<iostream>
#define SIZE 100
using namespace std;
void nhapmang(int A[],int &n);
int chan(int n);
int kiemtra(int A[],int n);
void xuat(int n);
int main()
{
	int A[SIZE];
	int n;
	nhapmang(A,n);
	int kq=kiemtra(A,n);
	xuat(kq);
	return 0;
}
void nhapmang(int A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int chan(int n)
{
	if(n%2==0)
		return 1;
	return 0;
}
int kiemtra(int A[],int n)
{
	int d=-1;
	for(int i=0;i<n;i++)
	{
		if(chan(A[i])!=chan(A[i+1]))
			d=-1;
		else
		{
			d=i+1;
			break;
		}
	}
	return d;
}
void xuat(int n)
{
	cout<<n;
}