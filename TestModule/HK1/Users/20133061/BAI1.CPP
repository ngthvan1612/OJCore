#include<stdio.h>
void xuat(int diema,int diemb,int diemc);
void nhap(int &x,int &y,int &z,int &u,int &t,int &v);
int sodiem(int x,int y,int z,int u,int t,int v);
void main()
{
	int x,y,z,u,t,v;
	nhap(x,y,z,u,t,v);
	int kq=sodiem(x,y,z,u,t,v);
	xuat(x,y,y);
}
void nhap(int &x,int &y,int &z,int &u,int &t,int &v)
{
	scanf("%d %d %d %d %d %d",&x,&y,&z,&u,&t,&v);
}
int sodiem(int x,int y,int z,int u,int t,int v)
{
	int diem11,diem22,diem33,diem1,diem2,diem3,diem4;
	int diema,diemb,diemc;

	if  ((x>0)&&(x<4)&& (y>0)&&(y<4))
	{
		if (x==y)
		diem1=1;
		if (x>y) 
		diem2=3;
		if (x-y==-2)
			diem3=3;
		else
		diem4=0;
		
	}
	if ((z<0)&&(z<4)&& (t>0)&&(t<4))
	{
		if (z==t)
		diem1=1;
		if (z>t) 
		diem2=3;
		if (z-t==-2)
			diem3=3;
		else
		diem4=0;
		
	}
	if ((u<0)&&(u<4)&& (v>0)&&(v<4))
	{
		if (u==v)
		diem1=1;
		if (u>v) 
		diem2=3;
		if (u-v==-2)
			diem3=3;
		else
		diem4=0;
	}
	diem11=diem1+diem2+diem3+diem4;
	diem22=diem1+diem2+diem3+diem4;
	diem33=diem1+diem2+diem3+diem4;

	diema=diem11+diem22;
	return diema;
	diemb=diem22;
	return diemb;
	diemc=diem33;
	return diemc;
}
void xuat(int diema,int diemb,int diemc)
{
	printf("%d %d %d",diema,diemb,diemc);
}