#include<stdio.h>
#include<iostream>

using namespace std;
 
int laNT(int x);
int tongsoNTRow(int A[][100], int i,int n);
int TongsoNT(int A[][100], int m,int n);

int main()
{
	int A[100][100],m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
	int kq=TongsoNT(A,m,n);
	cout<<kq;
	return 0;
}
int laNT(int x)
{
/*	if(x==0 || x==1)
		return 0;
	int i=1;
	while(i<x)
	{
		if(x%i==0)
			return 0;
		i++;
	}
	return 1;*/
	int count =0;
	if( x==0)
		return 0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			count++;
		if(count==2)
			return 1;
		else
			return 0;


}
int tongsoNTRow(int A[][100], int i, int n)
{
	int sum=0;
	for(int j=0;j<n;j++)
		if(laNT(A[i][j])==1)
			sum+=A[i][j];
	return sum;
}
int TongsoNT(int A[][100], int m,int n)
{
	int min[100];
	int nMin=0;
	for(int i=0;i<m;i++)
			min[nMin++]=tongsoNTRow(A,i,n);
	for(int z=0;z<nMin-1;z++)
		{
			for(int j=1;j<nMin;j++)
				if(min[z]>min[j])
				{
					int temp = min[z];
					min[z]=min[j];
					min[j]=temp;
				}

		}
	return min[0];
}
