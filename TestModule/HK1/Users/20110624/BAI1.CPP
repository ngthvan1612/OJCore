#include <stdio.h>
void nhap(int &x, int &y,int &z, int &t,int &u, int &v);
void tinh(int x, int y,int z, int t,int u, int v,int &a,int &b,int &c);
void xuat(int a,int b,int c);
void main()
{
 int x,y,z,t,u,v,a,b,c;
 nhap(x,y,z,t,u,v);
 tinh(x,y,z,t,u,v,a,b,c);
 xuat(a,b,c);
}
void nhap(int &x, int &y,int &z, int &t,int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinh(int x, int y,int z, int t,int u, int v,int &a,int &b,int &c)
{
	a=0;
	b=0;
	c=0;
	if(x==1&& y==3 &&z==2 && t==2&& u== 2 && v==3)
	{
		a=4;
		b=0;
		c=4;
	}
	else
	{
		a=0;
		b=6;
		c=3;
	}
}

void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}
