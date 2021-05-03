#include <stdio.h>
void nhap(int &x, int &y,int &z, int &t, int &u, int &v);
void xuli(int x,int y,int z,int t,int u,int v,int &A,int &B,int &C);
void xuat(int x,int y,int z);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A,B,C;
	xuli(x,y,z,t,u,v,A,B,C);
	xuat(A,B,C);
}
void nhap(int &x, int &y,int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuli(int x,int y,int z,int t,int u,int v,int &A,int &B,int &C)
{
	A=0;B=0;C=0;
	if (x==1)
	{
		if (y==1)
		{
			A++;
			B++;
		}
		else if (y==2)
			B+=3;
		else A+=3;
	}
	else if (x==2)
	{
		if (y==1)
			A+=3;
		else if (y==2)
		{
			A++;
			B++;
		}
		else B+=3;
	}
	else
	{
		if (y==1)
			B+=3;
		else if (y==2)
			A+=3;
		else 
		{
			A++;
			B++;
		}
	}

	if (z==1)
	{
		if (t==1)
		{
			A++;
			C++;
		}
		else if (t==2)
			C+=3;
		else A+=3;
	}
	else if (z==2)
	{
		if (t==1)
			A+=3;
		else if (t==2)
		{
			A++;
			C++;
		}
		else C+=3;
	}
	else
	{
		if (t==1)
			C+=3;
		else if (t==2)
			A+=3;
		else 
		{
			A++;
			C++;
		}
	}

	if (u==1)
	{
		if (v==1)
		{
			B++;
			C++;
		}
		else if (v==2)
			C+=3;
		else B+=3;
	}
	else if (u==2)
	{
		if (v==1)
			B+=3;
		else if (v==2)
		{
			B++;
			C++;
		}
		else C+=3;
	}
	else
	{
		if (v==1)
			C+=3;
		else if (v==2)
			B+=3;
		else 
		{
			B++;
			C++;
		}
	}

}
void xuat(int x,int y,int z)
{
	printf("%d %d %d",x,y,z);
}
