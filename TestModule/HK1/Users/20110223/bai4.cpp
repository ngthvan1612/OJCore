#include<iostream>
using namespace std;
int SNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return 1;
	return 0;
}
int minTong(int A[][100],int &m,int &n)
{
	int tong=0,B[100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(SNT(A[i][j])==1)
				tong+=A[i][j];
			else
				return tong;
		}
		B[i]=tong;
	}
	int min=B[0];
	for(int k=0;k<m;k++)
		if(B[k]<min)
			min=B[k];
	return min;

}

void main()
{
	int m,n;
	cin>>m>>n;
	int A[100][100];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
	int kq=minTong(A,m,n);
	cout<<kq;
}