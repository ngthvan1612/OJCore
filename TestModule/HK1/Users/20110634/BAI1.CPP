#include<stdio.h>
int kt( int x, int y)
{
	if (( x==1 && y==3 )||(x==3 && y==2)||(x==2 && y==1))
	{
		return 1;
	}
	else 
		if (( y==1 && x==3 )||(y==3 && x==2)||(y==2 && x==1))
		{
			return 2;
		}
		else 
		{
			return 0;
		}
}
int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int a,b,c;
	int a1,b1,a2,c2,b3,c3;
	if(kt (x,y)==1 )
	{
		a1=3;
		b1=0;
	}
	else
		if ( kt(x,y)==2)
		{
			a1=0;
			b1=3;
		}
		else
		{
			a1=1;
			b1=1;
		}

	if(kt (z,t)==1 )
	{
		a2=3;
		c2=0;
	}
	else
		if ( kt(z,t)==2)
		{
			a2=0;
			c2=3;
		}
		else
		{
			a2=1;
			c2=1;
		}
	
	if(kt (u,v)==1 )
	{
		b3=3;
		c3=0;
	}
	else
		if ( kt(u,v)==2)
		{
			b3=0;
			c3=3;
		}
		else
		{
			b3=1;
			c3=1;
		}
	printf("%d %d %d",a1+a2,b1+b3,c2+c3);
	return 0;
}