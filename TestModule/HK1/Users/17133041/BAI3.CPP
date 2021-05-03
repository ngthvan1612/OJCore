#include<stdio.h>
void xuat(int a);
void nhap(int &x, int &y, int &z, int &t, int &u);

void main()
{
	int x, y,z,t,u,a;
	nhap(x,y,z,t,u);
//	kt(x,y,z,t,u,v,a,b,c);
	xuat(a);
}


void nhap(int &x, int &y, int &z, int &t, int &u)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u);
}

void xuat(int a)
{
	printf("-1");
}




