#include<stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u,int &v);
void tinh_diem  (int x, int y, int z, int t, int u, int v);
void xuat (int x, int y, int z);
void main ()
{
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	tinh_diem (x,y,z,t,u,v);
}
void nhap (int &x, int &y, int &z, int &t, int &u,int &v)
{
	scanf ("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void tinh_diem  (int x, int y, int z, int t, int u, int v)
{
	int diemA=0, diemB=0, diemC=0;
	if (x==1&&y==3||x==3&&y==2||x==2&&y==1)
	{
		diemA +=3;
		diemB +=0;
	}
	else if (x==y)
	{
		diemA +=1;
		diemB +=1;
	}
	else if (x==3&&y==1||x==2&&y==3||x==1&&y==2)
		diemB += 3;
	if (z==1&&t==3||z==3&&t==2||z==2&&t==1)
	{
		diemA +=3;
		diemC +=0;
	}
	else if (z==t)
	{
		diemA +=1;
		diemC +=1;
	}
	else if (z==3&&t==1||z==2&&t==3||z==1&&t==2)
		diemC += 3;
	if (u==1&&v==3||u==3&&v==2||u==2&&v==1)
	{
		diemB +=3;
		diemC +=0;
	}
	else if (u==v)
	{
		diemB +=1;
		diemC +=1;
	}
	else if (u==3&&v==1||u==2&&v==3||u==1&&v==2)
		diemC += 3;
	xuat (diemA, diemB, diemC);
}
void xuat (int x, int y, int z)
{
	printf ("%d %d %d", x, y,z);
}