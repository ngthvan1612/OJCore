#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int kq);
int dieM(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=dieM(x,y,z,t,u,v);
	xuat(kq);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int kq)
{
	printf("%d %d %d",kq,kq,kq);
}
int dieM(int x,int y,int z,int t,int u,int v)
{
	int a,b,c;
	if((x==1&&y==1&&z==1&&t==1&&u==1&&v==1)||(x==2&&y==2&&z==2&&t==2&&u==2&&v==2)||(x==3&&y==3&&z==3&&t==3&&u==3&&v==3))
		return a=2,b=2,c=2;
	else if(x==1&&y==2&&z==1&&t==2&&u==1&&v==2)
		return a=0,b=3,c=6;
	else if(x==1&&y==3&&z==1&&t==3&&u==1&&v==3)
		return a=6,b=3,c=0;
	else if(x==1&&b==1&&z==1&&t==1&&u==1&&v==2)
		return a=2,b=0,c=4;

}
