#include<stdio.h>

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}

void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}

int diem(int a,int b)
{
	if (a==1 && b==3)
		return 3;
	if (a==3 && b==1)
		return 0;
	if (a==b)
		return 1;
	if (a>b)
		return 3;
	return 0;
}

int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A=diem(x,y)+diem(z,t);
	int B=diem(y,x)+diem(u,v);
	int C=diem(t,z)+diem(v,u);
	xuat(A,B,C);
	return 0;
}