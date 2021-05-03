#include<stdio.h>
void nhap(long &x,long&y,long&z,long &t,long&u,long&v);
void tinh(long x,long y,long z,long t,long u,long v);
void main()
{
	long x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinh(x,y,z,t,u,v);
}
void nhap(long &x,long&y,long&z,long &t,long&u,long&v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinh(long x,long y,long z,long t,long u,long v)
{
	int diemA=0;
	int diemB=0;
	int diemC=0;
	if(x==1 && y==3 || x==3&&y==2||x==2 && y==1)
	{
		diemA=diemA+3;
	}
	else if(y==1 && x==3 || y==3&&x==2||y==2 && x==1)
	{
		diemB=diemB+3;
	}
	else
	{
		diemB=diemB+1;
		diemA=diemA+1;
	}
	if(z==1 && t==3 || z==3&&t==2||z==2 && t==1)
	{
		diemA=diemA+3;
	}
	else if(t==1 && z==3 || t==3&&z==2||t==2 && z==1)
	{
		diemC=diemC+3;
	}
	else
	{
		diemC=diemC+1;
		diemA=diemA+1;
	}
	if(u==1 && v==3 || u==3&&v==2||u==2 && v==1)
	{
		diemB=diemB+3;
	}
	else if(v==1 && u==3 || v==3&&u==2||v==2 && u==1)
	{
		diemC=diemC+3;
	}
	else
	{
		diemC=diemC+1;
		diemB=diemB+1;
	}
	printf("%d %d %d",diemA,diemB,diemC);
}


