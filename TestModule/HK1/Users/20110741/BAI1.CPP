#include <stdio.h>
#include <string.h>
int Tinh(int x, int y,int z, int t, int u, int v, int &A, int &B, int &C);
int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int A=0,B=0,C=0;
	Tinh(x,y,z,t,u,v,A,B,C);
	printf("%d %d %d",A,B,C);
	return 0;
}
int Tinh(int x, int y,int z, int t, int u, int v, int &A, int &B, int &C)
{
	if (x==y)
	{
		A+=1;
		B+=1;
	}
	else
	{
		if (x==1 && y==3)
			A+=3;
		if (x==3 && y==1)
			B+=3;
		if (x==3 && y==2)
			A+=3;
		if (x==2 && y==3)
			B+=3;
		if (x==2 && y==1)
			A+=3;
		if (x==1 && y==2)
			B+=3;
	}
	if (z==t)
	{
		A+=1;
		C+=1;
	}
	else
	{
		if (z==1 && t==3)
			A+=3;
		if (z==3 && t==1)
			C+=3;
		if (z==3 && t==2)
			A+=3;
		if (z==2 && t==3)
			C+=3;
		if (z==2 && t==1)
			A+=3;
		if (z==1 && t==2)
			C+=3;
	}
	if (u==v)
	{
		B+=1;
		C+=1;
	}
	else
	{
		if (u==1 && v==3)
			B+=3;
		if (u==3 && v==1)
			C+=3;
		if (u==3 && v==2)
			B+=3;
		if (u==2 && v==3)
			C+=3;
		if (u==2 && v==1)
			B+=3;
		if (u==1 && v==2)
			C+=3;
	}
	return 0;

}