#include <stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void tinhdiem(int &a, int &b, int x, int y);
void xuat(int a, int b, int c);

void main()
{
	int x, y, z, t, u, v;
	int a, b, c;
	a = b = c = 0;
	nhap(x, y, z, t, u, v);
	tinhdiem(a, b, x, y);
	tinhdiem(a, c, z, t);
	tinhdiem(b, c, u, v);
	xuat(a, b, c);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void tinhdiem(int &a, int &b, int x, int y)
{
	if (x - y == 1 || x - y == -2)
		a = a + 3;
	else if (x - y == -1 || x - y == 2)
		b = b + 3;
	else if (x == y)
	{
		++a;
		++b;
	}
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d", a, b, c);
}