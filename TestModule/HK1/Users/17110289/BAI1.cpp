#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void Bai1(int x, int y, int z, int t, int u, int v);

int main()
{
	int x, y, z, t, u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	Bai1(x,y,z,t,u,v);
	return 0;
}
void Bai1(int x, int y, int z, int t, int u, int v)
{
	int a = 0, b = 0, c = 0;
	if(x == 1)
	{
		if(y == 3)
		{
			a += 3;
			b += 0;
		}
		else if(y == 1)
		{
			a += 1;
			b += 1;
		}
		else
		{
			a += 0;
			b += 3;
		}
	}
	else if(x == 2)
	{
		if(y == 3)
		{
			a += 0;
			b += 3;
		}
		else if(y == 1)
		{
			a += 3;
			b += 0;
		}
		else
		{
			a += 1;
			b += 1;
		}
	}
	else
	{
		if(y == 3)
		{
			a += 1;
			b += 1;
		}
		else if(y == 1)
		{
			a += 0;
			b += 3;
		}
		else
		{
			a += 3;
			b += 0;
		}
	}
	if(z == 1)
	{
		if(t == 3)
		{
			a += 3;
			c += 0;
		}
		else if(t == 1)
		{
			a += 1;
			c += 1;
		}
		else
		{
			a += 0;
			c += 3;
		}
	}
	else if(z == 2)
	{
		if(t == 3)
		{
			a += 0;
			c += 3;
		}
		else if(t == 1)
		{
			a += 3;
			c += 0;
		}
		else
		{
			a += 1;
			c += 1;
		}
	}
	else
	{
		if(t == 3)
		{
			a += 1;
			c += 1;
		}
		else if(t == 1)
		{
			a += 0;
			c += 3;
		}
		else
		{
			a += 3;
			c += 0;
		}
	}
	if(u == 1)
	{
		if(v == 3)
		{
			b += 3;
			c += 0;
		}
		else if(v == 1)
		{
			b += 1;
			c += 1;
		}
		else
		{
			b += 0;
			c += 3;
		}
	}
	else if(u == 2)
	{
		if(v == 3)
		{
			b += 0;
			c += 3;
		}
		else if(v == 1)
		{
			b += 3;
			c += 0;
		}
		else
		{
			b += 1;
			c += 1;
		}
	}
	else
	{
		if(v == 3)
		{
			b += 1;
			c += 1;
		}
		else if(v == 1)
		{
			b += 0;
			c += 3;
		}
		else
		{
			b += 3;
			c += 0;
		}
	}
	printf("%d %d %d", a, b, c);
}