#include<stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
void kiemtra(int a, int b, int c, int x, int y, int z, int t, int u, int v);
void main()
{
 int x,y,z,t,u,v,a,b,c;
 nhap(x,y,z,t,u,v);
 kiemtra(a,b,c,x,y,z,t,u,v);
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
		   scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void kiemtra(int a, int b, int c, int x, int y, int z, int t, int u, int v)
{
	a=0;
	b=0;
	c=0;
	{
		if (x>=y)
{
	if(x==y)
	{
	 a=a+1;
     b=b+1;
	 
	}
	 else if (((x==3) && (y==1)) || ((x==1) && (y==3)))
	 {
		 a=a+0;
		 b=b+3;
	 }
	 else 
	 {
		 a=a+3;
		  b=b+0;
	 }
}
 
else
{
a=a+0;
b=b+3;
}
	}
{
	if (z>=t)
{
	if(z==t)
	{
	 a=a+1;
     c=c+1;
	 
	}
	 else if (((z==3) && (t==1)) || ((x==1) && (y==3)))
	 {
		 a=a+0;
		 c=c+3;
	 }
	 else 
	 {
		 a=a+3;
		  c=c+0;
	 }
}
 
else 
{
a=a+0;
c=c+3;
}
}

{
	if (u>=v)
{
	if(u==v)
	{
	 b=b+1;
     c=c+1;
	 
	}
	 else if (((u==3) && (v==1)) || ((x==1) && (y==3)))
	 {
		 b=b+0;
		 c=c+3;
	 }
	 else 
	 {
		 b=b+3;
		  c=c+0;
	 }
}
 
else 
{
b=b+0;
c=c+3;
}
}
printf("%d %d %d", a, b, c);
}
 
	 
