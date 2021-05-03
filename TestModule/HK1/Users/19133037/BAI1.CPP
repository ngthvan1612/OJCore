#include<iostream>
using namespace std;
int main()
{
	int x,y,z,t,u,v;
	cin >>x>>y>>z>>t>>u>>v;
	int a=0,b=0,c=0;
	if(x==y)
	{
		a=a+1;
		b=b+1;
	}
	if(x==1 && y==3 || x==3 && y==2 || x==2 && y==1)
	{
		a=a+3;
		b=b+0;
	}
	if(x==1 && y==2 || x==2 && y==3 ||x==3 && y==1)
	{
		a=a+0;
		b=b+3;
	}
	if(z==t)
	{
		a=a+1;
		c=c+1;
	}
	if(z==1 && t==3 || z==3 && t==2 || z==2 && t==1)
	{
		a=a+3;
		c=c+0;
	}
	if(z==1 && t==2 || z==2 && t==3 ||z==3 && t==1)
	{
		a=a+0;
		c=c+3;
	}
	if(u==v)
	{
		b=b+1;
		c=c+1;
	}
	if(u==1 && v==3 || u==3 &&v==2 || u==2 && v==1)
	{
		b=b+3;
		c=c+0;
	}
	if(u==1 && v==2 || u==2 &&v==3 ||u==3 && v==1)
	{
		b=b+0;
		c=c+3;
	}
	int aa=a;
	int bb=b;
	int cc=c;
	cout <<aa<<" "<<bb<<" "<<cc;
	return 0;
}