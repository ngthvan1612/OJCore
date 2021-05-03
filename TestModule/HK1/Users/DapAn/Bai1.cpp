#include<stdio.h>
void tinhDiem(int x, int y, int &a, int &b);
void xuLy(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c);
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void xuat(int a, int b, int c);
void main()
{
	int x, y, z, t, u, v, a, b, c;
	nhap(x,y,z,t,u,v);
	xuLy(x, y, z, t, u, v, a, b, c);
	xuat(a, b, c);
}
void xuLy(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c)
{
	a = 0;
	b = 0;
	c = 0;
	tinhDiem(x,y,a,b);
	tinhDiem(z,t,a,c);
	tinhDiem(u,v,b,c);
}
void tinhDiem(int x, int y, int &a, int &b)
{
	if (x==y)
	{
		a++;
		b++;
	} 
	else
		if ((x==1 && y==2) || (x==2 && y==3) || (x==3 && y==1))
			b+=3;
		else
			a+=3;
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d",a,b,c);
}