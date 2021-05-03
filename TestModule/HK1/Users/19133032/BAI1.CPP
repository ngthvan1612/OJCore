#include <stdio.h>
int keoBuaBaoA (int x, int y);
int keoBuaBaoB (int x, int y);
void xuatKetQua (int x, int y, int z, int t, int u, int v);
void main()
{
	int x, y, z, t, u, v;
	scanf("%d %d %d %d %d %d", &x, &y, &z, &t, &u, &v);
	xuatKetQua (x, y, z, t, u, v);
}

int keoBuaBaoA (int x, int y)
{
	int a, b;
	
	if (x == 1)
	{
		if (y == 1)
		{
			a = 1;
			b = 1;
		}
		else
			if (y == 2)
			{
				a = 0;
				b = 3;
			}
			else
			{
				a = 3;
				b = 0;
			}
	}
	if (x == 2)
	{
		if (y == 1)
		{
			a = 3;
			b = 0;
		}
		else 
			if (y == 2)
			{
				a = 1;
				b = 1;
			}
			else
			{
				a = 0;
				b = 3;
			}
	}
	if (x == 3)
	{
		if (y == 1)
		{
			a = 0;
			b = 3;
		}
		else
			if (y == 2)
			{
				a = 3;
				b = 0;
			}
			else
			{
				a = 1;
				b = 1;
			}
	}
return a;	
}

int keoBuaBaoB (int x, int y)
{
	int a, b;
	
	if (x == 1)
	{
		if (y == 1)
		{
			a = 1;
			b = 1;
		}
		else
			if (y == 2)
			{
				a = 0;
				b = 3;
			}
			else
			{
				a = 3;
				b = 0;
			}
	}
	if (x == 2)
	{
		if (y == 1)
		{
			a = 3;
			b = 0;
		}
		else 
			if (y == 2)
			{
				a = 1;
				b = 1;
			}
			else
			{
				a = 0;
				b = 3;
			}
	}
	if (x == 3)
	{
		if (y == 1)
		{
			a = 0;
			b = 3;
		}
		else
			if (y == 2)
			{
				a = 3;
				b = 0;
			}
			else
			{
				a = 1;
				b = 1;
			}
	}
return b;	
}

void xuatKetQua (int x, int y, int z, int t, int u, int v)
{
	int a, b , c;
	int a1 = keoBuaBaoA(x, y);
	int a2 = keoBuaBaoA(z, t);
	int b1 = keoBuaBaoB(x, y);
	int b2 = keoBuaBaoA(u, v);
	int c1 = keoBuaBaoB(z, t);
	int c2 = keoBuaBaoB(u, v);
	a = a1 + a2;
	b = b1 + b2;
	c = c1 + c2;
	printf ("%d %d %d", a, b, c);
}