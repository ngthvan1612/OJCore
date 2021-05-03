#include<iostream>
using namespace std;

bool snt(int a);
int XuLy(int A[][200],int m,int n);
int main()
{
	int m,n;
	cin>>m>>n;
	int A[200][200];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
	int S=XuLy(A,m,n);
	cout<<S;
	return 0;
}
int XuLy(int A[][200],int m,int n)
{
	int Min=0;
	int key=100000;
	for(int i=0;i<m;i++)
	{
		int S=0;
		for(int j=0;j<n;j++)
			if(snt(A[i][j])==true)
				S+=A[i][j];
		if(S<key)
		{
			key=S;
			Min=S;
		}
	}
	return Min;
}
bool snt(int a)
{
	if(a<2)
		return false;
	for(int i=2;i<=a/2;i++)
		if(a%i==0)
			return false;
	return true;
}