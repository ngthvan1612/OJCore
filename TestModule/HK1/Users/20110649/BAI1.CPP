#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int tinh_diem(int x, int y);
void xuat(int A, int B, int C);
void main()
{
	int x, y, z, t, u, v;
	nhap(x,y,z,t,u,v);
	int A=tinh_diem(x,y)+tinh_diem(z,t);
	int B=tinh_diem(y,x)+tinh_diem(u,v);
	int C=tinh_diem(t,z)+tinh_diem(v,u);
	xuat(A,B,C);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int A, int B, int C)
{
	printf("%d %d %d",A,B,C);
}
int tinh_diem(int x, int y)
{
	if(x==y)
		return 1;
	if(x==1)
	{
		if(y==2)
			return 0;
		return 3;
	}
	if(x==2)
	{
		if(y==1)
			return 3;
		return 0;
	}
	if(y==1)
		return 0;
	return 3;
}
