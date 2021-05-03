#include "stdio.h"
#include "iostream"
void nhap(int &n);
void xuat(int x);
int  kt(int a, int b);
void kq(int x, int y, int z, int t ,int u, int v);
void main ()
{
	int x,y,z,t,u,v;
	nhap(x);
	nhap(y);
	nhap(z);
	nhap(t);
	nhap(u);
	nhap(v);
	kq(x,y,z,t,u,v);
	system("pause");

}
void nhap(int &n)
{
	scanf("%d",&n);
}
void xuat(int x)
{
	printf("%d ",x);
}
int  kt(int a, int b)
{	
	if((a==1 && b==3)||(a==3 && b==2)||(a==2 && b==1))
	{
		return 1;
	}
	else if(a==b)
	{
		return 2;
	}
	else return 0;
}
void kq(int x, int y, int z, int t ,int u, int v)
{
	int a=0;
	int b=0;
	int c=0;
	if(kt(x,y)==1)
	{
		a+=3;
	}
	else if(kt(x,y)==0)
	{
		b+=3;
	}
	else 
	{
		a++;
		b++;
	}
	if(kt(z,t)==1)
	{
		a+=3;
	}
	else if(kt(z,t)==0)
	{
		c+=3;
	}
	else 
	{
		a++;
		c++;
	}

	if(kt(u,v)==1)
	{
		b+=3;
	}
	else if(kt(u,v)==0)
	{
		c+=3;
	}
	else 
	{
		c++;
		b++;
	}
	xuat(a);
	xuat(b);
	xuat(c);
}

