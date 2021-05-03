#include<stdio.h>

void tinhDiem(int &a, int &b, int x, int y)
{
	if (x == y)
	{
		a = a + 1;
		b = b + 1;
		return;
	}
	if ((x == 1 && y == 3) || (x == 3 && y == 2) || (x == 2 && y == 1))
	{
		a = a + 3;
		return;
	}
	b = b + 3;
}

void main()
{
	int x, y, z, t, u, v;
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	tinhDiem(a, b, x, y);
	tinhDiem(a, c, z, t);
	tinhDiem(b, c, u, v);
	printf("%d %d %d", a, b, c);
}
