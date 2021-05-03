#include <stdio.h>

void main ()
{
	int  x, y, z, t, u, v;
	int diemA, diemB, diemC, diemA1, diemB1, diemC1, s1, s2, s3;
	diemA = 0;
	diemB = 0;
	diemC = 0;
	s1 = 0;
	s2 = 0;
	s3 = 0;
	diemA1 = diemB1 = diemC1 = 0;

	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);

	if ((x == 1 && y == 3) || (x == 3 && y == 2) || (x == 2 && y == 1))
	{
		diemA = 3;
		diemB = 0;
	}
	else
	{
		if ((y == 1 && x == 3) || (y == 3 && x == 2) || (y == 2 && x == 1))
		{
			diemA = 0;
			diemB = 3;
		}
		else
		{
			if (x == y)
			{
				diemA = 1;
				diemB = 1;
			}
		}
	}
	if ((z == 1 && t == 3) || (z == 3 && t == 2) || (z == 2 && t == 1))
	{
		diemA1 = 3;
		diemC1 = 0;
	}
	else
	{
		if ((t == 1 && z == 3) || (t == 3 && z == 2) || (t == 2 && z == 1))
		{
			diemA1 = 0;
			diemC1 = 3;
		}
		else
		{
			if (z == t)
			{
				diemA1 = 1;
				diemC1 = 1;
			}
		}
	}
	if ((u == 1 && v == 3) || (u == 3 && v == 2) || (u == 2 && v == 1))
	{
		diemB1 = 3;
		diemC = 0;
	}
	else
	{
		if ((v == 1 && u == 3) || (v == 3 && u == 2) || (v == 2 && u == 1))
		{
			diemB1 = 0;
			diemC = 3;
		}
		else
		{
			if (u == v)
			{
				diemB1 = 1;
				diemC = 1;
			}
		}
	}
	s1 = diemA + diemA1;
	s2 = diemB + diemB1;
	s3 = diemC + diemC1;
	printf("%d %d %d", s1, s2, s3);
}
