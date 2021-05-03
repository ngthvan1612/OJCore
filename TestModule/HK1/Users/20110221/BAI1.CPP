#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}

void xuat(int k1,int k2, int k3)
{
	printf("%d %d %d",k1,k2,k3);
}

int tinh(int a, int b)
{
	if(a==b) return 1;
	if(a==1&&b==2)
		return 0;
	if(a==2&&b==3)
		return 0;
	if(a==3&&b==1)
		return 0;
    	return 3;
}

void main()
{
	int a1,b1,a2,c1,b2,c2;
	nhap(a1,b1,a2,c1,b2,c2);
	int res1=tinh(a1,b1)+tinh(a2,c1);
	int res2=tinh(b1,a1)+tinh(b2,c2);
	int res3=tinh(c1,a2)+tinh(c2,b2);
	xuat(res1,res2,res3);
}