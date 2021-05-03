#include <stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int diem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c);
void xuat( int kq, int a, int b, int c);
void main()
{
	int x, y,z, t,u,v;
	nhap( x, y,z, t,u,v);
	int a,b,c;
	int kq= diem(x, y,z, t,u,v,a,b,c);
	xuat(kq, a,b, c);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y,&z,&t,&u,&v);
}
int diem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c)
{
	a=0;
	b=0;
	c=0;
	if(x==1)
		x=4;
	if (y==1) y=4;
	if (z==1) z=4;
	if(t==1) t=4;
	if (u==1) u=4;
	if(v==1) v=4;
	if (x>=y)
	{
		if(x==y)
		{
			a=a+1;
			b=b+1;
		}
		else
		a=a+3;
	}
	else 
		b=b+3;
	if (z>=t)
	{
		if(z==t)
		{
			a=a+1;
			c=b+1;
		}
		else
			a=a+3;
	}
	else
		c=c+3;

	if (u>=v)
	{
		if(u==v)
		{
			b=b+1;
			c=c+1;
		}
		else
		b=b+3;
	}
	else c=c+3;
	return a, b, c;
}
void xuat( int kq, int a, int b, int c)
{
	printf ("%d %d %d", a,b,c);
}