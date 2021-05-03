#include<stdio.h>

void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void tinh_diem(int x,int y,int z,int t,int u,int v,int &da,int &db,int &dc);
void xuat_diem(int da,int db,int dc);

void main()
{
	int x,y,z,t,u,v; int da=0;int db=0; int dc=0;
	nhap(x,y,z,t,u,v);
	tinh_diem(x,y,z,t,u,v,da,db,dc);
	xuat_diem(da,db,dc);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinh_diem(int x,int y,int z,int t,int u,int v,int &da,int &db,int &dc)
{
	if ((x==1 && y==3)||(x==3 && y==2)||(x==2 && y==1))
		da=da+3;
	else if(x==y)
	{
		da++;
		db++;
	}
	else
		db=db+3;

	if ((z==1 && t==3)||(z==3 && t==2)||(z==2 && t==1))
		da=da+3;
	else if(z==t)
	{
		da++;
		dc++;
	}
	else
		dc=dc+3;

	if ((u==1 && v==3)||(u==3 && v==2)||(u==2 && v==1))
		db=db+3;
	else if(u==v)
	{
		db++;
		dc++;
	}
	else 
		dc=dc+3;	
}
void xuat_diem(int da,int db,int dc)
{
	printf("%d %d %d ",da,db,dc);
}