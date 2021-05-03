#include<iostream>
using namespace std;
void nhap(int& x, int& y, int& z, int& t, int& u, int& v);
int ktr(int& x, int& y, int& z, int& t, int& u, int& v, int& a, int& b, int& c);
void xuat(int& a, int& b, int& c);

int main()
{
	int x;
	int y, z, t, u, v;
	int a, b, c;
	nhap(x, y, z, t, u, v);
	ktr(x, y, z, t, u, v, a, b, c);
	xuat(a, b, c);
}
void nhap(int& x, int& y, int& z, int& t, int& u, int& v)
{
	cin >> x >> y >> z >> t >> u >> v;

}
int ktr(int& x, int& y, int& z, int& t, int& u, int& v, int& a, int& b, int& c)
{
	int a1, a2, b1, b2, c1, c2;
	{
		if ((x == 1 && y == 2) || (x == 2 && y == 3) || (x == 3 && y == 1))
		{
			return b1 += 3;
		}
		if ((x == 2 && y == 1) || (x == 3 && y == 2) || (x == 1 && y == 3))
		{
			return a1 += 3;
		}
		if (x == y)
		{
			return a1 += 1;
			return b1 += 1;
		}
		return a1;
		return b1;
	}
	{
		if ((z == 1 && t == 2) || (z == 2 && t == 3) || (z == 3 && t == 1))
			return c1 += 3;
		if ((z == 2 && t == 1) || (z == 3 && t == 2) || (z == 1 && t == 3))
			return a2 += 3;
		if (z == t)
		{
			return a2 += 1;
			return c1 += 1;
		}
		return a2, c1;
	}
	{
		if ((u == 1 && v == 2) || (u == 2 && v == 3) || (u == 3 && v == 1))
		{
			return c2 += 3;
		}
		if ((u == 2 && v == 1) || (u == 3 && v == 2) || (u == 1 && v == 3))
		{
			return b2 += 3;
		}
		if (u == v)
		{
			return b2 += 1;
			return c2 += 1;
		}
		return b2, c2;
	}
	return a = a1 + a2;
	return b = b1 + b2;
	return c = c1 = c2;
}
void xuat(int& a, int& b, int& c)
{
	cout <<a<<" "<<b<<" "<<c<<" ";
}