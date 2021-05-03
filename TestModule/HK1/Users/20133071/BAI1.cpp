#include<stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
void diemso(int x, int y, int z, int t, int u, int v);
void main()
{
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	diemso(x,y,z,t,u,v);
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf ("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void diemso(int x, int y, int z, int t, int u, int v)
{
	int A=0;
	int B=0;
	int C=0;
	if ((x==1 && y == 2) ||(x==2 && y==3) || (x==3 && y==1))
	{
		B=B+3;
		A=A+0;
	}
	if ((x==1 && y == 3) ||(x==3 && y==2) || (x==2 && y==1))
	{
		A=A+3;
		B=B+0;
	}
	if ((z==1 && t==2) || (z==2 && t==3) || (z==3 && t == 1))
	{
		C=C+3;
		A=A+0;
	}
	if ((z==1 && t==3) || (z==3 && t==2) || (z==2 && t == 1))
	{
		A=A+3;
		B=B+0;
	}
	if ((u==1 && v==2) || (u==2 && v==3) || (u==3 && v==1))
	{
		C=C+3;
		B=B+0;
	}
	if((u==1 && v==3) || (u==3 && v==2) || (u==2 && v==1))
	{
	C=C+0;
	B=B+3;
	}
	if (x==y)
	{
		A=A+1;
		B=B+1;
	}
	if (z==t)
	{
		A=A+1;
		C=C+1;
	}
	if (u==v)
	{
		B=B+1;
		C=C=1;
	}
	printf ("%d %d %d ", A,B,C);
}
