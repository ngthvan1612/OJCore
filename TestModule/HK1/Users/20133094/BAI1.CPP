void countP(int x, int y, int z, int t, int u, int v, int& X, int& Y, int& Z);

#include<iostream>

void main()
{
	int x, y, z, t, u, v, X, Y, Z;
	std::cin >> x >> y >> z >> t >> u >> v;
	countP(x, y, z, t, u, v, X, Y, Z);
	std::cout << X << " " << Y << " " << Z;
}
void countP(int x, int y, int z, int t, int u, int v, int& X, int& Y, int& Z)
{
	X = 0; 
	Y = 0;
	Z = 0;
	if ((x == 1 && y == 3) || (x == 3 && y == 2) || (x == 2 && y == 1))
		X+=3;
	else if ((x == 3 && y == 1) || (x == 2 && y == 3) || (x == 1 && y == 2))
		Y+=3;
	else if (x == y)
	{
		X+=1;
		Y+=1;
	}

	if ((z == 1 && t == 3) || (z == 3 && t == 2) || (z == 2 && t == 1))
		X+=3;
	else if ((z == 3 && t == 1) || (z == 2 && t == 3) || (z == 1 && t == 2))
		Z+=3;
	else if (z == t)
	{
		X+=1;
		Z+=1;
	}

	if ((u == 1 && v == 3) || (u == 3 && v == 2) || (u == 2 && v == 1))
		Y+=3;
	else if ((u == 3 && v == 1) || (u == 2 && v == 3) || (u == 1 && v == 2))
		Z+=3;
	else if (u == v)
	{
		Y+=1;
		Z+=1;
	}
}
