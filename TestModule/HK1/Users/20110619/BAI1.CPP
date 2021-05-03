#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void tinhdiem(int x, int y, int z, int t, int u, int v);
int thang_thua(int x, int y);
void xuat(int a, int b, int c);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinhdiem(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinhdiem(int x, int y, int z, int t, int u, int v)
{
	int diemA=0, diemB=0, diemC=0;
	if(thang_thua(x,y)==1)
		diemA=diemA+3;
	else
		if(thang_thua(x,y)==2)
		{
			diemA=diemA+1;
			diemB=diemB+1;
		}
		else
			diemB=diemB+3;
	if(thang_thua(z,t)==1)
		diemA=diemA+3;
	else
		if(thang_thua(z,t)==2)
		{
			diemA=diemA+1;
			diemC=diemC+1;
		}
		else
			diemC=diemC+3;
	if(thang_thua(u,v)==1)
		diemB=diemB+3;
	else
		if(thang_thua(u,v)==2)
		{
			diemB=diemB+1;
			diemC=diemC+1;
		}
		else
			diemC=diemC+3;
		xuat(diemA,diemB,diemC);
}
int thang_thua(int x, int y)
{
	if(x==y)
		return 2;
	else
		if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
			return 1;
		else
			return 3;
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d",a,b,c);
}

		