#include<stdio.h>
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	diem(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t);
}
void diem(int x,int y,int z,int t,int u,int v)
{
	int dA=0,dB=0,dC=0;
	if((x==1 && y==3)||(x==3 && y==2)||(x==2 && y==1))
	{
		dA=dA+1;
		dC=dC-1;
	}
	if((z==1 && t==3)||(z==3 && t==2)||(z==2 && t==1))
	{
		dA=dA+1;
	}

}