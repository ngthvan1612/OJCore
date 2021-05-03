# include <stdio.h>
void nhap (int &x, int&y, int&z, int&t, int&u, int&v);
void xuat (int diemA, int diemB, int diemC);
int tinhdiemA(int &a, int &b);
int tinhdiemB(int &a, int &b);
int xulyA (int x, int y, int z, int t);
int xulyB (int x, int y, int u, int v);
int xulyC (int z, int t, int u, int v);
void main()
{
	int x, y, z, t, u, v;
	nhap (x,y,z,t,u,v);
	int diemA= xulyA (x,y,z,t);
	int diemB= xulyB (x,y,u,v);
	int diemC= xulyC (z,t,u,v);
	xuat(diemA, diemB, diemC);
}
void nhap (int &x, int&y, int&z, int&t, int&u, int&v)
{
	scanf ("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void xuat (int diemA, int diemB, int diemC)
{
	printf ("%d %d %d", diemA, diemB, diemC);
}
int tinhdiemA(int &a, int &b)
{
	if (a==1 && b==3)
	{
		a=3;
		b=0;
	}
	else if (a==3 && b==1)
	{
		a=0;
		b=3;
	}
	else if (a==3 && b==2)
		{
			a=3;
			b=0;
		}
	else if (a==2 && b==3)
		{
			a=0;
			b=3;
		}
	else if (a==2 && b==1)
	{
		a=3;
		b=0;
	}
	else if (a==1 && b==2)
	{
		a=0;
		b=3;
	}
	else 
	{
		a=1;
		b=1;
	}
	return a;
}
int tinhdiemB(int &a, int &b)
{
	if (a==1 && b==3)
	{
		a=3;
		b=0;
	}
	else if (a==3 && b==1)
	{
		a=0;
		b=3;
	}
	else if (a==3 && b==2)
		{
			a=3;
			b=0;
		}
	else if (a==2 && b==3)
		{
			a=0;
			b=3;
		}
	else if (a==2 && b==1)
	{
		a=3;
		b=0;
	}
	else if (a==1 && b==2)
	{
		a=0;
		b=3;
	}
	else 
	{
		a=1;
		b=1;
	}
	return b;
}
int xulyA (int x, int y, int z, int t)
{
	int diemA=0;
	diemA= tinhdiemA(x,y)+ tinhdiemA(z,t);
	return diemA;
}
int xulyB (int x, int y, int u, int v)
{
	int diemB;
	diemB= tinhdiemB(x,y) + tinhdiemA(u, v);
	return diemB;
}
int xulyC (int z, int t, int u, int v)
{
	int diemC;
	diemC= tinhdiemB(z,t) + tinhdiemB(u,v);
	return diemC;
}

