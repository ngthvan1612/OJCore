#include<stdio.h>

void nhap(int& x, int& y, int& z, int&t, int& u, int& v);
void tinhDiem(int x, int y, int z, int t, int u, int v, int A[]);
void xuat(int a, int b, int c);

int main()
{ 
	int A[3] = {1,2,3};
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u, v);
	tinhDiem(x, y, z, t, u, v, A);
    return 0;
}
void nhap(int& x, int& y, int& z, int&t, int& u, int& v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void tinhDiem(int x, int y, int z, int t, int u, int v, int A[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	if (x == A[0] && y == A[1])
	{
		a = a + 0;
		b = b + 3;
	}
    if (x == A[0] && b == A[2])
	{
		a = a + 3;
		b = b + 0;
	}
	if (x == A[0] && y == A[0])
	{
		a = a + 1;
		b = b + 1;
	}
	if (x == A[1] && y == A[0])
	{
		a = a + 3;
		b = b + 0;
	}
    if (x == A[1] && b == A[2])
	{
		a = a + 0;
		b = b + 3;
	}
	if (x == A[1] && y == A[1])
	{
		a = a + 0;
		b = b + 3;
	}
	if (x == A[2] && y == A[1])
	{
		a = a + 3;
		b = b + 0;
	}
    if (x == A[2] && b == A[2])
	{
		a = a + 1;
		b = b + 1;
	}
	if (x == A[2] && y == A[0])
	{
		a = a + 0;
		b = b + 3;
	}



	if ( z == A[0] && t == A[1] )
	{
		a = a + 0;
		c = c + 3;
	}
    if (z == A[0] && t == A[2])
	{
        a = a + 3;
		c = c + 0;
	}
	if( z == A[0] && t == A[0])
	{
		a = a + 1;
        c = c + 1;
	}
	if ( z == A[1] && t == A[1] )
	{
		a = a + 1;
		c = c + 1;
	}
    if (z == A[1] && t == A[2])
	{
        a = a + 0;
		c = c + 3;
	}
	if( z == A[1] && t == A[0])
	{
		a = a + 3;
        c = c + 0;
	}
	if ( z == A[2] && t == A[1] )
	{
		a = a + 0;
		c = c + 3;
	}
    if (z == A[2] && t == A[2])
	{
        a = a + 1;
		c = c + 1;
	}
	if( z == A[2] && t == A[0])
	{
		a = a + 3;
        c = c + 0;
	}



	if ( u == A[0] && v == A[1])
	{
		b = b + 0;
		c = c + 3;
	}
    if(u == A[0] && v == A[2])
	{
		b = b + 3;
		c = c + 0;
	}
	if(u == A[0] && v == A[0]) 
	{
		b = b +1 ;
		c = c + 1;
	}
	if ( u == A[1] && v == A[1])
	{
		b = b + 1;
		c = c + 1;
	}
    if(u == A[1] && v == A[2])
	{
		b = b + 0;
		c = c + 3;
	}
	if(u == A[1] && v == A[0]) 
	{
		b = b + 3 ;
		c = c + 0;
	}
	if ( u == A[2] && v == A[1])
	{
		b = b + 3;
		c = c + 0;
	}
    if(u == A[2] && v == A[2])
	{
		b = b + 1;
		c = c + 1;
	}
	if(u == A[2] && v == A[0]) 
	{
		b = b + 0 ;
		c = c + 3;
	}


	xuat(a,b,c);

}
void xuat(int a, int b, int c)
{
	printf("%d %d %d", a, b, c);
}