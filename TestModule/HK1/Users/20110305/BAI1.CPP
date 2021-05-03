#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuly(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuly(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuly(int x,int y,int z,int t,int u,int v)
{
	int dema=0;
	int demb=0;
	int demc=0;
    
	if(x==1&&y==3)
	{
		dema+=3;
	}
	else if(x>y)
	{
		dema+=3;
	}
	else if(x==y)
	{
		dema++;
		demb++;
	}
	else if(x<y)
	demb+=3;
    	if(z==1&&t==3)
	{
		dema+=3;
	}
	else if(z>t)
	{
		dema+=3;
	}
	else if(z==t)
	{
		dema++;
		demc++;
	}
	else if(z<t)
	demc+=3;
	if(u==1&&v==3)
	{
		demb+=3;
	}
	else if(u>v)
	{
		demb+=3;
	}
	else if(u==v)
	{
		demb++;
		demc++;
	}
	else if(u<v)
	demb+=3;
printf("%d %d %d",dema,demb,demc);
}
