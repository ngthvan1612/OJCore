#include<stdio.h>
void nhap(int&x,int&y,int&z,int&t,int&u,int&v);
int kiemtra(int x,int y,int z,int t,int u,int v,int&diemA,int&diemB,int&diemC);
int kiemTraTungCap(int x,int y,int&dA,int&dB);
void xuat(int diemA,int diemB,int diemC);
void main()
{
	int x,y,z,t,u,v,diemA,diemB,diemC;
	nhap(x,y,z,t,u,v);
	int kq=kiemtra(x,y,z,t,u,v,diemA,diemB,diemC);
	xuat(diemA,diemB,diemC);
}
void nhap(int&x,int&y,int&z,int&t,int&u,int&v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int kiemtra(int x,int y,int z,int t,int u,int v,int&diemA,int&diemB,int&diemC)
{
	int dA,dB;
	diemA=0;
	diemB=0;
	diemC=0;
	kiemTraTungCap(x,y,dA,dB);
	diemA=diemA+dA;
	diemB=diemB+dB;
	kiemTraTungCap(z,t,dA,dB);
	diemA=diemA+dA;
	diemC=diemC+dB;
	kiemTraTungCap(u,v,dA,dB);
	diemB=diemB+dA;
	diemC=diemC+dB;
	return 0;	
}
int kiemTraTungCap(int x,int y,int&dA,int&dB)
{
	dA=0;
	dB=0;
    if(x==1 && y==3)
	    dA=dA+3;
	if(x==1 && y==2) 
		dB=dB+3;
	if(x==1 && y==1)
	{
		dA=dA+1;
		dB=dB+1;
	}
	if(x==2 && y==1)
		dA=dA+3;\
	if(x==2 && y==3)
		dB=dB+3;
	if(x==2 && y==2)
	{
		dA=dA+1;
		dB=dB+1;
	}
	if(x==3 && y==1)
		dB=dB+3;
	if(x==3 && y==2)
		dA=dA+3;
	if(x==3 && y==3)
	{
		dA=dA+1;
		dB=dB+1;
	}
	return 0;
}
void xuat(int diemA,int diemB,int diemC)
{
	printf("%d %d %d",diemA,diemB,diemC);
}



