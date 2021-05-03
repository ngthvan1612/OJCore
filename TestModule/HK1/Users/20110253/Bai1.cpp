# include <stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
int Xuly (int a, int b, int c);
void xuat (int a, int b, int c);
void main ()
{
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	int a,b,c;
	int kq = Xuly (a,b,c);
	xuat (a,b,c);
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf ("%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int Xuly (int a, int b, int c)
{
	int d=0;
	int e=0;
	int f=0;
	if ((a==1 && b==3) || (a==1 && c==3))
	{
		d=d+3;
		e=e;
		f=f;
	}
	if ((a==2 && b==1) || (a==2 && c==1))
	{
		d=d+3;
		e=e;
		f=f;
	}
	if ((a==3 && b==2) || (a==3 && c==2))
	{
		d=d+3;
		e=e;
		f=f;
	}
	if (a==b)
	{
		d=d+1;
		e=e+1;
	}
	if (b==c)
	{
		e=e+1;
		f=f+1;
	}
	if (c==a)
	{
		d=d+1;
		f=f+1;
	}
	return kq;
}
void xuat (int a, int b, int c)
{
	printf ("%d %d %d ", a,b,c);
}