#include <stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
int tong ( int x, int y, int z, int t, int u ,int v);
void xuat ( int d, int d1, int d2);
void main ()
{
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	int kq=tong(d,d1,d2);
	xuat (kq);
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf ("%d%d%d%d%d%d", &x, &y,&z,&t,&u,&v);
}
int tong ( int x, int y, int z, int t, int u ,int v)
{
	int a=0;
	int b=0;
	int c=0;
	if ((1<=x&&x<=3)&&(1<=y&&y<=3)&&(1<=z&&z<=3)&&(1<=t&&t<=3)&&(1<=u&&u<=3)&&(1<=v&&v<=3))
	{
		if (x>y)
			a=3;
			b=0;
		if(x<y)
			a=0;
			b=3;
		if (x=y)
			a=1;
			b=1;
		{
			if (z>t)
				a=3;
				c=0;
			if (z<t)
				a=0;
				c=3;
			if (z=t)
				a=1;
				c=1;
		{
				if (u>v)
				b=3;
				c=0;
			if (u<v)
				b=0;
				c=3;
			if (u=v)
				b=1;
				c=1;
			}
		}
		d=a++;
		printf ("%d", d);
		d1=b++;
		printf ("%d", d1);
		d2=c++;
		printf ("%d",d2);
}
void xuat ( int kq)
{
	printf ("%d", kq);
}

					
		
			
		
	
		



		
	



