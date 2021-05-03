#include <stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
void xuat (int a[]);
void tinhdiem (int a[], int x, int y, int z, int t, int u , int v);

void main ()
{
	int x,y,z,t,u,v;
	int a[10];
	nhap(x,y,z,t,u,v);
	tinhdiem(a,x,y,z,t,u,v);
	xuat(a);
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat (int a[])
{
	for (int i=0; i<3; i++)
	printf("%d ",a[i]);
}
void tinhdiem (int a[], int x, int y, int z, int t, int u , int v)
{
	int da,db,dc;
	a[0]=0;
	a[1]=0;
	a[2]=0;
	//a va b x va y 0 1
	if (((x==1) &&(y==3)) || ((x==3) &&(y==1)))
		if (x<y)
			a[0]+=3;
		else 
			a[1]+=3;
	else
		if (x>y)
			a[0]+=3;
		else 
			a[1]+=3;
	if (x==y)
	{
		a[0]++;
		a[1]++;
	}
	// a va c
	if (((z==1) &&(t==3)) || ((z==3) &&(t==1)))
		if (z<t)
			a[0]+=3;
		else 
			a[2]+=3;
	else
		if (z>t)
			a[0]+=3;
		else 
			a[2]+=3;
	if (z==t)
	{
		a[0]++;
		a[2]++;
	}
	//b va c
	if (((u==1) &&(v==3)) || ((u==3) &&(v==1)))
		if (u<v)
			a[1]+=3;
		else 
			a[2]+=3;
	else
		if (u>v)
			a[1]+=3;
		else 
			a[2]+=3;
	if (u==v)
	{
		a[1]++;
		a[2]++;
	}
}