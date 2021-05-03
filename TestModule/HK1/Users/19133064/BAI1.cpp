#include<iostream>
using namespace std;
void dau1(int x, int y, int& da, int& db);
void dau2(int x, int y, int& da, int& db);
void dau3(int x, int y, int& da, int& db);

void main()
{
	int x, y, z, t, u, v;
	cin >> x >> y >> z >> t >> u >> v;
	int da = 0;
	int db = 0;
	int dc = 0;
	dau1(x, y, da, db);
	dau2(z, t, da, dc);
	dau3(u, v, db, dc);
	cout << da << " " << db << " " << dc;
}
void dau(int &m, int &n, int& dm, int& dn)
{
	if (m == 1 && n == 3)
	{
		dm = dm + 3;
		dn = dn + 0;

	}
	else
		if (m == 3 && n == 2)
		{
			dm = dm + 3;
			dn += 0;
		}
		else
			if (m == 2 && n == 1)
			{
				dm += 3;
				dn += 0;
			}
			
}
void dau1(int x, int y, int& da, int& db)
{
	if (x == 1 && y == 3)
	{
		da += 3;
		db += 0;
	}
	else
		if (x == 3 && y == 1)
		{
			da += 0;
			db += 3;
		}
		else
			if (x == 3 && y == 2)
			{
				da += 3;
				db += 0;
			}
			else
				if (x == 2 && y == 3)
				{
					da += 0;
					db += 3;

				}
				else
					if (x == 2 && y == 1)
					{
						da += 3;
						db += 0;
					}
					else
						if (x == 1 && y == 2)
						{
							da += 0;
							db += 3;
						}
						else
							if (x == y)
							{
								da++;
								db++;
							}
}
void dau3(int x, int y, int& da, int& db)
{
	if (x == 1 && y == 3)
	{
		da += 3;
		db += 0;
	}
	else
		if (x == 3 && y == 1)
		{
			da += 0;
			db += 3;
		}
		else
			if (x == 3 && y == 2)
			{
				da += 3;
				db += 0;
			}
			else
				if (x == 2 && y == 3)
				{
					da += 0;
					db += 3;

				}
				else
					if (x == 2 && y == 1)
					{
						da += 3;
						db += 0;
					}
					else
						if (x == 1 && y == 2)
						{
							da += 0;
							db += 3;
						}
						else
							if (x == y)
							{
								da++;
								db++;
							}
}
void dau2(int x, int y, int& da, int& db)
{
	if (x == 1 && y == 3)
	{
		da += 3;
		db += 0;
	}
	else
		if (x == 3 && y == 1)
		{
			da += 0;
			db += 3;
		}
		else
			if (x == 3 && y == 2)
			{
				da += 3;
				db += 0;
			}
			else
				if (x == 2 && y == 3)
				{
					da += 0;
					db += 3;

				}
				else
					if (x == 2 && y == 1)
					{
						da += 3;
						db += 0;
					}
					else
						if (x == 1 && y == 2)
						{
							da += 0;
							db += 3;
						}
						else
							if (x == y)
							{
								da++;
								db++;
							}
}