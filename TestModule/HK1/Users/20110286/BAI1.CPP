#include <iostream>

using namespace std;

void nhap(int &x,int &y, int &z, int &t, int &u, int &v);
void diemso(int x,int y, int &a, int &b);
void xuat(int a, int b, int c);

int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a=0,b=0,c=0;
	diemso(x,y,a,b); //A-B
	diemso(z,t,a,c); //A-C
	diemso(u,v,b,c); //B-C
	xuat(a,b,c);
	return 0;
}

void nhap(int &x,int &y, int &z, int &t, int &u, int &v)
{
	cin>>x>>y>>z>>t>>u>>v;
}

void diemso(int x,int y, int &a, int &b)
{
	//A dau B
	if (x==y) 
	{
		a++;
		b++;
	}
	else 
	{
		if (x==1 &&y==3)
		{
			a=a+3;
		}
		else
		{
			if (x==3 && y==1)
			{
				b=b+3;
			}
		}
		if (x==3 &&y==2)
		{
			a=a+3;
		}
		else
		{
			if (x==2 && y==3)
			{
				b=b+3;
			}
		}
		if (x==2 &&y==1)
		{
			a=a+3;
		}
		else
		{
			if (x==1 && y==2)
			{
				b=b+3;
			}
		}
	}
}

void xuat(int a, int b, int c)
{
	cout<<a<<" "<<b<<" "<<c<<" ";	
}