#include <stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int ketqua(int ab,int ac, int bc, int A, int B, int C);
int ab(int x, int y);
int ac(int z, int t);
int bc(int u, int v);
int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int ketqua(int x, int y, int z, int t, int u, int v)
{

	int A,B,C;
	if(ab)
	{
		if(ac)
		{
			if(bc)
		A=A1+A2;
		B=B1+B3;
		C=C2+C3;
		}
	}
	pritf("%d%d%d",A,B,C);
}
int ab(int x, int y)
{
	int A1,B1;
	if (x==3 && y==3 || x==2 && y==2 || x==1 && y==1)
	{
		A1=1;
		B1=1;
	}
	else if(x==1 && y==3 || x==3 && y==2 || x==2 && y==1)
	{
		A1=3;
		B1=0;
	}
	else 
	{
		A1=0;
		B1=3;
	}
}
int ac(int z, int t)
{
	int A2,C2;
	if (z==3 && t==3 || z==2 && t==2 || z==1 && t==1)
	{
		A2=1;
		C2=1;
	}
	else if(z==1 && t==3 || z==3 && t==2 || z==2 && t==1)
	{
		A2=3;
		C2=0;
	}
	else 
	{
		A2=0;
		C2=3;
	}
}
int bc(int u, int v)
{
	int B3,C3;
	if (u==3 && v==3 || u==2 && v==2 || u==1 && v==1)
	{
		B3=1;
		C3=1;
	}
	else if(u==1 && v==3 || u==3 && v==2 || u==2 && v==1)
	{
		B3=3;
		C3=0;
	}
	else 
	{
		B3=0;
		C3=3;
	}
}
