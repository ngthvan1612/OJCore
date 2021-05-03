#include<stdio.h>
#include<iostream>

using namespace std;

void Nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	cin>>x;
	cin>>y;
	cin>>z;
	cin>>t;
	cin>>u;
	cin>>v;
}
int XuLyDiem(int x, int y)
{
	if(x==1)
	{
		if(y==3)
			return 1;
		if(y==2)
			return 2;
		if(y==1)
			return 3;
	}
	if(x==2)
	{
		if(y==1)
			return 1;
		if(y==2)
			return 3;
		if(y==3)
			return 2;
	}
	if(x==3)
	{
		if(y==1)
			return 2;
		if(y==2)
			return 1;
		if(y==3)
			return 3;
	}
}
void main()
{
	int x,y,z,t,u,v;
	Nhap(x,y,z,t,u,v);
	int a=0, b=0, c=0;
	//TinhDiemAB
	if(XuLyDiem(x,y)==1)
		a=a+3;
	if(XuLyDiem(x,y)==2)
		b=b+3;
	if(XuLyDiem(x,y)==3)
	{
		a=a+1;
		b=b+1;
	}
	//TinhDiemAC
	if(XuLyDiem(z,t)==1)
		a=a+3;
	if(XuLyDiem(z,t)==2)
		c=c+3;
	if(XuLyDiem(z,t)==3)
	{
		a=a+1;
		c=c+1;
	}
	//TinhDiemBC
	if(XuLyDiem(u,v)==1)
		b=b+3;
	if(XuLyDiem(u,v)==2)
		c=c+3;
	if(XuLyDiem(u,v)==3)
	{
		b=b+1;
		c=c+1;
	}
	cout<<a<<" "<<b<<" "<<c;
	
}