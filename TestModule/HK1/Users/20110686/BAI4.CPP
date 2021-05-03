#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c=0;
	int m[100][100];
	int i=0;
	int j=0;
	int k=0;
	int d=0;
for (i=0;i<a;i++)
{
	for (j=0;j<b;j++)
	{
		cin >> m[i][j];
	}
}
for (i=0;i<a;i++)
{
	for (j=0;j<b;j++)
	{
   for (k=2;k<m[i][j];k++)
   {
	   if (m[i][j]%k==0)
	   {c=1;}
	   if (c==1) {d=d+m[i][j];}
		
	}
	}
}
cout << d


