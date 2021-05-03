#include<iostream>
using namespace std;

int process(int A[][100],int m,int n);
void nhap(int A[][100],int &m ,int &n);
int laNT(int n);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int res=process(A,m,n);
	cout<<res;
}
void nhap(int A[][100],int &m ,int &n)
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
int laNT(int n)
{
	int d=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			d++;
	if(d==2)
		return 1;
	return 0;
}
int process(int A[][100],int m,int n)
{
	int count=0,min=0;
	for(int i=0;i<m;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			if(laNT(A[i][j])==1)
				count+=A[i][j];
		}
		 min=0;
		if(min>count)
			min=count;

	}
	return min;
}