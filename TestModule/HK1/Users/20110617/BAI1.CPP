#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int diemso(int x, int y, int z, int t, int u, int v, int &A, int &B, int &C);
void xuat(int kq, int A, int B, int C);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A,B,C;
	int kq= diemso(x,y,z,t,u,v,A,B,C);
	xuat(kq,A,B,C);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int diemso(int x, int y, int z, int t, int u, int v, int &A, int &B, int &C)
{
	A=0;
	B=0;
	C=0;
	if((x==1 && y==3) || (x==2 && y==1) || (x==3 && y==2))
	{
		A= A+3;B=B+0;
	}
	else if((x==3 && y==1) || (x==1 && y==2) || (x==2 && y==3))
	{
		B=B+3;A=A+0;
	}
	else 
	{
		A=A+1;B=B+1;
	}
	if((z==1 && t==3) || (z==2 && t==1) || (z==3 && t==2))
	{
		A=A+3; C=C+0;
	}
	else if((z==3 && t==1) || (z==1 && t==2) || (z==2 && t==3))
	{
		C=C+3; A=A+0;
	}
	else 
	{
		A=A+1; C=C+1;
	}
	if ((u==1 && v==3) || (u==2 && v==1) || (u==3 && v==2))
	{
		B=B+3; C=C+0;
	}
	else if((u==3 && v==1) || (u==1 && v==2) || (u==2 && v==3))
	{
		C=C+3; B=B+0;
	}
	else 
	{
		C=C+1;B=B+1;
	}
	return 1;
}
void xuat(int kq, int A, int B, int C)
{
	if(kq==1)
	printf("%d %d %d",A,B,C);
}

