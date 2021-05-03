#include <stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int diemchoi(int x,int y,int z,int t,int u,int v);
void xuat(int kq);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=diemchoi(x,y,z,t,u,v);
	xuat(kq);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",x,y,z,t,u,v);
}
int diemchoi(int x,int y,int z,int t,int u,int v)
{
	int A=0;
	int B=0;
	int C=0;
	if(x>y)
	{
		A=A+3;
	}
	if (x<y)
	{
		B=B+3;
	}
	if (x==y)
	{
		A=A+1;
		C=C+1;
	}
	if (z>t)
	{
		A=A+3;
	}
	if(z<t)
	{
		C=C+3;
	}
	if(z==t)
	{
		A=A+1;
		C=C+1;
	}
	if(u>v)
	{
		B=B+3;
	}
	if (u<v)
	{
		C=C+3;
	}
	if (u==v)
	{
		B=B+1;
		C=C+1;
	}
	printf(" %d",A);
	printf(" %d",B);
	printf(" %d",C);
	return 1;
}
void xuat(int kq)
{
	if (kq==1){
		printf("%d",kq);
	}
}