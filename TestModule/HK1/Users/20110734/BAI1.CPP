#include<stdio.h>
void nhap(int &x,int &y, int &z, int&t, int &u, int &v);
int check(int a, int b);
void xuly(int x, int y, int z, int t, int u, int v, int &diemA, int &diemB, int &diemC);
void xuat(int a, int b, int c);
void main()
{
	int x,y, z,t, u,v;
	nhap(x,y,z,t,u,v);
	int diemA=0, diemB=0, diemC=0;
	xuly(x,y,z,t,u,v,diemA,diemB,diemC);
	xuat(diemA,diemB,diemC);
}
void nhap(int &x,int &y, int &z, int&t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int check(int a, int b)
{
	if (a==b)
		return 0;
	if ((a==1 && b==3) || (a==3 && b==2) || (a==2 && b==1))
		return 1;
	else
		return -1;
}
void xuly(int x, int y, int z, int t, int u, int v, int &diemA, int &diemB, int &diemC)
{
	switch(check(x,y))
	{
	case 1:
		diemA+=3;
		break;
	case 0:
		diemA++;
		diemB++;
		break;
	case -1:
		diemB+=3;
		break;
	}
	switch(check(z,t))
	{
	case 1:
		diemA+=3;
		break;
	case 0:
		diemA++;
		diemC++;
		break;
	case -1:
		diemC+=3;
		break;
	}
	switch(check(u,v))
	{
	case 1:
		diemB+=3;
		break;
	case 0:
		diemB++;
		diemC++;
		break;
	case -1:
		diemC+=3;
		break;
	}
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d",a,b,c);
}