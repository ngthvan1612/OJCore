#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int kiemTra(int a, int b);
void xuat(int x);
void tinh(int x, int y, int z, int t, int u, int v);

int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinh(x,y,z,t,u,v);
	return 0;
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
int kiemTra(int a, int b)
{
	if ((a==1 && b==3)||(a==3 && b==2)||(a==2 && b==1))
		return 1;
	else 
		if (a==b)
			return 0;
		else 
			return -1;
}
void xuat(int x)
{
	printf("%d ", x);
}
void tinh(int x, int y, int z, int t, int u, int v)
{
	int a=0,b=0,c=0;
	if (kiemTra(x,y)==1)
		{
			a=a+3;
		}
	else 
		if (kiemTra(x,y)==0)
		{
			a=a+1;
			b=b+1;
		}
		else b=b+3;
	if (kiemTra(z,t)==1)
		{
			a=a+3;
		}
	else 
		if (kiemTra(z,t)==0)
		{
			a=a+1;
			c=c+1;
		}
		else c=c+3;
	if (kiemTra(u,v)==1)
		{
			b=b+3;
		}
	else 
		if (kiemTra(u,v)==0)
		{
			b=b+1;
			c=c+1;
		}
		else c=c+3;
	xuat(a);xuat(b);xuat(c);
}
