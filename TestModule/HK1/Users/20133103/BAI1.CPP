#include<stdio.h>

void baBanThiDauOanTuTi(int x,int y,int z,int t,int u,int v);
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int x);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
    baBanThiDauOanTuTi(x,y,z,t,u,v);
}
void baBanThiDauOanTuTi(int x,int y,int z,int t,int u,int v)
{
	int A=0;
	int B=0;
	int C=0;
	if(A==x && B==y)
	{
		B=B+3;
	}
	else if(A==z && C==t)
	{
		C=C+3;
	}
	else if(B==u && C==v)
	{
		C=C+3;
	}
	else if((A==x && B==x)||(A==y && B==y)||( A==z && B==z))
	{
		A=A+1;
		B=B+1;
	}
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int x)
{
	printf("%3d ",x);
}
