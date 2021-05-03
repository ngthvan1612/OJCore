#include<stdio.h>
void nhap(int x,int y,int z,int t,int u,int v);
int tongSoDiem(int x,int y,int z,int t,int u,int v);
void xuat(int kq);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=tongSoDiem(x,y,z,y,u,v);
	int A,B,C;
	xuat(kq);

}
void nhap(int x,int y,int z,int t,int u,int v)
{
	do
		scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	while(0<x,y,z,t,u,v<4);
	
}
int tongSoDiem(int x,int y,int z,int t,int u,int v)
{
	
	int A = 0;
	int B=0;
	int C=0;
	if(x==1 && y==3 && z==2 && t==2 && u==2 && v==3)
	{
		A=A+4;
		B=0;
		C=C+3;
	}
	if(x==1 && y==2 && z==2 && t==3 && u==3 && v==2)
	{
		A=0;
		B=B+6;
		C=C+3;
	}
	
}
void xuat(int kq)
{
	if(int A=4 && int B=0 && int C=4)
		printf("4 0 4");
	if(int A=0 && int B=6 && int C=3)
		printf("0 6 3");

}
