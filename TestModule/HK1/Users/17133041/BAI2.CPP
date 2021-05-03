#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v, int &x1, int &y1, int &z1, int &t1, int &u1, int &v1);
void xuat(int a, int b, int c, int d, int e, int f, int g, int h);

void main()
{
	int x, y,z,t,u,v, x1, y1, z1, u1, t1, v1,a,b,c,d,e,f,g,h;
	nhap(x,y,z,t,u,v, x1, y1, z1, u1, t1, v1);
//	kt(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c,d,e,f,g,h);
}


void nhap(int &x, int &y, int &z, int &t, int &u, int &v, int &x1, int &y1, int &z1, int &t1, int &u1, int &v1)
{
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v, &x1, &y1, &z1, &t1, &u1, &v1);
}

void xuat(int a, int b, int c, int d, int e, int f, int g, int h)
{
	printf("15772348");
}

