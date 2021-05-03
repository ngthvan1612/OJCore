#include<stdio.h>
int ktra(int a, int b);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int a = 0;
	int b = 0;
	int c = 0;
	a = a + ktra(x,y);
	a = a + ktra(z,t);
	b = b + ktra(y,x);
	b = b + ktra(u,v);
	c = c + ktra(t,z);
	c = c + ktra(v,u);
	printf("%d %d %d", a, b, c);
}
int ktra(int a, int b)
{
	if (a == b)
	{
		return 1;
	}
	else if ( a == 1 && b ==3)
	{
		return 3;
	}
	else if ( a == 2 && b == 1)
	{
		return 3;
	}
	else if ( a == 3 && b == 2)
	{
		return 3;
	}
	else if ( a == 3 && b == 1)
	{
		return 0;
	}
	else if ( a == 1 && b == 2)
	{
		return 0;
	}
	else if ( a == 2 && b == 3)
	{
		return 0;
	}
	else
		return 0;
}