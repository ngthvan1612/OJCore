#include<stdio.h>
#include<math.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int check(int x,int y);
int diemso(int x,int y, int z ,int t,int u,int v,int &a,int &b,int &c);
void xuat(int a,int b,int c);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=diemso(x,y,z,t,u,v.a,b,c);
	xuat(kq,a,b,c);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int kq,int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}
int check(int x,int y)
{
	if(x==1 && y ==3 || x==3 && y =2 || x==2 && y==1 )
		return 1;
		else
			if(x==y)
				return 2;
			else
				return 3;
}
int diemso(int x,int y, int z ,int t,int u,int v,int &a,int &b,int &c)
{
	int a=0;
	int b=0;
	int c=0;
	if(check(x,y)==1)	
		a+=3;
	else
	{
		if(check(x,y)==2)
		{
			a+=1;
			b+=1;
		}
		else
		b+=3
	}
	if(check(z,t)==1)
		a+=3;
	else
	{
		if(check(z,t)==2)
		{
			a+=1;
			c+=1;
		}
		else
			c+=3;
	}
	if(check(u,v)==1)
		b+=3;
	else
		if(check(u,v)==2)
		{
			b+=1;
			c+=1;
		}
		else
			c+=3;
	return a;
	return b;
	return c;
}

