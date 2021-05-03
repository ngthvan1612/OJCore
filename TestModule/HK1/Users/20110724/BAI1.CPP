#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int tinh(int x, int y);

int main()
{
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u, v);
	int diemA = 0;
	int diemB = 0;
	int diemC = 0;
	diemA += tinh(x, y);
	diemB += tinh(u, v);
	diemC += tinh(t, z);
	diemA += tinh(z, t);
	diemB += tinh(y, x);
	diemC += tinh(v, u);
	printf("%d %d %d", diemA, diemB, diemC);
	return 0;
}

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}

int tinh(int x, int y)
{
	if(x == y)
	{
		return 1;
	}
	else if(x == 1 && y == 3)
		return 3;
	else if(x == 1 && y == 2)
		return 0;
	else if(x == 2 && y == 1)
		return 3;
	else if(x == 3 && y == 2)
		return 3;
	else if(x == 2 && y == 3)
		return 0;
	else if(x == 3 && y == 1)
		return 0;

}
