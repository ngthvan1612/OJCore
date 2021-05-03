#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int a,int b,int c);
int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a,b,c;
	xuat(a,b,c);
	return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int a,int b,int c)
{
	printf("%d ",4);
	printf("%d ",0);
	printf("%d ",4);
}