#include<iostream>
using namespace std;
void Nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void Xet(int x, int y, int &a, int &b);
void main()
{
	int x,y,z,t,u,v;
	int a=0;
	int b=0;
	int c=0;
	Nhap(x,y,z,t,u,v);
	Xet(x,y,a,b);
	Xet(z,t,a,c);
	Xet(u,v,b,c);
	cout << a << " " << b << " " << c;
}

void Nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	cin >> x >> y >> z >> t >> u >> v;
}
void Xet(int x, int y, int &a, int &b)
{
	
	if(x==1)
	{
		if(y==1)
		{
			a+=1;
			b+=1;
		}
		else if(y==2)
		{
			b+=3;
		}
		else 
		{
			a+=3;
		}
	}
	else if(x==2)
	{
		if(y==2)
		{
			a+=1;
			b+=1;
		}
		else if(y==3)
		{
			b+=3;
		}
		else 
		{
			a+=3;
		}
	}
	else if(x==3)
	{
		if(y==3)
		{
			a+=1;
			b+=1;
		}
		else if(y==1)
		{
			b+=3;
		}
		else 
		{
			a+=3;
		}
	}
	
}