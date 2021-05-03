#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v );
int keobuabao(int x,int y,int z,int t,int u,int v);
void xuat (int kq );
void main ()
{
	int x,y,z,t,u,v ;
	nhap (x,y,z,t,u,v);
	int kq=keobuabao(x,y,z,t,u,v);
	xuat(kq); 

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v )
{
	scanf ("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
int keobuabao(int x,int y,int z,int t,int u,int v)
{
	if (x==y || y==x )
		return 1;
	else if (x==1||z==3)
		return 2;
	else if (z==3|| y==2)
		return 3;
	else if (y==2|| x==1)
		return 4;
	else 

}
void xuat (int kq )
{
	if (kq==1)
		printf ("%d", 0); 
	else if (kq==2) 
		for (int i=0 ; i)
}