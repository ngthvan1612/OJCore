#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void kq1(int x,int y);
void xuat(int l);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	kq1(x,y);
	kq2(z,t);
	kq3(u,v);
	xuat(kq1,kq2,kq3);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int l)
{
	printf("%d",l);
}
void kq1(int x,int y)
{
	if(x=1)
		int a;
		if(y=1)
			a=1;
		if(y=2)
			a=0;
		else
			a=3;
	if(a=2)
		int b;
		if(y=1)
			b=3;
		if(y=2)
			b=1;
		else
			b=0;
	if(a=3)
		int c;
		if(y=1)
			c=0;
		if(y=2)
			c=3;
		else
			c=1;
}
