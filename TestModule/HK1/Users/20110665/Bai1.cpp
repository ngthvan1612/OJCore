#include<stdio.h>
void xuat(int kq1,int kq2,int kq3);
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int diemA(int x,int y,int z,int t);
int diemB(int x,int y,int u,int v);
int diemC(int z,int t,int u,int v);



void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq1=diemA(x,y,z,t);
	int kq2=diemB(x,y,u,v);
	int kq3=diemC(z,t,u,v);
	xuat(kq1,kq2,kq3);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int diemA(int x,int y,int z,int t)
{
	int diemA=0;
	if (1<=x&&x<=3&&1<=y&&y<=3&&1<=z&&z<=3&&1<=t&&t<=3)
	{
		if (x==1)
			if (y==3)
				diemA=diemA+3;
		if (x==2)
			if (y==1)
				diemA=diemA+3;
		if (x==3)
			if (y==2)
				diemA=diemA+3;
		if (x==y)
			diemA=diemA+1;
		if (z==1)
			if (t==3)
				diemA=diemA+3;
		if (z==2)
			if (t==1)
				diemA=diemA+3;
		if (z==3)
			if (t==2)
				diemA=diemA+3;
		if (z==t)
			diemA=diemA+1;
	}
	return diemA;
}
int diemB(int x,int y,int u,int v)
{
	int diemB=0;
	if (1<=x&&x<=3&&1<=y&&y<=3&&1<=u&&u<=3&&1<=v&&v<=3)
	{
		if (y==1)
			if (x==3)
				diemB=diemB+3;
		if (y==2)
			if (x==1)
				diemB=diemB+3;
		if (y==3)
			if (x==2)
				diemB=diemB+3;
		if (x==y)
			diemB=diemB+1;
		if (u==1)
			if (v==3)
				diemB=diemB+3;
		if (u==3)
			if (v==2)
				diemB=diemB+3;
		if (u==2)
			if (v==1)
				diemB=diemB+3;
		if (u==v)
			diemB=diemB+1;
	}
	return diemB;
}
int diemC(int z,int t,int u,int v)
{
	int diemC=0;
	if (1<=z&&z<=3&&1<=t&&t<=3&&1<=u&&u<=3&&1<=v&&v<=3)
	{
		if (t==1)
			if (z==3)
				diemC=diemC+3;
		if (t==3)
			if (z==2)
				diemC=diemC+3;
		if (t==2)
			if (z==1)
				diemC=diemC+3;
		if (t==z)
			diemC=diemC+1;
		if (v==1)
			if (u==3)
				diemC=diemC+3;
		if (v==3)
			if (u==2)
				diemC=diemC+3;
		if (v==2)
			if (u==1)
				diemC=diemC+3;
		if (u==v)
			diemC=diemC+1;
	}
	return diemC;
}
void xuat(int kq1,int kq2,int kq3)
{
	printf("%d %d %d",kq1,kq2,kq3);
}






