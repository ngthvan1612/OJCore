#include<stdio.h>
void nhap(int&x);
int kiemtra(int &x,int &y,int &dem1,int &dem2);
void main()
{
	int dem1=0,dem2=0,dem3=0;
	int x,y,z,t,u,v;
	nhap(x);
	nhap(y);
	nhap(z);
	nhap(t);
	nhap(u);
	nhap(v);
	kiemtra(x,y,dem1,dem2);
	kiemtra(z,t,dem1,dem3);
	kiemtra(u,v,dem2,dem3);
	printf("%d %d %d",dem1,dem2,dem3);
}
void nhap(int &x)
{
	scanf("%d",&x);
}
int kiemtra(int &x,int &y,int &dem1,int &dem2)
{	if (x==1)
	{
		if (y==2) dem2=dem2+3;
		if (y==3) dem1=dem1+3;
		if (y==1) 
		{
			dem1=dem1+1;
			dem2=dem2+1;
		}
	}
	if (x==2)
	{
		if (y==1) dem1=dem1+3;
		if (y==2) 
		{
			dem1=dem1+1;
			dem2=dem2+1;
		}
		if (y==3)
			dem2=dem2+3;
	}

	if (x==3)
	{
		if (y==1) dem2=dem2+3;
		if (y==2) dem1=dem1+3;
		if (y==3) 
		{
			dem1=dem1+1;
			dem2=dem2+1;
		}
	}
	return dem1;
	return dem2;
}