#include <stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int tinhdiem(int x, int y, int z, int t, int u, int v);
void xuat(int kq);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=tinhdiem(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinhdiem(int x, int y, int z, int t, int u, int v)
{
	int A,B,C,m,n,o,a,b,c;
	if ((x==1)&&(y==3))
	{
		n=0;
		m=3;
	}
	else if ((x==3)&&(y==1))
	{
		n=3;
		m=0;
	}
	if ((x==3)&&(y==2))
	{
		m=3;
		n=0;
	}
	else if ((x==2)&&(y==3))
	{
		m=0;
		n=3;
	}
	if (x==y)
	{
		m=1;
		n=1;
	}
	if ((z==1)&&(t==3))
	{
		a=0;
		o=3;
	}
	else if ((z==3)&&(t==1))
	{
		a=3;
		o=0;
	}
	if ((z==3)&&(t==2))
	{
		o=3;
		a=0;
	}
	else if ((z==2)&&(t==3))
	{
		a=0;
		o=3;
	}
	if (z==t)
	{
		a=1;
		o=1;
	}
	if ((u==1)&&(v==3))
	{
		c=0;
		b=3;
	}
	else if ((u==3)&&(u==1))
	{
		c=3;
		b=0;
	}
	if ((u==3)&&(v==2))
	{
		b=3;
		c=0;
	}
	else if ((u==2)&&(v==3))
	{
		b=0;
		c=3;
	}
	if (u==v)
	{
		b=1;
		c=1;
	}
	A=m+o;
	B=n+b;
	C=a+c;
	printf("%d %d %d",A,B,C);
	return 0;
}



