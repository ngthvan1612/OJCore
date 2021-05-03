
#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void tinh(int x, int y, int z, int t, int u, int v);
void xuat(int x, int y , int z);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinh(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinh(int x, int y, int z, int t, int u, int v)
{
	int A=0,B=0,C=0;
	if(x<y)
	{
		A=A+3;
		B=0+B;
	}
	else
		if(x>y)
	{
		A=A+0;
		B=B+3;
	}
		else 
			if(x=y)
			{
				A=A+1;
				B=B+1;
			}

	if(z<t)
	{
		C=C+3;
		A=A+0;

	}
	else 
		if(z>t)
	{	
		A=A+3;
		C=C+0;
	}
		else 
			if(z=t)
			{
				A=A+1;
				C=C+1;
			}
	if(u>v)
	{
		B=B+3;
		C=C+0;
	}
	else
		if(u<v)
	{
		C=C+3;
		B=B+0;
	}
		else 
			if(u=v)
			{
				C=C+1;
				B=B+1;
			}
		xuat(A,B,C);
	
}
void xuat(int x, int y , int z)
{
	printf("%d %d %d",x,y,z);
}

