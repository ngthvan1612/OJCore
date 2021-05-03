#include<stdio.h>
void Diem(int x, int y, int z, int t, int u, int v, int &A, int &B, int &C);
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void xuat(int A, int B, int C);  

void main()
{
    int A,B,C;
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	Diem(x,y,z,t,u,v,A,B,C);
	xuat(A,B,C);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
void xuat(int A, int B, int C)
{
	printf("%d %d %d", A, B, C);
}
void Diem(int x, int y, int z, int t, int u, int v, int &A, int &B, int &C)
{
	 A=0;
	 B=0;
	 C=0;
	if((x==1&&y==2)||(x==2&&y==3)||(x==3&&y==1))
		B=B+3;
	if((x==1&&y==3)||(x==3&&y==2)||(x==2&&y==1))
		A=A+3;
	if((x==1&&y==1)||(x==2&&y==2)||(x==3&&y==3))
	{
		A=A+1;
		B=B+1;
	}
	if((z==1&&t==2)||(z==2&&t==3)||(z==3&&t==1))
		C=C+3;
	if((z==1&&t==3)||(z==3&&t==2)||(z==2&&t==1))
		A=A+3;
	if((z==1&&t==1)||(z==2&&t==2)||(z==3&&t==3))
	{
		A=A+1;
		C=C+1;
	}
	if((u==1&&v==2)||(u==2&&v==3)||(u==3&&v==1))
		C=C+3;
	if((u==1&&v==3)||(u==3&&v==2)||(u==2&&v==1))
		B=B+3;
	if((u==1&&v==1)||(u==2&&v==2)||(u==3&&v==3))
	{
		B=B+1;
		C=C+1;
	}
}