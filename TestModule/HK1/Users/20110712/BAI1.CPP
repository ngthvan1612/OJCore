#include <stdio.h>

void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void tinhDiem(int x, int y,int &a, int &b);
void xuat(int a,int b,int c);

int main()
{
	int x,y,z,t,u,v,a,b,c;
	a=0;
	b=0;
	c=0;
	nhap(x,y,z,t,u,v);
	tinhDiem(x,y,a,b);
	tinhDiem(z,t,a,c);
	tinhDiem(u,v,b,c);

	xuat(a,b,c);

	return 0;
}

void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}

void tinhDiem(int x, int y,int &a, int &b)
{
	if(x == y)
	{
		a+=1;
		b+=1;
	}
	else 
	{
		if(x - y == 1 || x  - y ==-2)
			a +=3;
		else 
			b+=3;
	}
}

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}