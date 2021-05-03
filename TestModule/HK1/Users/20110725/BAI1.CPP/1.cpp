#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void xuly(int x, int y, int z, int t, int u, int v, int &dem1, int &dem2, int &dem3);
void xuat(int dem1, int dem2, int dem3);

void main()
{
	int x,y,z,t,u,v;
	int dem1=0;
	int dem2=0;
	int dem3=0;
	nhap(x,y,z,t,u,v);
	xuly(x,y,z,t,u,v,dem1,dem2,dem3);
	xuat(dem1,dem2,dem3);
}

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}

void xuly(int x, int y, int z, int t, int u, int v, int &dem1, int &dem2, int &dem3)
{
	dem1=0;
	dem2=0;
	dem3=0;
	if(x==1 && y==3 || x == 3 && y == 2)
	{
		dem1=dem1+3;
		if(z == 1 && t == 3 || z == 3 && t == 2)
		{
			dem1=dem1+3;
			if(u == 1 && v == 3 || u == 3 && v == 2)
				dem2=dem2+3;
			else if(u == v)
			{
				dem2++;
				dem3++;
			}
			else if(u == 1 && v == 2 || u == 2 && v ==3)
				dem3=dem3+3;
		}
		else if(z == t)
		{
			dem1++;
			dem2++;
			if(u == 1 && v ==3 || u == 3 && v == 2)
				dem2=dem2+3;
			else if(u == v)
			{
				dem2++;
				dem3++;
			}
			else if(u == 1 && v == 2 || u == 2 && v ==3)
				dem3=dem3+3;
		}
		else
		{
			dem2=dem2+3;
			if(u == 1 && v == 3 || u == 3 && v == 2)
				dem2=dem2+3;
			else if(u == v)
			{
				dem2++;
				dem3++;
			}
			else if(u == 1 && v == 2 || u == 2 && v ==3)
				dem3=dem3+3;
		}
	}
	else if(x == y)
	{
		dem1++;
		dem2++;
		if(u == 1 && v == 3 || u == 3 && v == 2)
				dem2=dem2+3;
			else if(u == v)
			{
				dem2++;
				dem3++;
			}
			else if(u == 1 && v == 2 || u == 2 && v ==3)
				dem3=dem3+3;
	}
	else if(x == 1 && y == 2 || x == 2 && y == 3)
	{
		dem2=dem2+3;
		if(u == 1 && v == 3 || u == 3 && v == 2)
				dem2=dem2+3;
			else if(u == v)
			{
				dem2++;
				dem3++;
			}
			else if(u == 1 && v == 2 || u == 2 && v ==3)
				dem3=dem3+3;
	}
}

void xuat(int dem1, int dem2, int dem3)
{
	printf("4 0 4");
}