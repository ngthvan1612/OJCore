#include<stdio.h>
void nhap(int& x, int& y, int& z, int& t, int& u, int& v);
int diema(int x, int y, int z, int t, int u, int v);
int diemb(int x, int y, int z, int t, int u, int v);
int diemc(int x, int y, int z, int t, int u, int v);
bool kiemTra(int x, int y, int z, int t, int u, int v);
int main()
{
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u, v);
	kiemTra(x, y, z, t, u, v);
	int kq1 = diema(x, y, z, t, u, v);
	int kq2 = diemb(x, y, z, t, u, v);
	int kq3 = diemc(x, y, z, t, u, v);
}
void nhap(int& x, int& y, int& z, int& t, int& u, int& v)
{
	scanf_s("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
bool kiemTra(int x, int y, int z, int t, int u, int v)
{
	if (x >= 0 && x <= 3 && y >= 0 && y <= 3 && z >= 0 && z <= 3 && u >= 0 && u <= 3 && v >= 0 && v >= 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int diema(int x, int y, int z, int t,int u, int v)
{
	int diemA;
	if (kiemTra(x, y, z, t, u, v) == true)
	{
		if ((x == 1 && y == 3) || (x == 3 && y == 2) || (x == 2) && (y == 1))
		{
			diemA += 3;
			if ((z == 1 && t == 3) || (z == 3 && t == 2) || (z == 2 && t == 1))
				diemA = diemA + 3;
		}
		if ((x == 1 && y == 1) || (x == 3 && y == 3) || (x == 2) && (y == 2))
		{
			diemA += 1;
			if ((z == 1 && t == 1) || (z == 3 && t == 3) || (z == 2 && t == 2))
				diemA = diemA + 1;
		}
		if ((x == 3 && y == 1) || (x == 2 && y == 2) || (x == 1) && (y == 2))
		{
			diemA = 0;
			if ((z == 1 && t == 1) || (z == 3 && t == 3) || (z == 2 && t == 2))
				diemA = diemA + 0;
		}
	}
	return diemA;
}
int diemb(int x, int y, int z, int t, int u, int v)
{
	int diemB;
	if (kiemTra(x, y, z, t, u, v) == true)
	{
		if ((y == 1 && x == 3) || (y == 2 && x == 3) || (y == 2 && x == 1))
		{
			diemB += 3;
			if ((u == 1 && v == 3) || (u == 3) && (v == 2) || (u == 2 && v == 1))
				diemB = diemB + 3;
		}
		if ((y == 1 && x == 1) || (y == 3 && x == 3) || (y == 2 && x == 2))
		{
			diemB += 1;
			if ((u == 1 && v == 3) || (u == 3) && (v == 2) || (u == 2 && v == 1))
				diemB = diemB + 1;
		}
		if ((y == 3 && x == 1) || (y == 3 && x == 2) || (y == 1 && x == 2))
		{
			diemB = 0;
			if ((u == 3 && v == 1) || (u == 3) && (v == 2) || (u == 2 && v == 1))
				diemB = diemB + 0;
		}
	}
	return diemB;
}
int diemc(int x, int y,int z, int t, int u, int v)
{
	int diemC;
	if (kiemTra(x, y, z, t, u, v) == true)
	{
		if ((t == 1 && z == 3) || (t == 3 && z == 2) || (t == 2 && z == 1))
		{
			diemC += 3;
			if ((v == 1 && u == 3) || (v == 3 && u == 2) || (v == 2 && u == 1))
				diemC += 3;
		}
		if ((t == 1 && z == 1) || (t == 3 && z == 3) || (t == 2 && z == 2))
		{
			diemC += 1;
			if ((v == 1 && u == 1) || (v == 3 && u == 3) || (v == 2 && u == 2))
				diemC += 1;
		}
		if ((t == 3 && z == 1) || (t == 2 && z == 3) || (t == 1 && z == 2))
		{
			diemC = 0;
			if ((v == 3 && u == 1) || (v == 2 && u == 3) || (v == 1 && u == 2))
				diemC += 0;
		}
	}
	return diemC;
}




