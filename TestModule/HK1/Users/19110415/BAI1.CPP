#include<stdio.h>

void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int m,n,o;
	if(x==1&&y==3)
	{
		m=3;
	}
	else if(x==1&&y==1)
	{
		m=1;
	}
	else if(x==1&&y==2)
	{
		m=0;
	}
	if(x==2&&y==1)
	{
		m=3;
	}
	else if(x==2&&y==2)
	{
		m=1;
	}
	else if(x==2&&y==3)
	{
		m=0;
	}
	if(x==3&&y==1)
	{
		m=0;
	}
	else if(x==3&&y==3)
	{
		m=1;
	}
	else if(x==3&&y==2)
	{
		m=3;
	}
	if(z==1&&t==3)
	{
		n=3;
	}
	else if(z==1&&t==1)
	{
		n=1;
	}
	else if(z==1&&t==2)
	{
		n=0;
	}
	if(z==2&&t==1)
	{
		n=3;
	}
	else if(z==2&&t==2)
	{
		n=1;
	}
	else if(z==2&&t==3)
	{
		n=0;
	}
	if(z==3&&t==1)
	{
		n=0;
	}
	else if(z==3&&t==3)
	{
		n=1;
	}
	else if(z==3&&t==2)
	{
		n=3;
	}
	if(u==1&&v==3)
	{
		o=3;
	}
	else if(u==1&&v==1)
	{
		o=1;
	}
	else if(u==1&&v==2)
	{
		o=0;
	}
	if(u==2&&v==1)
	{
		o=3;
	}
	else if(u==2&&v==2)
	{
		o=1;
	}
	else if(u==2&&v==3)
	{
		o=0;
	}
	if(u==3&&v==1)
	{
		o=0;
	}
	else if(u==3&&v==3)
	{
		o=1;
	}
	else if(u==3&&v==2)
	{
		o=3;
	}
	int A=m+n;
	int B=m+o;
	int C=n+o;
	printf("%d\t", A);
	printf("%d\t", B);
	printf("%d\t", C);
}