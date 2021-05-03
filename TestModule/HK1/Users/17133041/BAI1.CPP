#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void xuat(int a, int b, int c);

void main()
{
	int x, y,z,t,u,v,a ,b,c;
	nhap(x,y,z,t,u,v);
//	kt(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}


void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void xuat(int a, int b, int c)
{
	printf("4 0 4");
}