#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void diem(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,u,t,z,v,a,b,c;
	nhap(x,y,z,t,u,v);
	diem(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void diem(int x,int y,int z,int t,int u,int v)
{
	int a=0,b=0,c=0;
	//a b
	if(x==1&&y==1||x==2&&y==2||x==3&&y==3)
	{
		a=a+1;
		b=b+1;
	}
	 else if(x==1&&y==3||x==2&&y==1||x==3&&y==2)
	{
		a=a+3;
	}
	else
	{
		b=b+3;
	}
	// a c
	if(z==1&&t==1||z==2&&t==2||z==3&&t==3)
	{
		a=a+1;
		c=c+1;
	}
	else if(z==1&&t==3||z==2&&t==1||z==3&&t==2)
	{
		a=a+3;
	}
	else
	{
		c=c+3;
	}
	// b c
	if(u==1&&v==1||u==2&&v==2||u==3&&v==3)
	{
		b=b+1;
		c=c+1;
	}
	else if(u==1&&v==3||u==2&&v==1||u==3&&v==2)
	{
		b=b+3;
	}
	else
	{
		c=c+3;
	}
	printf("%d %d %d",a,b,c);
}

