#include <stdio.h>
void nhap (int &x, int &y,int &z,int &t,int&u,int &v);
int diem (int x, int y, int z,int t,int u, int v);
void xuat (int kq);
void main ()
{
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	int kq = diem (x,y,z,t,u,v);
	xuat(kq);

}
void nhap (int &x, int &y,int &z,int &t,int&u,int &v)
{
	scanf("%d",&x,&y,&z,&t,&u,&v);
}
int diem (int x, int y, int z,int t,int u, int v)
{
	int da;
	int db;
	int dc;
	if((x==1&&y==3)||(x==3&&y==2)||(x==2&&y==1))
	{
		da=3;
		db=0;
		return da;
		return db;
	}
	if (x==y)
	{
			da=1;
			db=1;
			return da;
			return db;
	}
	if((y==1&&x==3)||(y==3&&x==2)||(y==2&&x==1))
	{
		db=3;
		da=0;
		return da;
		return db;
	}
	if((z==1&&t==3)||(z==3&&t==2)||(z==2&&t==1))
	{
		da=3;
		dc=0;
		return da;
		return dc;
	}
	if(z==t)
	{
		da=1;
		dc=1;
		return da;
		return dc;
	}
	if((t==1&&z==3)||(t==3&&z==2)||(t==2&&z==1))
	{
		da=0;
		dc=3;
		return da;
		return dc;
	}
	if((u==1&&v==3)||(u==3&&v==2)||(u==2&&v==1))
	{
		db=3;
		dc=0;
		return db;
		return dc;
	}
	if(u==v)
	{
		db=1;
		dc=1;
		return db;
		return dc;
	}
	if((v==1&&u==3)||(v==3&&u==2)||(v==2&&u==1))
	{
		db=0;
		dc=3;
		return db;
		return dc;
	}
void xuat (int kq)
{
	printf("%d ",kq);
}


	
		



		