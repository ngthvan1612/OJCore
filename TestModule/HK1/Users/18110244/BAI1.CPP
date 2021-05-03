#include<iostream>
using namespace std;
void diemTran(int x, int y, int &a, int &b);
void tinhDiem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c);

void tinhDiem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c)
{
	a=0;
	b=0;
	c=0;
	diemTran(x,y,a,b);
	diemTran(z,t,a,c);
	diemTran(u,v,b,c);
}

void diemTran(int x, int y, int &a, int &b)
{
	if((x==y))
	{
		a+=1;
		b+=1;
	}
	else
		if ((x-y)==-2)
		{
			a+=3;
			
		}
		if ((x-y)==2)
		{
			b+=3;
				
		}
		if((x-y)==-1)
		{
			a+=3;
			
		}
		if ((x-y)==1)
		{
			b+=3;	
		}
}


int main()
{
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;
	int a,b,c;
	tinhDiem(x,y,z,t,u,v,a,b,c);
	cout<<a<<' '<<b<<' '<<c;
}