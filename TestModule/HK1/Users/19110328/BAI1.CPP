#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int kiemTra(int x,int y,int z, int t, int u, int v, int da, int db, int dc);
void xuat(int da,int db,int dc);

void main()
{
	int x,y,z,t,u,v,da,db,dc;
	nhap(x,y,z,t,u,v);
	int kt=kiemTra(x,y,z,t,u,v,da,db,dc);
	xuat(da,db,dc);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int kiemTra(int x,int y,int z, int t, int u, int v, int da, int db, int dc)
{
	
	da=db=dc=0;
	if(x==1)
	{
		if(y==1)
		{
			da++;
			db++;
		}
		if(y==2)	db=db+3;
		if(y==3)    da=da+3;
	}
	if(x==2)
	    {
		if(y==2)
		{
			da++;
			db++;
		} 
		if(y==3)   db=db+3;
		if(y==1)   da=da+3;
		}
     if(x==3)
	    {
		if(y==3)
		{
			da++;
			db++;
		}
		if(y==1)db=db+3;
		if(y==2) da=da+3;
		}

	 if(z==1)
	{
		if(t==1)
		{
			da++;
			db++;
		}
		if(t==2)	db=db+3;
		if(t==3)    da=da+3;
	}
	if(z==2)
	    {
		if(t==2)
		{
			da++;
			db++;
		}
		if(t==3)   db=db+3;
		if(t==1)   da=da+3;
		}
     if(z==3)
	    {
		if(t==3)
		{
			da++;
			db++;
		}
		if(t==1) db=db+3;
		if(t==2) da=da+3;
		}

	 if(u==1)
	{
		if(v==1)
		{
			da++;
			db++;
		}
		if(v==2)	db=db+3;
		if(v==3)    da=da+3;
	}
	if(u==2)
	    {
		if(v==2)
		{
			da++;
			db++;
		}
		if(v==3)   db=db+3;
		if(v==1)   da=da+3;
		}
     if(u==3)
	    {
		if(v==3)
		{
			da++;
			db++;
		}
		if(v==1) db=db+3;
		if(v==2) da=da+3;
		}
		return 0;
}
void xuat(int da,int db,int dc)
{
	printf("%d%d%d", da, db, dc);
}