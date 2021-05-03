#include <iostream>
using namespace std;
int main()
{	
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;
	


	int ma,mb,mc;
	ma=mb=mc=0;
	if (x==1)//////A dau B
	{
		if (y==1)
		{
			ma++;
			mb++;
		}
		if(y==2) mb=mb+3;
		if(y==3) ma=ma+3;
	}
	if (x==2)
	{
		if(y==1) ma=ma+3;
		if(y==2) 
		{
			ma++;
			mb++;
		}
		if(y==3) mb=mb+3;
	}
	if (x==3)
	{
		if(y==1) mb=mb+3;
		if(y==3)
		{
			ma++;
			mb++;
		}
		if(y==2) ma=ma+3;
	}
	if (z==1)//////A dau C
	{
		if (t==1)
		{
			ma++;
			mc++;
		}
		if(t==2) mc=mc+3;
		if(t==3) ma=ma+3;
	}
	if (z==2)
	{
		if(t==1) ma=ma+3;
		if(t==2) 
		{
			ma++;
			mc++;
		}
		if(t==3) mc=mc+3;
	}
	if (z==3)
	{
		if(t==1) mc=mc+3;
		if(t==3)
		{
			ma++;
			mc++;
		}
		if(t==2) ma=ma+3;
	}
		if (u==1)//////B dau C
	{
		if (v==1)
		{
			mb++;
			mc++;
		}
		if(v==2) mc=mc+3;
		if(v==3) mb=mb+3;
	}
	if (u==2)
	{
		if(v==1) mb=mb+3;
		if(v==2) 
		{
			mb++;
			mc++;
		}
		if(v==3) mc=mc+3;
	}
	if (u==3)
	{
		if(v==1) mc=mc+3;
		if(v==3)
		{
			mb++;
			mc++;
		}
		if(v==2) mb=mb+3;
	}
cout<<ma <<' '<< mb << ' ' << mc;
return 0;
}