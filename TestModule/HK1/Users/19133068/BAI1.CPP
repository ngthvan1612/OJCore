#include<stdio.h>
void xuli(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int a,int b,int c);
int sosanh(int x,int y);
void main()
{
	int x,y,z,t,u,v,a,b,c;
	nhap(x,y,z,t,u,v);
	xuli(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}
void xuli(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	a=0;b=0;c=0;
	switch (sosanh(x,y))
{	case 3: a=a+sosanh(x,y);break;
	case 0:	b=b+3;break;
	case 1:
		{
			a=a+sosanh(x,y);
			b=b+sosanh(x,y);
		}break;
	
}
	switch (sosanh(z,t))
{	case 3: a=a+sosanh(z,t);break;
	case 0:	c=c+3;break;
	case 1:	
		{
			a=a+sosanh(z,t);
			c=c+sosanh(z,t);
		}break;
	
}

switch (sosanh(u,v))
{	case 3: b=b+sosanh(u,v);break;
	case 0:	c=c+3;break;
	case 1:
		{
			b=b+sosanh(u,v);
			c=c+sosanh(u,v);
		}break;
	
}
}
int sosanh(int x,int y)
{
	if((x==1&&y==3)||(x==3&&y==2)||(x==2&&y==1))
		return 3;//x thang
	else if(x==y)
		return 1;
		else return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}