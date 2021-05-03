#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}

void xuat(int tongA, int tongB, int tongC)
{
	printf("%d %d %d", tongA, tongB, tongC);
}

void xuLy(int x, int y, int &tongA, int &tongB)
{
	if(x == y)
	{
		tongA++;
		tongB++;
	}
	else
		if(((x == 1) && (y == 3)) || ((x == 3) && (y == 2)) || ((x == 2) && (y == 1)))
			tongA = tongA + 3;
		else 
			tongB = tongB + 3;
}

void main()
{
	int x, y, z, t, u, v;
	int tongA = 0, tongB = 0, tongC = 0;
	nhap (x, y, z, t, u, v);
	xuLy(x, y, tongA, tongB);
	xuLy(z, t, tongA, tongC);
	xuLy(u, v, tongB, tongC);
	xuat(tongA, tongB, tongC);
}