#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include<iostream>

using namespace std;


int main()
{
	int a=0;
	int b=0;
	int c=0;
	int x, y, z, t, u, v;
	cin >> x>> y>> z>>t>> u>> v;
	if(x==y)
	{
		a = a+1;
		b = b+1;
		cout << a;
	}
	if((x==1 && y==3) || (x==3 && y==2) ||( x==2 && y==1))
	{
		a = a+3;
	}
	if( (y==1 && x==3)|| (y==3 && x==2) || (y==2 && x==1))
	{
		b = b+3;
	}
	//
	if(z==t)
	{
		a = a+1;
		c = c+1;
	}
	if((z==1 && t==3) || (z==3 && t==2) ||( z==2 && t==1))
	{
		a = a+3;
	}
	if( (t==1 && z==3)|| (t==3 && z==2) || (t==2 && z==1))
	{
		c = c+3;
	}
	//
	if(u==v)
	{
		b = b+1;
		c = c+1;
	}
	if((u==1 && v==3) || (u==3 && v==2) ||( u==2 && v==1))
	{
		b = b+3;
	}
	if( (v==1 && u==3)|| (v==3 && u==2) || (v==2 && u==1))
	{
		c = c+3;
	}
	//
	cout << a <<" "<< b <<" " <<c;
}
