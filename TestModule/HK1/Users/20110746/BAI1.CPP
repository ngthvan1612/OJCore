#include<stdio.h>
void nhap(int &x, int &y, int &dx, int &dy);
void xuat(int a, int b, int c);
void main()
{
	int a,b,c;
	int da = 0, db = 0, dc = 0;
	nhap(a,b,da,db);
	nhap(a,c,da,dc);
	nhap(b,c,db,dc);
	xuat(da,db,dc);
}
void nhap(int &x, int &y, int &dx, int &dy)
{
	scanf("%d%d", &x,&y);
	if (x == y) 
	{
		dx += 1;
		dy += 1;
	}
	else if (x == 1 && y == 3)  dx+=3;
	else if (x == 1 && y == 2)  dy+=3;
	else if (x == 2 && y == 1)  dx+=3;
	else if (x == 2 && y == 3)  dy+=3;
	else if (x == 3 && y == 1)  dy+=3;
	else if (x == 3 && y == 2)  dx+=3;
		
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d", a,b,c);
}
