#include <stdio.h>
void xuli(int x, int y, int z, int t, int u, int v);
void tinhDiem(int x, int y, int &a, int &b);
void main()
{
	int x, y, z, t , u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	xuli(x, y ,z, t, u, v);
}
void xuli(int x, int y, int z, int t, int u, int v)
{
	int a = 0, b = 0, c = 0;
	tinhDiem(x, y, a, b);
	tinhDiem(z, t, a, c);
	tinhDiem(u, v, b, c); 
	printf("%d %d %d", a, b, c);
}
void tinhDiem(int x, int y, int &a, int &b)
{

	if(x > y)
	{
		a+= 3;
	}
	else if(x < y)
		b += 3;
	else{
		a += 1;
		b += 1;
	}
}
