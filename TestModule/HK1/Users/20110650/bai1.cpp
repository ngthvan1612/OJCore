#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int xuly(int x, int y);
void xuat(int x, int y, int z, int t, int u, int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuly(x,y);
	xuly(z,t);
	xuly(u,v);
	xuat(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int xuly(int x, int y)
{
	int diem = 0;
	if( x == 1)
	{	
		if( y == 3)
		{
			diem = 3;
		}
		if( y == 2)
		{
			diem = 0;
		}
		if(y == 1)
		{
			diem = 1;
		}
	}
	if( x == 2)
	{	
		if( y == 3)
		{
			diem = 0;
		}
		if( y == 2)
		{
			diem = 1;
		}
		if(y == 1)
		{
			diem = 3;
		}
	}
	if( x == 3)
	{	
		if( y == 3)
		{
			diem = 1;
		}
		if( y == 2)
		{
			diem = 3;
		}
		if(y == 1)
		{
			diem = 0;
		}
	}
	return diem;
}
void xuat(int x, int y, int z, int t, int u, int v)
{
	printf("%d", xuly(x,y) +xuly(z,t));
	printf("%d", xuly(u,v) +xuly(y,x));
	printf("%d", xuly(t,z) +xuly(v,u));
}