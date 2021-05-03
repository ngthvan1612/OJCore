#include<stdio.h>
void nhap(int &x,int&y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinh1(int x,int y,int &a,int &b)
{
	if(x==1&&y==2)
	{
		a+=0;
		b+=3;
	}
	else if(x==1&&y==3)
	{
		a+=3;
		b+=0;
	}
	else if(x==2&&y==3)
	{
		a+=0;
		b+=3;
	}
	else if(x==2&&y==1)
	{
		a+=3;
		b+=0;
	}
	else if(x==3&&y==1)
	{
		a+=0;
		b+=3;
	}
	else if(x==3&&y==2)
	{
		a+=3;
		b+=0;
	}
	else if(x==1&&y==1||x==2&&y==2||x==3&&y==3)
	{
		a+=1;
		b+=1;
	}
	return a,b;
}
int tinh2(int z,int t,int &a,int &c)
{
if(z==1&&t==2)
	{
		a+=0;
		c+=3;
	}
	else if(z==1&&t==3)
	{
		a+=3;
		c+=0;
	}
	else if(z==2&&t==3)
	{
		a+=0;
		c+=3;
	}
	else if(z==2&&t==1)
	{
		a+=3;
		c+=0;
	}
	else if(z==3&&t==1)
	{
		a+=0;
		c+=3;
	}
	else if(z==3&&t==2)
	{
		a+=3;
		c+=0;
	}
	else if(z==1&&t==1||z==2&&t==2||z==3&&t==3)
	{
		a+=1;
		c+=1;
	}
	return a,c;
}
int tinh3(int u,int v,int &b,int &c)
{
if(u==1&&v==2)
	{
		b+=0;
		c+=3;
	}
	else if(u==1&&v==3)
	{
		b+=3;
		c+=0;
	}
	else if(u==2&&v==3)
	{
		b+=0;
		c+=3;
	}
	else if(u==2&&v==1)
	{
		b+=3;
		c+=0;
	}
	else if(u==3&&v==1)
	{
		b+=0;
		c+=3;
	}
	else if(u==3&&v==2)
	{
		b+=3;
		c+=0;
	}
	else if(u==1&&v==1||u==2&&v==2||u==3&&v==3)
	{
		b+=1;
		c+=1;
	}return b,c;}
	void xuat(int a,int b,int c)
	{
		printf("%d %d %d",a,b,c);
	}
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
    int a=0,b=0,c=0;
	int kq1=tinh1(x,y,a,b);
	int kq2=tinh2(z,t,a,c);
	int kq3=tinh3(u,v,b,c);
	xuat(a,b,c);
}