#include<stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
void xuly (int x, int y, int z, int t, int u, int v);
void main ()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuly(x,y,z,t,u,v);
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuly (int x, int y, int z, int t, int u, int v)
{
	int diemA=0;
	int diemB=0;
	int diemC=0;
	if ((x==1&&y==3)||(x==3&&y==2)||(x==2&&y==1))
	{
		diemA=diemA+3;
		diemB=diemB+0;
	}
	if ((x==1&&y==2)||(x==2&&y==3)||(x==3&&y==1))
	{
		diemA=diemA+0;
		diemB=diemB+3;
	}
	if (x==y)
	{
		diemA=diemA+1;
		diemB=diemB+1;
	}
	if ((z==1&&t==3)||(z==3&&t==2)||(z==2&&t==1))
	{
		diemA=diemA+3;
		diemC=diemC+0;
	}
	if ((z==1&&t==2)||(z==2&&t==3)||(z==3&&t==1))
	{
		diemA=diemA+0;
		diemC=diemC+3;
	}
	if (z==t)
	{
		diemA=diemA+1;
		diemC=diemC+1;
	}
	if ((u==1&&v==3)||(u==3&&v==2)||(u==2&&v==1))
	{
		diemB=diemB+3;
		diemC=diemC+0;
	}
	if ((u==1&&v==2)||(u==2&&v==3)||(u==3&&v==1))
	{
		diemB=diemB+0;
		diemC=diemC+3;
	}
	if (u==v)
	{
		diemB=diemB+1;
		diemC=diemC+1;
	}
	printf("%d %d %d",diemA,diemB,diemC);
}