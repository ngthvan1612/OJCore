#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int x,int y, int z,int t, int u, int v);
void main()
{
  int x,y,z,t,u,v;
  nhap(x,y,z,t,u,v);
  xuat(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
  scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int x,int y, int z,int t, int u, int v)
{
  int a=0;
  int b=0;
  int c=0;
    if(x>y)
	  a=a+3;
    else if(x==y)
	{
	  a=a+1;
	  b=b+1;
	}
    else
	  b=b+3;
    if(z<t)
	  c=c+3;
	else
		a=a+3;
	if(z==t)
	{
	  c=c+1;
	  a=a+1;
	} 
	if(u<v)
	  c=c+3;
	else if(u==v)
	{
	  c=c+1;
	  b=b+1;
	}
	else
		b=b+3;
  printf("%d %d %d ",a,b,c);
}