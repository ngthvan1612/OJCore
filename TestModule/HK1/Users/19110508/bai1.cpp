#include<stdio.h>
void tinhdiem(int x, int y, int &diemA, int &diemB);
void tinhdiem(int z, int t, int &diemA, int &diemC);
void tinhdiem(int u, int v, int &diemB, int &diemC);

void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int diemA=0, diemB=0, diemC=0;
	tinhdiem(x,y,diemA,diemB);
	tinhdiem(z,t,diemA,diemC);
	tinhdiem(u,v,diemB,diemC);
	printf("%d%d%d", diemA, diemB, diemC);
}
void tinhdiem(int x, int y, int &diemA, int &diemB)
{
	if(x==1&&y==3)
		diemA += 3;
	if(x==3&&y==1)
		diemB +=3;
	if(x==3&&y==2)
		diemA +=3;
	if(x==2&&y==3)
		diemB +=3;
	if(x==2&&y==1)
		diemA +=3;
	if(x==1&&y==2)
		diemB +=3;
	if(x==y)
	{
		diemA++;
		diemB++;
	}
}
void tinhdiem(int z, int t, int &diemA, int &diemC)
{
	if(z==1&&t==3)
		diemA += 3;
	if(z==3&&t==1)
		diemC +=3;
	if(z==3&&t==2)
		diemA +=3;
	if(z==2&&t==3)
		diemC +=3;
	if(z==2&&t==1)
		diemA +=3;
	if(z==1&&t==2)
		diemC +=3;
	if(z==t)
	{
		diemA++;
		diemC++;
	}
}
void tinhdiem(int u, int v, int &diemB, int &diemC)
{
	if(u==1&&v==3)
		diemB += 3;
	if(u==3&&v==1)
		diemC +=3;
	if(u==3&&v==2)
		diemB +=3;
	if(u==2&&v==3)
		diemC +=3;
	if(u==2&&v==1)
		diemB +=3;
	if(u==1&&v==2)
		diemC +=3;
	if(u==v)
	{
		diemB++;
		diemC++;
	}
}