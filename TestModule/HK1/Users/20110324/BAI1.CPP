#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void AdauB(int x, int y, int &m,int &n);
void AdauC(int z, int t, int &m, int &c);
void BdauC(int u, int v, int m, int n, int c);
void main()
{
	int x,y,z,t,u,v,m,n,c;
	nhap(x,y,z,t,u,v);
	AdauB(x,y,m,n);
	AdauC(z,t,m,c);
	BdauC(u,v,m,n,c);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void AdauB(int x, int y, int &m,int &n)
{
     m=0;
	 n=0;
	if(x==3&&y==3)
	{
		m=m+1;
		n=n+1;
	}
	if(x==3&&y==2)
	{
		m=m+3;
	}
	if(x==3&&y==1)
		n=n+3;
	if(x==2&&y==3)
		n=n+3;
	if(x==2&&y==2)
	{
		m=m+1;
		n=n+1;
	}
	if(x==2&&y==1)
		m=m+3;
	if(x==1&&y==3)
		m=m+3;
	if(x==1&&y==2)
		n=n+3;
	if(x==1&&y==1)
	{
		m=m+1;
		n=n+1;
	}
}
void AdauC(int z, int t, int &m, int &c)
{
    if(z==3&&t==3)
	{
		m=m+1;
		c=c+1;
	}
	if(z==3&&t==2)
	{
		m=m+3;
	}
	if(z==3&&t==1)
		c=c+3;
	if(z==2&&t==3)
		c=c+3;
	if(z==2&&t==2)
	{
		m=m+1;
		c=c+1;
	}
	if(z==2&&t==1)
		m=m+3;
	if(z==1&&t==3)
		m=m+3;
	if(z==1&&t==2)
		c=c+3;
	if(z==1&&t==1)
	{
		m=m+1;
		c=c+1;
	}
}
void BdauC(int u, int v, int m, int n, int c)
{   
	c=0;
	if(u==3&&v==3)
	{
		c=c+1;
		n=n+1;
	}
	if(u==3&&v==2)
	{
		c=c+3;
	}
	if(u==3&&v==1)
		n=n+3;
	if(u==2&&v==3)
		n=n+3;
	if(u==2&&v==2)
	{
		c=c+1;
		n=n+1;
	}
	if(u==2&&v==1)
		c=c+3;
	if(u==1&&v==3)
		c=c+3;
	if(u==1&&v==2)
		n=n+3;
	if(u==1&&v==1)
	{
		c=c+1;
		n=n+1;
	}
	printf("%d %d %d", m,n,c);
}

