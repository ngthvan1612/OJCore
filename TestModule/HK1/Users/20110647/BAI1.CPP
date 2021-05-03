#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuly(int x,int y,int z,int t,int u,int v)
{
	int A=0,B=0,C=0,a=0,b=0,c=0,d=0,e=0,f=0;
	{
	if(x==1 && y==3)
		a=a+3;
	if(x==1  && y==2)
		b=b+3;
	if(x==2 && y==1)
		a=a+3;
	if(x==2 && y==3)
		b=b+3;
	if(x==3 && y==1)
		b=b+3;
	if(x==3 && y==2)
		a=a+3;
	if(x==y)
	{
		a++;
		b++;
	}
	}
	{
		
		if(z==1 && t==3)
		c=c+3;
	if(z==1  && t==2)
		d=d+3;
	if(z==2 && t==1)
		c=c+3;
	if(z==2 && t==3)
		d=d+3;
	if(z==3 && t==1)
		d=d+3;
	if(z==3 && t==2)
		c=c+3;
	if(z==t)
	{
		c++;
		d++;
	}
	}
		
	{
		if(u==1 && v==3)
		e=e+3;
	if(u==1  && v==2)
		f=f+3;
	if(u==2 && v==1)
		e=e+3;
	if(u==2 && v==3)
		f=f+3;
	if(u==3 && v==1)
		f=f+3;
	if(u==3 && v==2)
		e=e+3;
	if(u==v)
	{
		e++;
		f++;
	}
	}
	A=a+c;
	B=b+e;
	C=d+f;
		printf("%d %d %d",A,B,C);
}
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuly(x,y,z,t,u,v);
}







