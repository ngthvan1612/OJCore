#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void keoBuaBao(int x, int y, int z, int t, int u, int v);
void main()
{
	int x, y, z, t, u, v;
	nhap(x,y,z,t,u,v);
	keoBuaBao(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void keoBuaBao(int x, int y, int z, int t, int u, int v)
{
	int diemA = 0;
	int diemB = 0;
	int diemC = 0;
	if(x < y)
		diemA += 3;
	else if(x == y)
	{
		diemA += 1;
		diemB += 1;
	}
	else if(x > y)
		diemB += 3;
	else
		diemA += 0;
	if(z < t)
		diemA += 3;
	else if(z == t)
	{
		diemA += 1;
		diemC += 1;
	}
	else if(z > t)
		diemC += 3;
	else
		diemA += 0;
	if(u < v)
		diemB += 3;
	else if(u == v)
	{
		diemB += 1;
		diemC += 1;
	}
	else if(u > v)
		diemC += 3;
	else
		diemA += 0;
	printf("%d%d%d ", diemA, diemB, diemC);
}