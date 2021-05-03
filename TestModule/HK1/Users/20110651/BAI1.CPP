#include<iostream>
using namespace std;
void xuli(int x, int y, int z, int t, int u, int v)
{
	int diemA=0;
	int diemB=0;
	int diemC=0;
	if(((x==1)&&(y==3))||((x==3)&&(y==2))||((x==2)&&(y==1)))
	{
		diemA+=3;
		diemB+=0;
	}
	if(((x==3)&&(y==1))||((x==2)&&(y==3))||((x==1)&&(y==2)))
	{
		diemA+=0;
		diemB+=3;
	}
	if(x==y)
	{
		diemA+=1;
		diemB+=1;
	}
	if(((z==1)&&(t==3))||((z==3)&&(t==2))||((z==2)&&(t==1)))
	{
		diemA+=3;
		diemC+=0;
	}
	if(((z==3)&&(t==1))||((z==2)&&(t==3))||((z==1)&&(t==2)))
	{
		diemA+=0;
		diemC+=3;
	}
	if(z==t)
	{
		diemA+=1;
		diemC+=1;
	}
	if(((u==1)&&(v==3))||((u==3)&&(v==2))||((u==2)&&(v==1)))
	{
		diemB+=3;
		diemC+=0;
	}
	if(((u==3)&&(v==1))||((u==2)&&(v==3))||((u==1)&&(v==2)))
	{
		diemB+=0;
		diemC+=3;
	}
	if(u==v)
	{
		diemB+=1;
		diemC+=1;
	}
	cout<<diemA<<" "<<diemB<<" "<<diemC;
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	cin>>x>>y>>z>>t>>u>>v;
}

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuli(x,y,z,t,u,v);
}

	