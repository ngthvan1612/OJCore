#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinh1(int x,int y,int z,int t);
int tinh2(int x,int y,int u,int v);
int tinh3(int z,int t,int u,int v);
void xuat(int kqa,int kqb, int kqc);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kqa=tinh1(x,y,z,t);
	int kqb=tinh2(x,y,u,v);
	int kqc=tinh3(z,t,u,v);
	xuat(kqa,kqb,kqc);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinh1(int x,int y,int z,int t)
{
	int a=0;
	if(x-y==-2)
		a=a+3;
	if(z-t==-2)
		a=a+3;
	if(x-y==0)
		a=a+1;
	if(z-t==0)
		a=a+1;
	return a;
}
int tinh2(int x,int y,int u,int v)
{
	int b=0;
	if(x-y==2)
		b=b+3;
		if(u-v==-2)
		b=b+3;
	if(x-y==0)
		b=b+1;
	if(u-v==0)
		b=b+1;
	return b;
}
int tinh3(int z,int t,int u,int v)
{
	int c=0;
	if(z-t==2)
		c=c+3;
	if(u-v==2)
		c=c+3;
	if(u-v==0)
		c=c+1;
	if(z-t==0)
		c=c+1;
	return c;
}
void xuat(int kqa,int kqb,int kqc)
{
	printf("%d %d %d",kqa,kqb,kqc);
}



