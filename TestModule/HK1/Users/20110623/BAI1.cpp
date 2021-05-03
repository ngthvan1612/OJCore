#include <stdio.h>
void ketquala (int x, int y,int z,int t,int u, int v, int &diemA, int &diemB, int &diemC);
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
void xuat (int diemA, int diemB, int diemC);
void tinhdiem (int x, int y,int &diemA, int &diemB);
void main ()
{
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	int diemA,diemB,diemC;
	ketquala (x,y,z,t,u,v,diemA,diemB,diemC);
	xuat(diemA,diemB,diemC);
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf ("%d%d%d%d%d%d", &x, &y, &z,&t,&u,&v);
}
void xuat (int diemA, int diemB, int diemC)
{
	printf ("%d %d %d", diemA,diemB,diemC);
}
void ketquala (int x, int y,int z,int t,int u, int v, int &diemA, int &diemB, int &diemC)
{
	diemA=0; diemB=0; diemC=0;
	tinhdiem(x,y,diemA,diemB);
	tinhdiem(z,t,diemA,diemC);
	tinhdiem (u,v,diemB,diemC);

}
void tinhdiem (int x, int y,int &diemA, int &diemB)
{
	if (x==1 && y==3)
		diemA=diemA+3;
	else if (x==2 && y==3)
		diemB+=3;
	else if (x==1 && y==2 )
		diemB+=3;
	else if (x==2 && y==1)
		diemA+=3;
	else if (x==3 && y==1)
		diemB+=3;
	else if (x==3 && y==2)
		diemA+=3;
	else if (x==y)
	{
		diemA++;
		diemB++;
	}
}
