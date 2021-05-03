#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuly(int x,int y,int z,int t,int u,int v);
int main()
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
	int a=0;
	int b=0;
	int c=0;
	if(x==1&&y==3)
		a=a+3;
	if(x==3&&y==2)
		a=a+3;
	if(x==2&&y==1)
		a=a+3;
	if(y==1&&x==3)
		b=b+3;
	if(y==3&&x==2)
		b=b+3;
	if(y==2&&x==1)
		b=b+3;
	if(z==1&&t==3)
		a=a+3;
	if(z==3&&t==2)
		a=a+3;
	if(z==2&&t==1)
		a=a+3;
	if(t==1&&z==3)
		c=c+3;
	if(t==3&&z==2)
		c=c+3;
	if(t==2&&z==1)
		c=c+3;
	if(u==1&&v==3)
		b=b+3;
	if(u==3&&v==2)
		b=b+3;
	if(u==2&&v==1)
		b=b+3;
	if(v==1&&u==3)
		c=c+3;
	if(v==3&&u==2)
		c=c+3;
	if(v==2&&u==1)
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
	printf("%d %d %d",a,b,c);
	

}
