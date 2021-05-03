#include <stdio.h>

void nhap(int &x, int &y, int&z, int &t, int &u, int&v)
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
void nhap(int &x, int &y)
{
	scanf("%d%d", &x,&y);
}

int kq1(int x, int y)
{
	int c = 0;
	if (x==1 && y ==3)
		c = 1;
	else if(x==3 && y==2)
		c = 1;
	else if (x==2 && y==1)
		c = 1;
	else if (x==3 && y == 1)
		c = 2;
	else if(x==2 && y == 3)
		c = 2;
	else if (x==1 && y ==2 )
		c = 2;
	else if(x==y)
		c = 3;
	else
		c = 0;
	return c;
}
void xuLi(int x, int y, int &kqA, int &kqB)
{
	if (kq1(x,y)==1)
		{
			kqA += 3;
			kqB += 0;
		}
	if(kq1(x,y)==2)
		{
			kqA += 0;
			kqB += 3;
		}
	if(kq1(x,y)==3)
		{
			kqA +=1;
			kqB += 1;
		}
	if(kq1(x,y)==0)
		{
			kqA +=0;
			kqB +=0;
		}

}

void main()
{
	int kqA = 0;
	int kqB = 0;
	int kqC = 0;
	int x, y, z, t, u, v;
	nhap(x,y,z,t,u,v);
	xuLi( x, y, kqA, kqB);
	xuLi( z, t, kqA, kqC);
	xuLi( u, v, kqB, kqC);
	printf("%d %d %d", kqA,kqB,kqC);
}
