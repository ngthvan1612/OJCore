#include<stdio.h>
void nhap(int&x,int&y,int&z,int&t,int&u,int&v);
void xuat(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuat(x,y,z,t,u,v);
}
void nhap(int&x,int&y,int&z,int&t,int&u,int&v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int x,int y,int z,int t,int u,int v)
{
	int a=0,b=0,c=0;
	if((x==1 && y==3)||(x==3 && y==2)||(x==2 && y==1))
	
		a=a+3;
	
	if((x==3 && y==1)||(x==2 && y==3)||(x==1 && y==2))
	
		b=b+3;
	
	if(x==y)
	{
		a=a+1;
		b=b+1;
	}
	if((z==1 && t==3)||(z==3 && t==2)||(z==2 && t==1))
	
		a=a+3;
	
	if((z==3 && t==1)||(z==2 && t==3)||(z==1 && t==2))
		c=c+3;
	
	if(z==t)
	{
		a=a+1;
		c=c+1;
	}
	if((u==1 && v==3)||(u==3 && v==2)||(u==2 && v==1))
	
		b=b+3;
	
	if((u==3 && v==1)||(u==2 && v==3)||(u==1 && v==2))
	
		c=c+3;
	
	if(u==v)
	{
		b=b+1;
		c=c+1;
	}
	printf("%d %d %d",a,b,c);
}
	
