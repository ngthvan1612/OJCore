#include <stdio.h>
void diem (int x, int y, int &a,int &b);
int main ()
{
	int x,y,z,t,u,v;
	scanf ("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int a=0;
	int b=0;
	int c=0;
	diem (x,y,a,b);
	diem (z,t,a,c);
	diem (u,v, b,c);
	printf ("%d %d %d", a,b,c);
}
void diem (int x, int y, int &a,int &b)
{
	if (x==1 && y==3)
		a=a+3;
	else if ( y==1 &&x==3)
		b= b+3;
	if (x==3 && y== 2)
		a=a+3;
	else if (y==3 && x==2)
		b= b+3;
	if ( x==2 && y ==1)
		a=a+3;
	else if  (y==2 && x==1)
		b= b+3;
	if (x==y)
	{
		a=a+1;
		b=b +1;
	}
}
