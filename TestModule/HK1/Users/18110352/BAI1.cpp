#include<stdio.h>
int TinhDiem(int x, int y, int &A, int &B);
int TinhDiem2(int z, int t, int &A, int &C);
int TinhDiem3(int u, int v, int &B, int &C);
void main()
{
	int x;
	int y;
	int z;
	int t;
	int u;
	int v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int A = 0;
	int B = 0; 
	int C = 0;
	TinhDiem(x, y, A, B);
	TinhDiem2(z, t, A, C);
	TinhDiem3(u, v, B, C);
	printf("%d %d %d", A, B, C);
}
int TinhDiem3(int u, int v, int &B, int &C)
{
	if (u == v)
	{
		B++;
		C++;
	}

	if (u == 1 && v == 3)
	{
		B = B + 3;
	}

	if (u == 3 && v == 1)
	{
		C = C + 3;
	}

	if (u == 3 && v == 2)
	{
		B = B + 3;
	}

	if (u == 2 && v == 3)
	{
		C = C +3;
	}

	if (u == 2 && v == 1)
	{
		B = B +3;
	}

	if (u == 1 && v == 2)
	{
		C = C + 3;
	}
	return 0;
}

int TinhDiem2(int z, int t, int &A, int &C)
{
	if (z == t)
	{
		A++;
		C++;
	}

	if (z == 1 && t == 3)
	{
		A = A + 3;
	}

	if (z == 3 && t == 1)
	{
		C = C + 3;
	}

	if (z == 3 && t == 2)
	{
		A = A + 3;
	}

	if (z == 2 && t == 3)
	{
		C = C +3;
	}

	if (z == 2 && t == 1)
	{
		A = A +3;
	}

	if (z == 1 && t == 2)
	{
		C = C + 3;
	}
	return 0;
}

int TinhDiem(int x, int y, int &A, int &B)
{
	if (x == y)
	{
		A++;
		B++;
	}

	if (x == 1 && y == 3)
	{
		A = A + 3;
	}

	if (x == 3 && y == 1)
	{
		B = B + 3;
	}

	if (x == 3 && y == 2)
	{
		A = A + 3;
	}

	if (x == 2 && y == 3)
	{
		B = B +3;
	}

	if (x == 2 && y == 1)
	{
		A = A +3;
	}

	if (x == 1 && y == 2)
	{
		B = B + 3;
	}
	return 0;
}