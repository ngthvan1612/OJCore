#include <stdio.h>

void thiDau2(int z, int t, int &a, int &c);
void thiDau3(int u, int v, int &b, int &c);
void thiDau1(int x, int y, int &a, int &b);

void main()
{
	int x, y, z, t, u, v;
	int a, b, c;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	thiDau1(x, y, a, b);
	thiDau2(z, t, a, c);
	thiDau3(u, v, b, c);
	printf("%d %d %d", a, b, c);
}


void thiDau1(int x, int y, int &a, int &b)
{
	a = 0;
	b = 0;
	if(x == 1 && y == 3 || x == 3 && y == 2 || x == 2 && y == 1)
	{
		a = a + 3;
	}
	else if(x == y)
	{
		a = a + 1;
		b = b + 1;
	}
	else
	{
		b = b + 3;
	}
}


void thiDau2(int z, int t, int &a, int &c)
{
	c = 0;
	if(z == 1 && t == 3 || z == 3 && t == 2 || z == 2 && t == 1)
	{
		a = a + 3;
	}
	else if(z == t)
	{
		a = a + 1;
		c = c + 1;
	}
	else
	{
		c = c + 3;
	}
}

void thiDau3(int u, int v, int &b, int &c)
{
	if(u == 1 && v == 3 || u == 3 && v == 2 || u == 2 && v == 1)
	{
		b = b + 3;
	}
	else if(u == v)
	{
		b = b + 1;
		c = c + 1;
	}
	else
	{
		c = c + 3;
	}
}