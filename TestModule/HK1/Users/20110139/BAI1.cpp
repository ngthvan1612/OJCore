#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int tinhdiem(int x, int y, int z, int t, int u, int v);
void xuat(int a, int  b, int c);
int main()
{
	int x,y,z,u,t,v;
	nhap(x,y,z,t,u,v);
	int a,b,c;
	int tinhdiem(int a,int b,int c);
	xuat(a,b,c);
	return 0;
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d %d %d %d %d %d",&x ,&y ,&z ,&t ,&u ,&v);
}
void xuat(int a, int  b, int c)
{
	printf("%d %d %d",a ,b ,c);
}
int tinhdiem(int x, int y, int z, int t, int u, int v)
{
	int a1,a2,b1,b2,c1,c2 = 0;
	if(x==1 && y==3){
		a1=3;
		b1=1;
		return 0;
	}
	else if(x==2 && y==2){
		a1=b1=1;
		return 0;
	}
	else(x==3 && y==1);{
		a1=0;
		b1=3;
		return 0;
	}
	if(z==1 && t==3){
		a2=3;
		c1=1;
		return 0;
	}
	
    else if(z==2 && t==2){
		a2=c1=1;
		return 0;
	}
	else(z==3 && t==1);{
		a2=0;
		c1=3;
		return 0;
	}
	if(u==1 && v==3){
		b2=3;
		c2=1;
		return 0;
	}
	
    else if(u==2 && v==2){
		c2=b2=1;
		return 0;
	}
	else(u==3 && v==1);{
		b2=0;
		c2=3;
		return 0;
	}
	int a = a1 + a2;
	int b = b1 + b2;
	int c = c1 + c2;
	return 0;
}


