#include<stdio.h>
void main()
{
int x,y,z,t,u,v;
int a=0;
int b=0;
int c=0;
scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
if ((x==1&&y==3) || (x==2&&y==1) ||(x==3&&y==2))
	a=a+3;
else
{
	if(x==y)
	{
		a=a+1;
		b=b+1;
	}
	else
		b=b+3;
}
if ((z==1&&t==3) || (z==2&&t==1) ||(z==3&&t==2))
	a=a+3;
else
{
	if(z==t)
	{
		a=a+1;
		c=c+1;
	}
	else
		c=c+3;
}
if ((u==1&&v==3) || (u==2&&v==1) ||(u==3&&v==2))
	b=b+3;
else
{
	if(u==v)
	{
		c=c+1;
		b=b+1;
	}
	else
		c=c+3;
}
printf("%d %d %d",a,b,c);



}