#include<stdio.h>
void nhap(int &x,int &y,int &z, int &t, int &u, int &v);
void kbb(int x,int y, int &a, int &b);
void xuli(int x, int y, int z, int t, int u, int v, int &a, int &b,int &c);
void xuat(int a, int b, int c);
void main()
{
	int x,y,z,t,u,v,a,b,c;
	nhap(x,y,z,t,u,v);
	xuli(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}
void nhap(int &x,int &y,int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void kbb(int x,int y, int &a, int &b)
{
	if (x==1)
		if (y==1)
		{
			a=a+1;
			b=b+1;
		}
		else if (y==2)
		{
			a=a;
			b=b+3;
		}
		else
		{
			b=b;
			a=a+3;
		}
	else if (x==2)
		if (y==1)
		{
			a=a+3;
			b=b;
		}
		else if (y==2)
		{
			a=a+1;
			b=b+1;
		}
		else
		{
			b=b+3;
			a=a;
		}
	else
		if (y==1)
		{
			a=a;
			b=b+3;
		}
		else if (y==2)
		{
			a=a+3;
			b=b;
		}
		else
		{
			b=b+1;
			a=a+1;
		}
}
void xuli(int x, int y, int z, int t, int u, int v, int &a, int &b,int &c)
{
	a=0;
	b=0;
	c=0;
	kbb(x,y,a,b);
	kbb(z,t,a,c);
	kbb(u,v,b,c);
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d",a,b,c);
}
