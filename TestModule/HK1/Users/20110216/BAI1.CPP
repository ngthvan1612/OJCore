#include<stdio.h>
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int a1,a2;
	int b1,b3;
	int c2,c3;
	int dem1=0;
	int dem2=0;
	int dem3=0;
	if ((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))	
	{
		a1 = 3;
		a2 = 0;
	}
	else if (x == y)
	{
		a1 = 1;
		a2 = 1;
	}
	else 
	{
		a2 = 3;
		a1 = 0;
	}
	if((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1))		
	{
		b1 = 3;
		b3 = 0;
	}
	else if( z == t)
	{
		b1 = 1;
		b3 = 1;
	}
	else 
	{
		b3 = 3;
		b1 = 0;
	}
	if((u==1 && v==3) || (u==3 && v==2) || (u==2 && v==1))		
	{
		c2 = 3;
		c3 = 0;
	}
	else if(u == v)
	{
		c2 = 1;
		c3 = 1;
	}
	else 
	{
		c3 = 3;
		c2 = 0;
	}
	dem1 = a1+b1;
	dem2 = a2+c2;
	dem3 = b3+c3;
	printf("%d %d %d",dem1,dem2,dem3);
}
