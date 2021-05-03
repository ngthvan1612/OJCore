// oan tu xi
#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}

void xuly(int x, int y, int z, int t, int u, int v)
{
	int a = 0;
	int b = 0;
	int c = 0;
	// round 1
	if(x - y == 1 || x - y == -2)
	{
		a = a + 3;
		b = b + 0;
	}
	else if(x - y == 0)
	{
		a = a + 1;
		b = b + 1;
	}
	else
	{
		a = a + 0;
		b = b + 3;
	}
	// round 2
	if(z - t == 1 || z - t == -2)
	{
		a = a + 3;
		c = c + 0;
	}
	else if(z - t == 0)
	{
		a = a + 1;
		c = c + 1;
	}
	else
	{
		a = a + 0;
		c = c + 3;
	}
	//round 3
	if(u - v == 1 || u - v == -2)
	{
		b = b + 3;
		c = c + 0;
	}
	else if(u - v == 0)
	{
		b = b + 1;
		c = c + 1;
	}
	else
	{
		b = b + 0;
		c = c + 3;
	}
	printf("%d %d %d", a, b, c);
}

void main()
{
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u, v);
	xuly(x, y, z, t, u, v);
}