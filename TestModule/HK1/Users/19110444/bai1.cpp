#include <stdio.h>
void trochoi(int x,int y,int z,int t,int u,int v);
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	trochoi(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void trochoi(int x,int y,int z,int t,int u,int v)
{
	int nguoi1=0,nguoi2=0,nguoi3=0;
	
	if (x==1)
	{
		if (y==3)
			nguoi1=nguoi1+3;
		else if (y==1)
		{
			nguoi1=nguoi1+1;
			nguoi2=nguoi2+1;
		}
		else if (y==2)
			nguoi2=nguoi2+3;
	}
	if (z==1)
	{
		if (t==3)
			nguoi1=nguoi1+3;
		else if (t==1)
		{
			nguoi1=nguoi1+1;
			nguoi3=nguoi3+1;
		}
		else if (t==2)
			nguoi3=nguoi3+3;
	}
	if (u==1)
	{
		if (v==3)
			nguoi2=nguoi2+3;
		else if (v==1)
		{
			nguoi2=nguoi2+1;
			nguoi3=nguoi3+1;
		}
		else if (v==2)
			nguoi3=nguoi3+3;
	}
	else
	{
	if (x>y)
		nguoi1=nguoi1+3;
	if (x==y)
	{
		nguoi1=nguoi1+1;
		nguoi2=nguoi2+1;
	}
	if (x<y)
		nguoi2=nguoi2+3;
	if (z>t)
		nguoi1=nguoi1+3;
	if (z<t)
		nguoi3=nguoi3+3;
	if (z==t)
	{
		nguoi1=nguoi1+1;
		nguoi3=nguoi3+1;
	}
	if (u>v)
		nguoi2=nguoi2+3;
	if (u<v)
		nguoi3=nguoi3+3;
	if (u==v)
	{
		nguoi3=nguoi3+1;
		nguoi2=nguoi2+1;
	}
	}
	nguoi2=nguoi2-3;
	printf ("%d %d %d",nguoi1,nguoi2,nguoi3);
}