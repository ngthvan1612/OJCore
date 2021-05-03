#include<stdio.h>
void nhap(int &x,int &y,int&z,int&t, int &u, int &v);
int xuly(int x ,int y,int z ,int t, int u, int v,int &dA,int &dB,int &dC);

void xuat(int dA,int dB,int dC);
void main()
{
	int x,y,z,t,u,v;
	int dA,dB,dC;
	nhap(x,y,z,t,u,v);
	int kq=xuly(x,y,z,t,u,v,dA,dB,dC);
	xuat(dA,dB,dC);
}
void nhap(int &x,int &y,int &z,int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int xuly(int x ,int y,int z ,int t, int u, int v,int &dA,int &dB,int &dC)
{
	int dA1=0;
	int dB1=0;
	if(x>y)
	{
		dA1=3;
		dB1=0;
	}
	else
		
		if(x<y)
		{
			dA1=0;
			dB1=3;
		}
		else
		{
			dA1=1;
			dB1=1;
		}
	

	int dA2=0;
	int dC1=0;
	if(z>t)
	{
		dA2=3;
		dC1=0;
	}
	else
		if(z<t)
		{
			dA2=0;
			dC1=3;
		}
		else
		{
			dA2=1;
			dC1=1;
		}
	

	int dB2=0;
	int dC2=0;
	if(u>v)
	{	dB2=3;
		dC2=0;
	}
	else
		if(u<v)
		{	dB2=0;
			dC2=3;
		}
		else
		{	dB2=1;
			dC2=1;
		}
	 dA=dA1+dA2;
	 dB=dB1+dB2;
	 dC=dC1+dC2;
	return dA,dB,dC;
}
void xuat(int dA,int dB,int dC)
{
	printf("%d %d %d",dA,dB,dC);
}
