#include<iostream>
using namespace std;
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void tinhDiem(int x,int y,int z,int t,int u,int v,int &dA,int &dB,int &dC);
void xuat(int dA,int dB,int dC);
int main()
{
	int x,y,z,t,u,v,dA,dB,dC;
	nhap(x,y,z,t,u,v);
	tinhDiem(x,y,z,t,u,v,dA,dB,dC);
	xuat(dA,dB,dC);
	return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	cin>>x>>y>>z>>t>>u>>v;
}
void tinhDiem(int x,int y,int z,int t,int u,int v,int &dA,int &dB,int &dC)
{
	dA=0;
	dB=0;
	dC=0;
	{
		if(x==y)
		{
			dA++;
			dB++;
		}	
	else if(x==1 && y==2)
			dB+=3;
		else {if(x==2 && y==3)
			dB+=3;
			else
				dA+=3;}
	}
	{
		if(z==t)
		{
			dA++;
			dC++;
		}
		else {if(z==1 && t==2)
				dC+=3;
			 else	if(z==2 && t==3)
				 dC+=3;
					else
					dA+=3;}
	}
	{
		if(u==v)
		{
			dB++;
			dC++;
		}
		else {if(u==1 && v==2)
				dC+=3;
			  else if(u==2 && v==3)
				  dC+=3;
					else
					dB+=3;}
	}
}
void xuat(int dA,int dB,int dC)
{
	cout<<dA<<" "<<dB<<" "<<dC;
}