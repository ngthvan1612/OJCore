#include<iostream>
#define SIZE 100
using namespace std;
void nhapmang(int A[SIZE][SIZE],int &m,int &n);
int laNT(int n);
int tongNTbenhat(int A[SIZE][SIZE],int m,int n);
void xuat(int n);
int main()
{
	int A[SIZE][SIZE];
	int m,n;
	nhapmang(A,m,n);
	int kq=tongNTbenhat(A,m,n);
	xuat(kq);
	return 0;
}
void nhapmang(int A[SIZE][SIZE],int &m,int &n)
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
int laNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return 1;
	return 0;
}
int tongNTbenhat(int A[SIZE][SIZE],int m,int n)
{
	int tong=0;
	int min=999999999;
	int dem=0;
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(laNT(A[i][j]))
			{
				tong+=A[i][j];
				dem++;
			}
		}
		if(dem==0)
			min=0;
		else if(tong<min)
		{
			min=tong;
			tong=0;
			dem=0;
		}
		
	}
	return min;
}
void xuat(int n)
{
	cout<<n;
}