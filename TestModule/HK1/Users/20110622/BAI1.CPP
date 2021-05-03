#include<iostream>
using namespace std;
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void xuat(int &a, int &b, int &c, int x, int y, int z, int t, int u, int v);
int main(){
	int a,b,c;
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuat(a,b,c,x,y,z,t,u,v);
	return 0;
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	do{
		cin>>x>>y>>z>>t>>u>>v;
	}while(x>3||y>3||z>3||t>3||u>3||v>3||x<1||y<1||z<1||t<1||u<1||v<1);
}
void xuat(int &a, int &b, int &c, int x, int y, int z, int t, int u, int v)
{
	a=0;
	b=0;
	c=0;
	if(x==1&&y==3||x==2&&y==1||x==3&&y==2)
	{
		a=a+3;
		b=b+0;
	}
	if(x==1&&y==2||x==3&&y==1)
	{
		a=a+0;
		b=b+3;
	}
	if(x==y)
	{
		a=a+1;
		b=b+1;
	}
	if(z==1&&t==3||z==2&&t==1||z==3&&t==2)
	{
		a=a+3;
		c=c+0;
	}
	if(z==1&&t==2||z==2&&t==3||z==3&&t==1)
	{
		a=a+0;
		c=c+3;
	}
	if(z==t)
	{
		a=a+1;
		c=c+1;
	}
	if(u==1&&v==3||u==2&&v==1||u==3&&v==2)
	{
		b=b+3;
		c=c+0;
	}
	if(u==1&&v==2||u==2&&v==3||u==3&&v==1)
	{
		b=b+0;
		c=c+3;
	}
	if(u==v)
	{
		b=b+1;
		c=c+1;
	}
	cout<<a<<"  "<<b<<"  "<<c;  
}