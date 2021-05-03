#include<iostream>

using namespace std;

void kt(int x, int y, int &a, int &b)
{
	if(x==1&&y==3)
	{
		a+=3;
	}
	else if(x==3&&y==1)
		b+=3;
	if(x==3&&y==2)
	{
		a+=3;
	}
	else if(x==2&&y==3)
		b+=3;
	if(x==2&&y==1)
	{
		a+=3;
	}
	else if(x==1&&y==2)
		b+=3;
	if(x==y)
	{
		a++;
		b++;
	}

}
void main()
{
	int a=0,b=0,c=0;
	int x, y, z, t, u, v;
	cin>>x>>y>>z>>t>>u>>v;
	kt(x,y,a,b);
	kt(z,t,a,c);
	kt(u,v,b,c);
	cout<<a<<" "<<b<<" "<<c;
}