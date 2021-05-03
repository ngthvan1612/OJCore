#include<stdio.h>

void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int ss(int m,int n);
void check(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
void xuat(int a,int b,int c);

void main()
{
	int x,y,z,t,u,v,a,b,c;
	nhap(x,y,z,t,u,v);
	check(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int ss(int m,int n)
{
	if (m==n)
		return 1;
	if (((m==1)&&(n==2))||((m==2)&&(n==3))||((m==3)&&(n==1)))
		return 0;
	if (((m==2)&&(n==1))||((m==3)&&(n==2))||((m==1)&&(n==3)))
		return 3;
}
void check(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	a=0;b=0;c=0;
	if (ss(x,y)==1)
	{	a=a+1;
		b=b+1;}
	if (ss(x,y)==0)
		b=b+3;
	if (ss(x,y)==3)
		a=a+3;
	if (ss(z,t)==1)
	{	a=a+1;
		c=c+1;}
	if (ss(z,t)==0)
		c=c+3;
	if (ss(z,t)==3)
		a=a+3;
	if (ss(u,v)==1)
	{	b=b+1;
		c=c+1;}
	if (ss(u,v)==0)
		c=c+3;
	if (ss(u,v)==3)
		b=b+3;

}
void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}