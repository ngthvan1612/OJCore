#include <stdio.h>
void nhap(int &x, int &y, int &z, int &t, int&u, int &v);
void xuat (int kq);
int trochoi(int x, int y , int z, int t, int u, int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=trochoi(x,y,z,t,u,v);
	xuat (kq);


}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{

	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat (int kq )
{
	printf("%d%d%d",kq);
}
int trochoi(int x, int y , int z, int t, int u, int v)
{
	int a,a1,c,c1,b,b1;int h,k,p;
	a=0;a1=0;c1=0;b1=0;
	b=0;
	c=0;
	if (x<y)
		b=3;
	else 
	{
		if(x==y)
			b=2;
		else 
			b=0;
	}
	if (x>y)
		a=3;
	else 
	{
		if(x==y)
			a=2;
		else 
			a=0;
	}
	if (z<t)
		c=3;
	else 
	{
		if(z==t)
			c=2;
		else 
			c=0;
	}
		if (z>t)
		a1=3;
	else 
	{
		if(z==t)
			a1=2;
		else 
			a1=0;
	}
	if (u<v)
		c1=3;
	else 
	{
		if(u=v)
			c1=2;
		else 
			c1=0;
	}
	if (u>v)
		b1=3;
	else 
	{
		if(x==y)
			b1=2;
		else 
			b1=0;
	}
	h=a+a1;
	k=b+b1;
	p=c+c1;
	return h,k,p;



}