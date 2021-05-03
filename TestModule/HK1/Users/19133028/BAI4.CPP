#include<iostream>
using namespace std;
void nhapmang();
int kiemtraSonguyento();
int tinhTong();
void main()
{
	int n;
	int m;
	cin>>n;
	int S;
	cin>>m;
	nhapmang(A,n,m);
	kiemtraSonguyento(A,n);
	cout<<S;
	
}
void nhapmang(int A[][], int n, int m)
{
	
	for( int i=0;i<n;i++)
		for(int j=0; j<m; j++)
		{
			cin>>A[i][j];
		}
}
int kiemtraSonguyento(int A[][],int n)
{
	int k;
	if(A[i][j]<k)
	{
		return 0;

	}
	for (k=0 ;k<n;k++)
	{
		if(k%2==0||%i=0)
		{
			return 0;
		}
		return 1;
}
int tinhTong(int A[][], int n)
{
	int n,S=0;
		for( int i=0;i<n;i++)
		for(int j=0; j<m; j++)
			if(kiemtraSonguyento(n)==1)
			{
				for ( int i =0; i<n;i++)
				{
					S+=A[i];
			
				}
			}
}
			 






