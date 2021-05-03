#include <stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int kiemtra(int a,int b);
int diemcuaA(int e,int f);
void main()
{
	int x,y,z,t,u,v;
	int a,b,g,h,j,k;
	nhap(x,y,z,t,u,v);
	int A=0;
	int B=0;
	int C=0;
	if(diemcuaA(x,y)==3)
		{a=3;b=0;}
	if(diemcuaA(x,y)==0)
		{a=0;b=3;}
	if(diemcuaA(x,y)==1)
		{a=1;b=1;}
	A=a; B=b;


	if(diemcuaA(z,t)==3)
		{g=3;h=0;}
	if(diemcuaA(z,t)==0)
		{g=0;h=3;}
	if(diemcuaA(z,t)==1)
		{g=1;h=1;}
	A=A+g; C=h;

	if(diemcuaA(u,v)==3)
		{j=3;k=0;}
	if(diemcuaA(u,v)==0)
		{j=0;k=3;}
	if(diemcuaA(u,v)==1)
		{j=1;k=1;}
	B=b+j; C=h+k;
	printf("%d %d %d",A,B,C);
}

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}

int kiemtra(int a,int b)
{
	int d;
	if(a==1 && b==3 || a==3 && b==2 || a==2 && b==1)	//a thang
		d=3;
	else if(a==3 && b==1 || a==2 && b==3 || a==1 && b==2)	//a thua
		d=0;
	else if(a==b)	//hoa
		d=1;
	return d;
}
int diemcuaA(int e,int f)
{
	if(kiemtra(e,f)==3)
		return 3;
	else if(kiemtra(e,f)==0)
		return 0;
	else if(kiemtra(e,f)==1)
		return 1;
	return 10;
}