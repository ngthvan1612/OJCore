#include<stdio.h>
void nhap( int &x, int &y, int &z, int &t, int &u, int &v);
int ktra( int x, int y, int z, int t, int u, int v);
void xuat(int kq);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq= ktra(x,y,z,t,u,v);
	xuat(kq);
}
void nhap( int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int ktra( int x, int y, int z, int t, int u, int v)
{
	int A=0; int B=0; int C=0;
	if (((x==1) && (y==3))|| ((x==3) && (y==2)) || ((x==2) && (y==1)))
		A=A+3;
	if (x==y)
	{
		A=A+1;
		B=B+1;
	}
	if (((y==1) && (x==3))|| ((y==3) && (x==2)) || ((y==2) && (x==1)))
		B=B+1;
	if (((z==1) && (t==3))|| ((z==3) && (t==2)) || ((z==2) && (t==1)))
		A=A+3;
	if (z==t) 
		{
			A=A+1;
			C=C+1;
	}
	if (((t==1) && (z==3))|| ((t==3) && (z==2)) || ((t==2) && (z==1)))
		C=C+3;
	if (((u==1) && (v==3))|| ((u==3) && (v==2)) || ((u==2) && (v==1)))
		B=B+3;
	if (u==v) 
	{
			B=B+1;
			C=C+1;
	}
	if (((v==1) && (u==3))|| ((v==3) && (u==2)) || ((v==2) && (u==1)))
		C=C+3;
}
	return A,B,C;

void xuat(int kq)
{
	printf("%d %d %d",kq);
}
