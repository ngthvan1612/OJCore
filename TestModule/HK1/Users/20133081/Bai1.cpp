#include<stdio.h>

void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tuti(int x,int y,int z,int t,int u,int v);
void xuat(int a,int b,int c);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a=tuti(x,y,z,t,u,v);
	int b=tuti(x,y,z,t,u,v);
	int c=tuti(x,y,z,t,u,v);
	xuat(a,b,c);
}

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tuti(int x,int y,int z,int t,int u,int v)
{
	int a=0;int b=0;int c=0;
	if ((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1)) a+=3;
	else 
		{
		if (x==y) 
			{
				a+=1;
				b+=1;
			}
		else {b+=3;a+=0}
		}
	if ((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1)) a+=3;
	else 
		{
		if (x==y) 
			{
				a+=1;
				c+=1;
			}
		else c+=3;
		}
	if ((u==1 && v==3) || (u==3 && v==2) || (u==2 && v==1)) b+=3;
	else 
		{
		if (x==y) 
			{
				b+=1;
				c+=1;
			}
		else c+=3;
		}
	return a,b,c;
}
void xuat(int a,int b,int c)
{
	printf("%d%d%d",a,b,c);
}