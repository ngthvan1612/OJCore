#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinhdiem(int x, int y,int z,int t, int u,int v);
void xuat(int kq,int A,int B,int C);
void main()
{
	int A,B,C;
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=tinhdiem(x,y,z,t,u,v);
	xuat(kq,A,B,C);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinhdiem(int x, int y,int z,int t, int u,int v)
{
	int A=0,B=0,C=0;
	if(x>y)
	{
		A=A+3;
    if(x=y)
		B=B+1;
	    A=A+1;
	if(x<y)
		B=B+3;
	}
    if(z>t)
	{
		A=A+3;
	if(z=t)
		A=A+1;
	    C=C+1;
    if(z<t)
		C=C+3;
	}
    if(u>v)
	{
		B=B+3;
	if(u=v)
		B=B+1;
	    C=C+1;
    if(u<v)
		C=C+3;
	}
	 return A,B,C;

}
void xuat(int kq,int A,int B,int C)
{
	printf("%d%d%d", A,B,C);
}