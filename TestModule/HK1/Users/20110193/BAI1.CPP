#include<stdio.h>
void xuat(int kq);
void nhap(int &x,int &y,int &z,int &t,int&u,int &v);
int xuly(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=xuly(x,y,z,t,u,v);
	xuat(kq);
}
void nhap(int &x,int &y,int &z,int &t,int&u,int &v)
{
	scanf("%d%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int xuly(int x,int y,int z,int t,int u,int v)
{
	int A=0;
	int B=0;
	int C=0;
	if(x>y)
	{
		A=A+3;
	}
	if(x<y)
	{
		B=B+3;
	}
	if(x=y)
	{
		A=A+1;
		B=B+1;
	}
	if(z>t)
	{
		A=A+3;
	}
	if(z<t)
	{
		C=C+3;
	}
	if(z=t)
	{
		A=A+1;
		C=C+1;
	}
	if(u>v)
	{
		B=B+3;
	}
	if(u<v)
	{
		C=C+3;
	}
	if(u=v)
	{
		B=B+1;
		C=C+1;
	}
	printf("%d%d",A,B);
	return C;
}
void xuat(int kq)
{
	printf("%d%d%d",kq);
}
