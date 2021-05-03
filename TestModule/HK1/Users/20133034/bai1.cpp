#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int kiemtra(int &a,int &b,int &c,int x,int y,int z,int t,int u,int v);
void xuat(int a,int b,int c);
void main()
{
	int a,b,c,x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int s=kiemtra(a,b,c,x,y,z,t,u,v);
	xuat(a,b,c);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int kiemtra(int &a,int &b,int &c,int x,int y,int z,int t,int u,int v)
{
	a=0;
	b=0;
	c=0;
	if(x==1&&y==3||x==2&&y==1||x==3&&y==2)
		a=a+3;
	else
		if(x==3&&y==1||x==1&&y==2||x==2&&y==3)
			b=b+3;
	if(z==1&&t==3||z==2&&t==1||z==3&&t==2)
		            a=a+3;
	else
		if(z==3&&t==1||z==1&&t==2||z==2&&t==3)
			      c=c+3;
	if(u==1&&v==3||u==2&&v==1||u==3&&v==2)
	            b=b+3;
	else
	 	if(u==3&&v==1||u==1&&v==2||u==2&&v==3)
			     c=c+3;
	if(x==y)
	{
		a++;
		b++;
	}
	if(z==t)
	{
		a++;
		c++;
	}
	if(u==v)
	{
		b++;
		c++;
	}
	 return 0;
}
void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}