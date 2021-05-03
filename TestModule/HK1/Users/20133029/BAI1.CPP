#include<iostream>

using namespace std;
void nhap(int &x,int &y,int &z,int &t, int &u, int &v);
int thangthua(int x,int y);
void tinhtoan(int x,int y,int z,int t, int u, int v,int &A,int &B,int &C);

void main()
{
	int A=0,B=0,C=0;
	int x=0,y=0;
	int z=0,t=0;
	int u=0,v=0;
	nhap(x,y,z,t,u,v);
	tinhtoan(x,y,z,t,u,v,A,B,C);



}
void nhap(int &x,int &y,int &z,int &t, int &u, int &v)
{
	cin>>x>>y>>z>>t>>u>>v;
}
int thangthua(int x,int y)
{
	if (x==1&&y==3)
		return 1;
	else if (x==3&&y==2)
		return 1;
	else if (x==2&&y==1)
		return 1;
	else if (x==y)
		return 2;
	else return 0;
}
void tinhtoan(int x,int y,int z,int t, int u, int v,int &A,int &B,int &C)
{
	//AB
	if (thangthua(x,y)==1)
	{
		A=A+3;
	}
	else if (thangthua(x,y)==2)
	{
		A++;
		B++;
	}
	else if (thangthua(x,y)==0)
	{
		B=B+3;
	}


	//AC
		if (thangthua(z,t)==1)
	{
		A=A+3;
	}
	else if (thangthua(z,t)==2)
	{
		A++;
		C++;
	}
	else if (thangthua(z,t)==0)
	{
		C=C+3;
	}


	//BC
		if (thangthua(u,v)==1)
	{
		B=B+3;
	}
	else if (thangthua(u,v)==2)
	{
		B++;
		C++;
	}
	else if (thangthua(u,v)==0)
	{
		C=C+3;
	}
	
	cout<<A<<" "<<B<<" "<<C;
}
