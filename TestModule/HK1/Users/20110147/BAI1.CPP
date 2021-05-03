#include<stdio.h>
void nhap( int &x, int &y, int &z, int &t, int &u, int &v);
void xuat( int x, int y, int z, int t, int u, int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuat(x,y,z,t,u,v);
}
void nhap( int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat( int x, int y, int z, int t, int u, int v)
{
	int d1=0;
	int d2=0;
	int d3=0;
	if (x<y)
	{
		if (x==1 && y==3)
			d1=d1+3;
		else d2=d2+3;
	}
	else if (x==y)
	{
		d1=d1+1;
		d2=d2+1;
	}
	else if (x>y)
	{
		if (x==3 && y==1)
			d2=d2+3;
		else d1=d1+3;
	}
	if (z<t)
	{
		if (z==1 && t==3)
			d1=d1+3;
		else d3=d3+3;
	}
	else if (z==t)
	{
		d1=d1+1;
		d3=d3+1;
	}
	else if (z>t)
	{
		if (z==3 && t==1)
			d3=d3+3;
		else d1=d1+3;
	}
	if (u<v)
	{
		if (u==1 && v==3)
			d2=d2+3;
		else d3=d3+3;
	}
	else if (u==v)
	{
		d2=d2+1;
		d3=d3+1;
	}
	else if (u>v)
	{
		if (z==3 && t==1)
			d3=d3+3;
		else d2=d2+3;
	}
	printf("%d %d %d",d1,d2,d3);
}


