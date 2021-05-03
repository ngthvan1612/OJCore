#include<stdio.h>
int ketqua( int x, int y);
void tinh ( int x, int y, int z, int t, int u, int v);
void main ()
{
	int x,y,z,t,u,v;
    scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
   int kt =	ketqua (x,y);
   tinh (x,y,z,t,u,v);


}

int ketqua( int x, int y)
{
	if (x==1 &&y==3|| x==2&&y==1||x==3&&y==2)
		return 3;
	else if (x==y)
		return 1;
	else 
		return 0;

}
void tinh ( int x, int y, int z, int t, int u, int v)
{
	int a=0;
	int b=0;
	int c=0;
	a += ketqua(x,y);
	b += ketqua(y,x);
	a += ketqua(z,t);
	c += ketqua(t,z);
	b += ketqua(u,v);
	c += ketqua(v,u);
	printf ("%d %d %d", a,b,c);
}

