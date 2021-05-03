#include<stdio.h>
int result(int x, int y);
void rpc(int x, int y, int z, int t, int u, int v);
void input(int &x,int &y,int &z, int &t, int &u, int &v);

void main()
{
	int x,y,z,t,u,v;
	input(x,y,z,t,u,v);
	rpc(x,y,z,t,u,v);
}

void input(int &x,int &y,int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}


void rpc(int x, int y, int z, int t, int u, int v)
{
	int a=0,b=0,c=0;
	if (result(x,y)==1)
	{	
		a++;
		b++;
	}
	else if (result(x,y)==2)
		a+=3;
	else
		b+=3;
	if (result(z,t)==1)
	{	
		a++;
		c++;
	}
	else if (result(z,t)==2)
		a+=3;
	else
		c+=3;
	if (result(u,v)==1)
	{	
		b++;
		c++;
	}
	else if (result(u,v)==2)
		b+=3;
	else
		c+=3;
	printf("%d %d %d",a,b,c);
}

int result(int x, int y)
{
	if (x==y)
		return 1;
	if (x==1)
	{
		if (y==3)
			return 2;
		else
			return 3;
	}
	else
	if (x==2)
	{
		if (y==1)
			return 2;
		else 
			return 3;
	}
	else
	if (x==3)
	{
		if (y==2)
			return 2;
		else
			return 3;
	}
}
