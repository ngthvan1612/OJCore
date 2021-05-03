#include<stdio.h>

int choi(int a,int b)
{
	int x=0,y=0,z=0;
	if( a<b && b<3||1<a && a<b && b<4||a>2 && 2>b)
	{
		y = y + 3;
	return y;
	}
	else if(a<2 && 2<b||3>a && a>b||a>b && b>1)
	{
		x = x + 3;
		return x;
	}
	else if (a==b)
	{
		x = x + 1;
		y= y + 1;
	return x;
	return y;
	}
}
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	choi(x,y);
	choi(z,t);
	choi(u,v);
	printf("%d %d %d",x + z,y + u,t + v);
}