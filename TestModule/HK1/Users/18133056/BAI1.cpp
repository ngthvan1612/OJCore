#include <stdio.h>
void Nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
void Tinh(int x, int y, int z, int t, int u, int v, int &A, int &B, int &C)
{
	A=0,B=0,C=0;
	if (x==1 && y==3 || x==3 && y==2 || x==2 && y==1)
		A+=3;
	else if (x==3 && y==1 || x==2 && y==3 || x==1 && y==2)
		B+=3;
	else if (x==y)
	{
		A+=1;
		B+=1;
	}
	if (z==1 && t==3 || z==3 && t==2 || z==2 && t==1)
		A+=3;
	else if (z==3 && t==1 || z==2 && t==3 || z==1 && t==2)
		C+=3;
	else if (z==t)
	{
		A+=1;
		C+=1;
	}
	if (u==1 && v==3 || u==3 && v==2 || u==2 && v==1)
		B+=3;
	else if (u==3 && v==1 || u==2 && v==3 || u==1 && v==2)
		C+=3;
	else if (u==v)
	{
		C+=1;
		B+=1;
	}
}
void main()
{
	int x,y,z,t,u,v,A,B,C;
	Nhap(x,y,z,t,u,v);
	Tinh(x,y,z,t,u,v,A,B,C);
	printf("%d %d %d",A,B,C);
}
