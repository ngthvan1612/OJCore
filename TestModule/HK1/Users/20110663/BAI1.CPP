#include<stdio.h>
void xuat(int A, int B, int C);
void nhap(int &a);
void tinhdiem(int x, int y, int &a, int &b);
void main()
{
	int x,y,z,t,u,v;
	nhap(x);
	nhap(y);
	nhap(z);
	nhap(t);
	nhap(u);
	nhap(v);
	int A=0,B=0,C=0;
	tinhdiem(x,y,A,B);
	tinhdiem(z,t,A,C);
	tinhdiem(u,v,B,C);
	xuat(A,B,C);
}
void xuat(int A, int B, int C)
{
	printf("%d %d %d", A, B, C);
}
void nhap(int &a)
{
	scanf("%d", &a);
}
void tinhdiem(int x, int y, int &a, int &b)
{
	if(x==y)
	{
		a++; b++;
	}
	else 
	{
		if( (x==1 || x==3)&& (y==3 || y==1) )
		{
			if(x<y)
			{
				a=a+3;
			}
			else b=b+3;
		}
		else
		{
			if(x>y)
			{
				a=a+3;
			}
			else b=b+3;
		}
	}
}
