#include<stdio.h>

int main()
{
	int a=0,b=0,c=0;
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuly(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
	return 0;
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void xuly(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c)
{
	if (x==1)
		switch(y)
		{
			case 1:
				a=0;
				b=0;
				break;
			case 2:

		}
}
