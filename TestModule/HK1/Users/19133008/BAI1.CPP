#include <iostream.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int tinh(int x,int y )
{
	int kq ;
	if (x==1&&y==3)
	{
		kq = 3;
	}
	if (x==3&&y==2)
	{
		kq =3 ;
	}
	if (x==2&&y==1)
	{
		kq= 3;
	}
	if(x==3&&y==1)
	{
		kq = 0;
	}
	if (x==2&&y==3)
	{
		kq =0 ;
	}
	if (x==1&&y==2)
	{
		kq= 0;
	}
	if(x==y)
	{
		kq =1 ;
	}
	return kq ; 
}
int main()
{
	int a ;int b;int c ;
	
	int x,y,z,t,u,v;
	cin >> x>>y>>z>>t>>u>>v;
	a=tinh(x,y)+tinh(z,t);
	b=tinh(y,x)+tinh(u,v);
	c=tinh(t,z)+tinh(v,u);
	cout <<a<<" "<<b<<" "<<c;

	return 0;
}