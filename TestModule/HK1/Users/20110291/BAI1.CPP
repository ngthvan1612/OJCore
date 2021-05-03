#include <stdio.h>
void nhap (int &x,int &y, int &z, int &t, int &u, int &z);
int tinhdiem(x,y,z,t,u,v);
void xuat(A,B,C);
void main()
{
	int A,B,C;
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	tinhdiem(x,y,z,t,u,v);
	xuat (A,B,C);
}
void nhap (int &x,int &y, int &z, int &t, int &u, int &z)
{
	scanf ("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int tinhdiem(x,y,z,t,u,v)
{
	if (x<y)
	{
		A=3;
		B+=0;
	}
	else if (x=y)
	{
		A=1;
		B=1;
	}
	else {
		B=3;
		A+=0;
	}
	if (z<t)
	{
		A=3;
		C+=0;
	}
	else if (z=t)
	{
		A=1;
		C=1;
	}
	else {
		C=3;
		A+=0;
	}
	if (u<v)
	{
		C=3;
		B+=0;
	}
	else if (u=v)
	{
		C=1;
		B=1;
	}
	else {
		B=3;
		C+=0;
	}
}
void xuat(A,B,C)
{
	printf("%d%d",int A, int B, int C);
}