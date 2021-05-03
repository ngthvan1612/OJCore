#include <stdio.h>
void nhap(int&x, int &y, int&z, int &t, int &u, int &v);
void xuly(int x, int y, int z, int t, int u, int v);
int main ()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuly(x,y,z,t,u,v);
	return 0;
}
void nhap(int&x, int &y, int&z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuly(int x, int y, int z, int t, int u, int v)
{
	int A = 0;
	int B = 0;
	int C = 0;
	if((x == 1 && y == 1)|| (x == 2 && y == 2) || (x==3 && y==3))
	{
		A = A+1;
		B = B+1;
	}
	if((x== 1 && y == 3) || (x == 2 && y == 1)||(x == 3 && y == 2))
	{
		A = A+3;
		B= B+0;
	}
	if((x == 1 && y== 2) || ( x == 2 && y == 3))
	{
		A= A+0;
		B = B+3;
	}
	
	if((z == 1 && t == 1)|| (z == 2 && t == 2) || (z==3 && t==3))
	{
		A = A+1;
		C = C+1;
	}
	if((z== 1 && t == 3) || (z == 2 && t == 1)||(z == 3 && t == 2))
	{
		A = A+3;
		C= C+0;
	}
	if((z == 1 && t== 2) || ( z == 2 && t == 3))
	{
		B= B+0;
		C = C+3;
	}
	
	if((u == 1 && v == 1)|| (u == 2 && v == 2) || (u==3 && v==3))
	{
		B = B+1;
		C = C+1;
	}
	if((u== 1 && v == 3) || (u == 2 && v == 1)||(u == 3 && v == 2))
	{
		B = B+3;
		C= C+0;
	}
	if((u == 1 && v== 2) || ( u == 2 && v == 3))
	{
		B= B+0;
		C = C+3;
	}
	printf("%d %d %d",A,B,C);
	
}
 
