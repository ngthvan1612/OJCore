#include<iostream>
using namespace std;
void nhap(int a[100][100],int &m, int &n);
int SUM(int a[100][100],int m, int n);
int check(int a[100][100], int m, int n);
void xuat(int a[100][100], int m, int n);
int NT(int a);
int main(){
	int a[100][100];
	int m, n;
	nhap(a,m,n);
	xuat(a,m,n);
	return 0;
}
void nhap(int a[100][100],int &m, int &n)
{
	do{
		cin>>m;
		cin>>n;
	}
	while(m>=100||n>=100||m<=1||n<=1);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
}
int SUM(int a[100][100],int m, int n)
{
	int S=0;
	for(int i=0;i<n;i++)
	{
		if(NT(a[m][i])==1)
			S=S+a[m][i];
	}
	return S;
}
int check(int a[100][100], int m, int n)
{
	int S=SUM(a,0,n);
	for(int i=1;i<m;i++)
		if(SUM(a,i,n)<S)
		{	
			S=SUM(a,i,n);
		}	
	return S;
}
void xuat(int a[100][100], int m, int n)
{
	cout<<check(a,m,n);
}
int NT(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
			count++;
	}
	if(count==2)
		return 1;
	else 
		return 2;
}