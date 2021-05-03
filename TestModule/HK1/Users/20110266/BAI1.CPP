#include<stdio.h>
void tinhdiem(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
void diemtran(int x,int y, int &a,int &b);

void main()
{
	int x,y,z,t,u,v;
	scanf("%d %d %d %d %d %d",&x,&y,&z,&t,&u,&v);
	int a,b,c;
	tinhdiem(x,y,z,t,u,v,a,b,c);
	printf("%d %d %d",a,b,c);
}

void tinhdiem(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	a=0;
	b=0;
	c=0;
	diemtran(x,y,a,b);
	diemtran(z,t,a,c);
	diemtran(u,v,b,c);
}

void diemtran(int x,int y, int &a,int &b)
{
	if(x>y)
		a=a+3;
	else
		if(x<y)
			b=b+3;
		else
		{
			a=a+1;
			b=b+1;
		}
}