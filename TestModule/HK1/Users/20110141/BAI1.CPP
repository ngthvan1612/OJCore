#include<stdio.h>
int kiemtra(int m, int n);
void xuat(int a, int b, int c, int x, int y,int z,int t,int u,int v);

int kiemtra(int m, int n)
{
	
	if((m == 1 && n == 3) || (m == 3 && n == 2)  || (m == 2 && n == 1))
	{
		return 6; 
	}

	if((n == 1 && m == 3) || (n == 3 && m == 2)  || (n == 2 && m == 1))
	{
		return 5; 
	}
	
	
}

void xuat(int a, int b, int c, int x, int y,int z,int t,int u,int v)
{
	if(kiemtra(x,y) == 6 )
	{
		a = a + 1;
		b = b - 1;
	}
	if(kiemtra(z,t) == 6)
	{
		a = a + 1;
		c = c - 1;
	}
	if(kiemtra(u,v) == 6)
	{
		b = b + 1;
		c = c - 1;
	}


	if(kiemtra(x,y) == 5 )
	{
		a = a - 1;
		b = b + 1;
	}
	if(kiemtra(z,t) == 5)
	{
		a = a - 1;
		c = c + 1;
	}
	if(kiemtra(u,v) == 5)
	{
		b = b - 1;
		c = c + 1;
	}
	printf("%d%%d%d", a, b, c);
}

void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int a = 0;
	int b = 0; 
	int c = 0;
}