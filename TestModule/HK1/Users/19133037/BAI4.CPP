#include<iostream>
#include<math.h>
using namespace std;
int kiemtra(int x)
{
	int count=0;
	if(x<2)
		return 0;
	else
		for(int i=2;i<=sqrt(x);i++)
			if(x%i==0)
				count++;
	if(count==0)
		return 1;
	else
		return 0;
}
int main()
{
	int A[100][100];
	int m,n,min=99999,i,j;
	cin >>m>>n;
	for( i=0;i<m;i++)
		for( j=0;j<n;j++)
			cin >>A[i][j];
	for( i=0;i<m;i++)
	{
		int tong=0;
		for( j=0;j<n;j++)
			if(kiemtra(A[i][j])==1)
				tong=tong+A[i][j];
		if(tong<min)
			min=tong;
	}
	if(min==99999)
		cout <<0;
	else
		cout <<min;
	return 0;
}