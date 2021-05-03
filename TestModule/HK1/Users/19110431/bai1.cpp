#include<iostream>
using namespace std;

int tinh(int q,int w,int e);
void output(int a,int b,int c);
void tinhDiem(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
void input(int &x,int &y,int &z,int &t,int &u,int &v);

void main()
{
	int x,y,z,t,u,v,a,b,c;
	input(x,y,z,t,u,v);
	tinhDiem(x,y,z,t,u,v,a,b,c);
	output(a,b,c);
}
void input(int &x,int &y,int &z,int &t,int &u,int &v)
{
	cin>>x>>y>>z>>t>>u>>v;
}
void tinhDiem(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	if(1<=x && x<=3 && 1<=y && y<=3 && 1<=z && z<=3 && 1<=t && t<=3 && 1<=u && u<=3 && 1<=v && v<=3)
	{
		a=tinh(x,y,a)+tinh(z,t,a);
		b=tinh(x,y,b)+tinh(u,v,b);
		c=tinh(z,t,c)+tinh(u,v,c);
	}
}
int tinh(int q,int w,int e)
{
		e=0;
		if((q==1 && w==3) || (q==2 && w==1) || (q==3 && w==2))
			e+=3;
		else if(q==w)
			e+=1;
		else 
			e+=0;
		
	return e;
}
void output(int a,int b,int c)
{
	cout<<a<<" "<<b<<" "<<c;
}