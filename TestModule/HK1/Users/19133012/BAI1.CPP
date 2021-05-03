#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int a,int b,int c);
int tinh(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
int dau(int m,int n,int &q,int &w);
void main()
{
	int x,y,z,t,u,v;
	int a,b,c;
	a = b = c =0;
	nhap(x,y,z,t,u,v);
	tinh(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);

}
int dau(int m,int n,int &q,int &w)
{
	if( m == 1 && n == 3)
	{
		q = q+3;
		return 0;
	}
	if( m == 3 && n == 2 )
	{
		q = q+3;
		return 0;
	}
	if( m == 2 && n == 1 )
	{	
		q = q+3;
		return 0;
	}
	if( m == n)
	{
		q++;
		w++;
		return 0;
	}
	else
		w = w+3;
	return 0;
}
int tinh(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{

	dau(x,y,a,b);
	dau(z,t,a,c);
	dau(u,v,b,c);

	return 0;

}
void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}