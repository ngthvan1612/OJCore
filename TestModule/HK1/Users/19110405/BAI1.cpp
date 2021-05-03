#include <stdio.h>

void main()
{
	int x,y,z,t,u,v;
	scanf ("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int a,b,c;
	if (x==1 && y==3)
	{
		a=3;
		b=0;
	}
	else if (x==y)
		a=b=1;
	else if (x>y)
	{
		a=3;
		b=0;
	}
	else if (x==3 && y==1)
	{
		a=0;
		b=3;
	}
	else
	{
		a=0;
		b=3;
	}
	if (z==1 && t==3)
	{
		a=a+3;
		c=0;
	}
	else if (z==t)
	{
		c=1;
		a=a+1;
	}
	else if (z>t)
	{
		a=a+3;
		c=0;
	}
	else if (z==3 && t==1)
	{
		a=a+0;
		c=3;
	}
	else
	{
		a=a+0;
		c=3;
	}	
	if (u==1 && v==3)
	{
		b=b+3;
		c=c+0;
	}
	else if (u==v)
	{
		c=c+1;
		b=b+1;
	}
	else if (u>v)
	{
		b=b+3;
		c=c+0;
	}
	else if (u==3 && v==1)
	{
		b=b+0;
		c=c+3;
	}
	else
	{
		b=b+0;
		c=c+3;
	}
	printf ("%d %d %d",a,b,c);

}
