#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int tinhDiem1(int x, int y);
int tinhDiem2(int x, int y);
void tongDiem(int x, int y, int z, int t, int u, int v);

void main()
{
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u, v);
	tinhDiem1(x, y);
	tinhDiem2(x, y);
	tinhDiem1(z ,t);
	tinhDiem2(z, t);
	tinhDiem1(u, v);
	tinhDiem2(u, v);
	tongDiem(x, y ,z, t, u, v);
}

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}

int tinhDiem1(int x, int y)
{
	int a;
	int b;
	if (x == 1 && y == 3)
		{
			int a = 3;
			int b = 0;
		}

	if (x == 2 && y == 3)
		{	
			int a = 0;
			int b = 3;
		}
	if (x == 3 && y == 3)
		{
			int a = 1;
			int b = 1;
		}
	if (x == 1 && y == 2)
		{
			int a = 0;
			int b = 3;
		}
	if (x == 2 && y == 2)
		{
			int a = 1;
			int b = 1;
		}
	if (x == 3 && y == 2)
		{
			int a = 3;
			int b = 0;
		}
	if (x == 1 && y == 1)
		{
			int a = 0;
			int b = 0;
		}
	if (x == 2 && y == 1)
		{
			int a = 3;
			int b = 0;
		}
	if (x == 3 && y == 1)
		{
			int a = 0;
			int b = 3;
		}
	return a;
}

int tinhDiem2(int x, int y)
{
	int a;
	int b;
	if (x == 1 && y == 3)
		{
			int a = 3;
			int b = 0;
		}

	if (x == 2 && y == 3)
		{	
			int a = 0;
			int b = 3;
		}
	if (x == 3 && y == 3)
		{
			int a = 1;
			int b = 1;
		}
	if (x == 1 && y == 2)
		{
			int a = 0;
			int b = 3;
		}
	if (x == 2 && y == 2)
		{
			int a = 1;
			int b = 1;
		}
	if (x == 3 && y == 2)
		{
			int a = 3;
			int b = 0;
		}
	if (x == 1 && y == 1)
		{
			int a = 0;
			int b = 0;
		}
	if (x == 2 && y == 1)
		{
			int a = 3;
			int b = 0;
		}
	if (x == 3 && y == 1)
		{
			int a = 0;
			int b = 3;
		}
	return b;
}

void tongDiem(int x, int y, int z, int t, int u, int v)
{
	int a = tinhDiem1(x, y) + tinhDiem1(z, t);
	int b = tinhDiem2(x, y) + tinhDiem1(z, t);
	int c = tinhDiem2(z, t) + tinhDiem2(u, v);
	printf("%d %d %d", a, b, c);
}
