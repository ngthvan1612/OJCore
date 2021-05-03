#include<stdio.h>
int diem(int x, int y , int z, int t, int u, int v);
void nhap(int &x; int &y; int &z; int &t; int &u; int &v);
void xuat(int A, int B, int C);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=diem(x,y,z,t,u,v);
	xuat(kq);
}
int diem(int x, int y , int z, int t, int u, int v)
{
	int a,b,c;
	   int A=0;
	   int B=0;
	   int C=0;
	if(x==a)
	{
		if(y==b)
		{
			A+=3;
		    B+=0;
		}
		else
		{
			A+=0;
		    B+=3;
		}
	}
	if(x==b)
	{
		if(y==a)
		{
			A+=0;
		    B+=3;
		}
		else
		{
			A+=3;
			B+=0;
		}
	}
	if (z==a)
	{
		if(t==b)
		{
			A+=3;
		    C+=0;
		}
		else
		{
			A+=0;
		    C+=3;
		}
	}
	if(z==b)
	{
		if(y==a)
		{
			A+=0;
		    C+=3;
		}
		else 
		{
			A+=3;
		    C+=0;
		}
	}
	if(u==a)
	{
		if(v==b)
		{
			B+=3;
		    C+=0;
		}
		else
		{
			B+=0;
			C+=3;
		}
	}
	if(u==b)
	{
		if(v==a)
		{
			B+=0;
		    C+=3;
		}
		else 
		{
			B+=3;
		    C+=0;
		}
	}
}
void nhap(int &x; int &y; int &z; int &t; int &u; int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void xuat(int A, int B, int C)
{
	printf("%d %d %d", A, B, C );
}
