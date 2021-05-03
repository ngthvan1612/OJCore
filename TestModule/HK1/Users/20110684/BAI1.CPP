#include<stdio.h>
 void   nhap(int  &x,int   &y,int &z,int &t,int &u,int &v)
{
	 scanf("%d%d%d%d%d%d",&x  ,&y ,  &z ,&t ,&u ,&v);
}
void ketqua(int  m,int n,int &d,int &t)
{
	if(m==n)
	{
		d=d+1;
		t=t+1;
	}
	else if(m>n || (m==1 && n==3) )
	{
		d+=3;
		t=t+0;
	}
	else 
	{
		d=d+0;
		t+=3;
	}
}

void tinhdiem(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	a=0;
	b=0;
	c=0;
	ketqua(x,y,a,b);
	ketqua(z,t,a,c);
	ketqua(u,v,b,c);
}
void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}
void main()
{
	int x,y,z,t,u,v;
	int  a,b,c;
	nhap(x,y,z,t,u,v);
	tinhdiem(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}
