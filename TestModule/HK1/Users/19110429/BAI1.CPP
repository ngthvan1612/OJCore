#include<iostream>
using namespace std;
int main()
{
	int x,y,z,t,u,v,dem1=0,dem2=0,dem3=0;
	cin >> x >> y >> z >> t >> u >> v;
	if(x == 1 && y == 3)
	{
		dem1 = dem1 + 3;
		dem2 = dem2 + 0;
	}
	else if(x == 3 && y == 1)
	{
		dem2 = dem2 + 3;
		dem1 = dem1 + 0;
	}
	else if(x == 3 && y == 2)
	{
		dem1 = dem1 + 3;
		dem2 = dem2 + 0;
	}
	else if(x == 2 && y == 3)
	{
		dem2 = dem2 + 3;
		dem1 = dem1 + 0;
	}
	else if(x == 2 && y == 1)
	{
		dem1 = dem1 + 3;
		dem2 = dem2 + 0;
	}
	else if(x == 1 && y == 2)
	{
		dem2 = dem2 + 3;
		dem1 = dem1 + 0;
	}
	else
	{
		dem1 = dem1 + 1;
		dem2 = dem2 + 1;
	}
	if(z == 1 && t == 3)
	{
		dem1 = dem1 + 3;
		dem3 = dem3 + 0;
	}
	else if(z == 3 && t == 1)
	{
		dem3 = dem3 + 3;
		dem1 = dem1 + 0;
	}
	else if(z == 3 && t == 2)
	{
		dem1 = dem1 + 3;
		dem3 = dem3 + 0;
	}
	else if(z == 2 && t == 3)
	{
		dem3 = dem3 + 3;
		dem1 = dem1 + 0;
	}
	else if(z == 2 && t == 1)
	{
		dem1 = dem1 + 3;
		dem3 = dem3 + 0;
	}
	else if(z == 1 && t == 2)
	{
		dem3= dem3 + 3;
		dem1 = dem1 + 0;
	}
	else
	{
		dem1 = dem1 + 1;
		dem3 = dem3 + 1;
	}
    if(u == 1 && v == 3)
	{
		dem2 = dem2 + 3;
		dem3 = dem3 + 0;
	}
	else if(u == 3 && v == 1)
	{
		dem3 = dem3 + 3;
		dem2 = dem2 + 0;
	}
	else if(u == 3 && v == 2)
	{
		dem2 = dem2 + 3;
		dem3 = dem3 + 0;
	}
	else if(u == 2 && v == 3)
	{
		dem3 = dem3 + 3;
		dem2 = dem2 + 0;
	}
	else if(u == 2 && v == 1)
	{
		dem2 = dem2 + 3;
		dem3 = dem3 + 0;
	}
	else if(u == 1 && v == 2)
	{
		dem3= dem3 + 3;
		dem2 = dem2 + 0;
	}
	else
	{
		dem2 = dem2 + 1;
		dem3 = dem3 + 1;
	}
	cout << dem1 <<" "<< dem2 <<" "<<dem3;
	return 0;
}
