#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int diem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c);
void xuat(int a, int b, int c);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a,b,c;
	int kq = diem(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d %d %d %d %d %d", &x, &y, &z, &t, &u, &v);
}
int diem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c)
{
	a = 0;
	b = 0;
	c = 0;
	if(x == y)
	{
		a = a + 1;
		b = b + 1;
	}
	else 
	{
			if(x == 1 && y == 3)
			a = a + 3;
		else if(x == 3 && y == 2)
			a = a + 3;
		else if(x == 2 && y == 1)
			a = a + 3;
		else
			b = b + 3;
	}
	if(z == t)
	{
		a = a + 1;
		c = c + 1;
	}
	else 
	{
		if(z == 1 && t == 3)
			a = a + 3;
		else if(z == 3 && t == 2)
			a = a + 3;
		else if(z == 2 && t == 1)
			a = a + 3;
		else
			c = c + 3;
	}
	if(u == v)
	{
		b = b + 1;
		c = c + 1;
	}
	else 
	{
		if(u == 1 && v == 3)
			b = b + 3;
		else if(u == 3 && v == 2)
			b = b + 3;
		else if(u == 2 && v == 1)
			b = b + 3;
		else
			c = c + 3;
	}
	return 0;
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d ", a, b, c);
}