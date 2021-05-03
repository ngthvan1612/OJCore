#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int diemso(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
void xuat(int a,int b,int c);
int main()
{
	int x,y,z,t,u,v;
	int a=0;
	int b=0;
	int c=0;
	nhap(x,y,z,t,u,v);
	int kq=diemso(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
	return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}

int diemso(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	a=0;
	b=0;
	c=0;
	{
	if(((x==1)&&(y==3))||((x==3)&&(y==2))||((x==2)&&(y==1)))
		a=a+3;
	if(x==y)
		{
		a=a+1;
		b=b+1;
		}
	else
		b=b+3;
	}
	{
	if(((z==1)&&(t==3))||((z==3)&&(t==2))||((z==2)&&(t==1)))
		a=a+3;
	if(z==t)
		{
		a=a+1;
		c=c+1;
		}
	else
		c=c+3;
	}
	{
	if(((u==1)&&(v==3))||((u==3)&&(v==2))||((u==2)&&(v==1)))
		b=b+3;
	if(x==y)
		{
		b=b+1;
		c=c+1;
		}
	else
		c=c+3;
	}
	return a,b,c;
}
void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}
