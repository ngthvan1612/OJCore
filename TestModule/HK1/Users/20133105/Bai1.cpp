#include <stdio.h>
void tinhdiem1(int x,int y);
void nhap(int &x, int &y, int &z , int &t, int &u, int &v );
void xuat(int A,int B,int C);

void main ()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A,B;
	tinhdiem1(x,y);
	xuat(A,B);
}
void nhap(int &x, int &y, int &z , int &t, int &u, int &v )
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int A,int B)
{
	printf("%d%d",A,B);
}
void tinhdiem1(int &x,int &y)
{
	int A=0;
	int B=0;
	if (x>y)
	{
		A=A+5;
		B=B;
	}
	else
		if (x==y)
		{
		A=A+1;
		B=B+1;
		}
	else 
		if (x<y)
		{
		A=A;
		B=B+5;
		}
}
