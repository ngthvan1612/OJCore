#include<stdio.h>
void tinhdiem(int &a,int &b,int x,int y);
void main()
{
	int x,y,z,t,u,v;
	int a=0,b=0,c=0;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	tinhdiem(a,b,x,y);
	tinhdiem(a,c,z,t);
	tinhdiem(b,c,u,v);
	printf("%d %d %d",a,b,c);	
}
void tinhdiem(int &a,int &b,int x,int y)
{
	if(x==1 && y==3)
			a=a+3;
	else if(x==3 && y==1)
				b=b+3;
	else if(x==3 && y==2)
				a=a+3;
	else if(x==2 && y==3)
				b=b+3;
	else if(x==2 && y==1)
				a=a+3;
	else if(x==1 && y==2)
				b=b+3;
	else
		{
			a=a+1;
			b=b+1;
		}
}

