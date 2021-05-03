#include<stdio.h>
void input(int &x, int &y, int &z, int &t, int &u, int &v);
void tinhtoan(int x, int y, int &a, int &b);
void xuat(int a, int b, int c);
void main()
{
	int x, y, z, t, u, v;
	int a=0, b=0, c=0;
	input(x, y, z, t, u, v);
	tinhtoan(x, y, a, b);
	tinhtoan(z, t, a, c);
	tinhtoan(u, v, b, c);
	xuat(a,b,c);
}
void input(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void tinhtoan(int x, int y, int &a, int &b)
{
	if ((x == 1 && y == 3) || (x == 3 && y == 2) || (x == 2 && y ==1))
		a += 3;
	else
		if ((x == 1 && y == 2) || (x == 2 && y ==3)|| (x == 3 && y == 1))
			b += 3;
		else
			if (x == y)
			{
				a++;
				b++;
			}
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d", a, b, c);
}
