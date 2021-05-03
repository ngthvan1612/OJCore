#include <stdio.h>
void xuat (int a, int b, int c);
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void tinhDiem(int x, int y, int z, int t, int u, int v,int &a, int &b, int &c);
int xuly(int x, int y);

void main()
{
	int a,b,c;
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinhDiem(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinhDiem(int x, int y, int z, int t, int u, int v,int &a, int &b, int &c)
{
	a=0;b=0;c=0;
	if(xuly(x,y)==1)
	{
		a = a+3;
		b +=0;
	}
	else if(xuly(x,y)==2)
	{
		a +=1;
		b +=1;
	}
	else if(xuly(x,y)==3) {
		a +=0;
		b +=3;
	}
	if(xuly(z,t)==1)
	{
		a = a+3;
		c +=0;
	}
	else if(xuly(z,t)==2)
	{
		a +=1;
		c +=1;
	}
	else if(xuly(z,t)==3) {
		a +=0;
		c +=3;
	}
	if(xuly(u,v)==1)
	{
		b = a+3;
		c +=0;
	}
	else if(xuly(u,v)==2)
	{
		b +=1;
		c +=1;
	}
	else if(xuly(u,v)==3) {
		b +=0;
		c +=3;
	}

}
int xuly(int x, int y)
{
	if((x==1 && y==3)||(x==3 && y==2)||(x==2 && y==1)) return 1;
	else if(x==y) return 2;
	else return 3;
}
void xuat (int a, int b, int c)
{
	printf("%d %d %d", a,b,c);
}