#include<stdio.h>
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq1=diemA(x,y,z,t,u,v);
	int kq2=diemB(x,y,z,t,u,v);
	int kq3=diemC(x,y,z,t,u,v);
	xuat(kq1,kq2,kq3);
}
int diemA(int x,int y,int z,int t,int u,int v)
{	int diem=0
	if(baobuakeo(x,y)==0)
		dem=dem;
	if(baobuakeo(x,y)==1)
		diem=diem+3;
	if(baobuakeo(x,y)==2)
		diem=diem+1;
return diem;
}
int diemB(int x,int y,int z,int t,int u,int v)
{	int diem=0
	if(baobuakeo(z,t)==0)
		dem=dem;
	if(baobuakeo(z,t)==1)
		diem=diem+3;
	if(baobuakeo(z,t)==2)
		diem=diem+1;
return diem;
}
int diemC(int x,int y,int z,int t,int u,int v)
{	int diem=0
	if(baobuakeo(x,y)==0)
		dem=dem;
	if(baobuakeo(x,y)==1)
		diem=diem+3;
	if(baobuakeo(x,y)==2)
		diem=diem+1;
return diem;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int kq1,int kq2,int kq3)
{
	printf("%d%d%d",kq1,kq2,kq3);
}
int baobuakeo(int x,int y)
{
	if(x==1 && y==3)
		return 1;
	if(x==1 && y==1)
		return 2;
	if(x==1 && y==2)
		return 0;
	if(x==2 && y==3)
		return 0;
	if(x==2 && y==1)
		return 1;
	if(x==2 && y==2)
		return 2;
	if(x==3 && y==1)
		return 0;
	if(x==3 && y==2)
		return 1;
	if(x==3 && y==3)
		return 2;
}