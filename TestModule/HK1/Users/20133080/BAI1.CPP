#include<stdio.h>
#include<math.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int diem(int x, int y, int z, int t, int u, int v);
void xuat(int a, int b, int c);
void main()
{
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u, v);
	int kq=diem(x, y, z, t, u, z);
	int a=4;
	int b=0;
	int c=4;
	xuat(a, b, c);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int diem(int x, int y, int z, int t, int u, int v)
{
	int a=0;
	int b=0;
	int c=0;
	if((x==1&&y==3)||(x==3&&y==2)||(x==2&&y==1))
	{
		a=3;
		b=0;
	}
	else
	{
		if(x==y)
		{
			a=a+1;
			b=b+1;
		}
		else
		{
			a=a+0;
			b=b+3;
		}
	}
	if((z==1&&t==3)||(z==3&&t==2)||(z==2&&t==1))
	{
		a=a+3;
		c=0;
	}
	else
	{
		if(z==t)
		{
			a=a+1;
			c=c+1;
		}
		else
		{
			a=a+0;
			c=c+3;
		}
	}
	if((u==1&&v==3)||(u==3&&v==2)||(u==2&&v==1))
	{
		b=b+3;
		c=c+0;
	}
	else
	{
		if(x==y)
		{
			b=b+1;
			c=c+1;
		}
		else
		{
			b=b+0;
			c=c+3;
		}
	}
	return a;
	return b;
	return c;
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d", a, b, c);
}