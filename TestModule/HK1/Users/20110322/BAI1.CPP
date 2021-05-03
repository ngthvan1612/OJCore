#include <stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int keobuabao(int a, int b);
void xuli(int &A, int &B, int &C, int x, int y, int z, int t, int u, int v);
void xuat(int A, int B, int C);

void main()
{
	int x,y,z,t,u,v;
	int A, B, C;
	nhap(x, y, z, t, u, v);
	xuli(A, B, C, x, y, z, t, u, v);
	xuat(A, B, C);
}

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}

int keobuabao(int a, int b)
{
	if ((a == 1 && b == 3) || (a == 3 && b==2) || (a == 2 && b == 1))
		return 1;
	else if ((a == 3 && b == 1) || (a == 2 && b == 3) || (a == 1 && b == 2))
		return -1;
	else 
		return 0;
}

void xuli(int &A, int &B, int &C, int x, int y, int z, int t, int u, int v)
{
	A = B = C = 0;
	{
		if (keobuabao(x, y) == -1)
			B += 3;
		else if (keobuabao(x, y) == 1)
			A += 3;
		else 
		{
			A++;
			B++;
		}
	}
	{
		if (keobuabao(z, t) == -1)
			C += 3;	
		else if (keobuabao(z, t) == 1)
			A += 3;
		else
		{
			A++;
			C++;
		}
	}
	{
		if (keobuabao(u, v) == -1)
			C += 3;
		else if (keobuabao(u, v) == 1)
			B += 3;
		else
		{
			B++;
			C++;
		}
	}
}

void xuat(int A, int B, int C)
{
	printf("%d %d %d ", A, B, C);
}