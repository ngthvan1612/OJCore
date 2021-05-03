#include<stdio.h>

void nhap(int &x,&y,&z,&t,&u,&v);
int kt1(int x,y);
int kt2(int x,t);
int kt3(int u,v);
void xuat(int a,b,c);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a,b,c;
	int kt1=kt2=kt3=kq(a,b,c);

}


void nhap(int &x,&y,&z,&t,&u,&v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}



int kt1(int x,y)
{
	int a==b==c=0;
	if(x>y)
		int a==a+3;
	if(x=y)
		int a==b==a+1;
	if(x<y)
		int b==b+3;
	return 0;

}

int kt2(int x,t)
{
	if(x>t)
		a==a+3;
	if(x=t)
		a==a+1;
		c==c+1;
	if(x<t)
		c==c+3;
	return o;
}
int kt3(int u,v)
{
	if(u>v)
		b==b+3;
	if(u=v)
		b==b+1;
		c==c+1;
	if(u<v)
		c==c+3;
	return o;
}


void xuat(int a,b,c)
{
	printf("%d%d%d",a,b,c);
}
