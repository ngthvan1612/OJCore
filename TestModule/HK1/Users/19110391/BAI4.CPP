#include<stdio.h>
#include<iostream>

using namespace std;

void NhapMang(int &m, int &n, int A[101][101])
{
	cin>>m;
	cin>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}
int KtSoNguyenTo(int x)
{
	int count=0;
	for(int i=1; i<x; i++)
		if(x%i==0)
			count++;
	if(count==1)
		return 1;
	else
		return 0;
}
int XuLyKq(int m, int n, int A[101][101])
{
	int min=999999;
	for(int i=0; i<m; i++)
	{
		int tong=0;
		for(int j=0; j<n; j++)
		{
			if(KtSoNguyenTo(A[i][j])==1)
				tong=tong+A[i][j];
		}
		if(tong<min)
			min=tong;
	}
	return min;
}
void main()
{
	int m,n,A[101][101];
	NhapMang(m,n,A);
	int lyn=XuLyKq(m,n,A);
	cout<<lyn;
}