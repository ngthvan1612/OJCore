#include <stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void kiemtra(int x,int y,int z,int t,int u,int v,int &diema,int &diemb,int &diemc);
void xuat(int diema,int diemb,int diemc);
void main ()
{
	int x,y,z,t,u,v,diema,diemb,diemc;
	nhap(x,y,z,t,u,v);
	kiemtra(x,y,z,t,u,v,diema,diemb,diemc);
	xuat(diema,diemb,diemc);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void kiemtra(int x,int y,int z,int t,int u,int v,int &diema,int &diemb,int &diemc)
{
	diema=0,diemb=0,diemc=0;
	if (x==1 && y==3)
		diema=diema+3;
	else if (x==1 && y==2)
		diemb=diemb+3;
	else if ((x==2 && y==2) || (x==1 && y==1)||(x==3 && y==3))
	{
		diema=diema+1;
		diemb=diemb+1;
	}
	else if(x==3 && y==1)
		diemb+=3;
	else if (x==2 && y==1)
		diema+=3;
	else if (x==3 && y==2)
		diema+=3;
	else if (x==2 && y==3)
		diemb+=3;
	if (z==1 && t==3)
		diema=diema+3;
	else if (z==1 && t==2)
		diemc=diemc+3;
	else if ((z==2 && t==2) || (z==1 && t==1)||(z==3 && t==3))
	{
		diema=diema+1;
		diemc=diemc+1;
	}
	else if(z==3 && t==1)
		diemc+=3;
	else if (z==2 && t==1)
		diema+=3;
	else if (z==3 && t==2)
		diema+=3;
	else if (z==2 && t==3)
		diemc+=3;
	if (u==1 && v==3)
		diemb=diemb+3;
	else if (u==1 && v==2)
		diemc=diemc+3;
	else if ((u==2 && v==2) || (u==1 && v==1)||(u==3 && v==3))
	{
		diemb=diemb+1;
		diemc=diemc+1;
	}
	else if(u==3 && v==1)
		diemc+=3;
	else if (u==2 && v==1)
		diemb+=3;
	else if (u==3 && v==2)
		diemb+=3;
	else if (u==2 && v==3)
		diemc+=3;

}
void xuat(int diema,int diemb,int diemc)
{
	printf("%d %d %d",diema,diemb,diemc);
}