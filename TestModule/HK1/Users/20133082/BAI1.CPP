#include<stdio.h>
#include<math.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void tinhdiem(int x,int y,int z,int t, int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinhdiem(x,y,z,t,u,v);

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinhdiem(int x,int y,int z,int t, int u,int v)
{
	int a=0;
	int b=0;
	int c=0;
	if(abs(x-y)==1)
	{
		if(x>y)
		{
			a=a+3;
		}
		else b=b+3;
	}
	if(abs(x-y)==2)
	{
		if(x<y)
		{
			a=a+3;
		}
		else b=b+3;
	}
	if(x==y)
	{
		a++;
		b++;
	}

	if(abs(z-t)==1)
	{
		if(z>t)
		{
			a=a+3;
		}
		else c=c+3;
	}
	if(abs(z-t)==2)
	{
		if(z<t)
		{
			a=a+3;
		}
		else c=c+3;
	}
	if(z==t)
	{
		a++;
		c++;
	}

		if(abs(u-v)==1)
	{
		if(u>v)
		{
			b=b+3;
		}
		else c=c+3;
	}
	if(abs(u-v)==2)
	{
		if(u<v)
		{
			b=b+3;
		}
		else c=c+3;
	}
	if(u==v)
	{
		b++;
		c++;
	}
		

	printf("%d ",a);
	printf("%d ",b);
	printf("%d ",c);
}