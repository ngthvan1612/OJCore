#include<stdio.h>
void nhap(int &x, int &y,int &z, int &t, int &u, int &v);
int tinhDiem(int x, int y, int z, int t);
void xuat(int x, int y, int z, int t, int u, int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuat(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinhDiem(int x, int y, int z, int t)
{	
	int diem;
	if((x-y==-2||x-y==1)&&(z-t==-2||z-t==1))
		diem=6;
	if((x-y==-2||x-y==1)&&(z-t==2||z-t==-1))
		diem=3;
	if((x-y==-2||x-y==1)&&z==t)
		diem=4;
	if((x-y==2||x-y==-1)&&(z-t==-2||z-t==1))
		diem=3;
	if((x-y==2||x-y==-1)&&(z-t==2||z-t==-1))
		diem=0;
	if((x-y==2||x-y==-1)&&z==t)
		diem=1;
	if(x==y&&(z-t==-2||z-t==1))
		diem=4;
	if(x==y&&(z-t==2||z-t==-1))
		diem=1;
	if(x==y&&z==t)
		diem=2;
	return diem;
}
void xuat(int x, int y, int z, int t, int u, int v)
{
	int diemA=tinhDiem(x,y,z,t);
	int diemB=tinhDiem(u,v,y,x);
	int diemC=tinhDiem(t,z,v,u);
	printf("%d %d %d",diemA, diemB, diemC);
}

