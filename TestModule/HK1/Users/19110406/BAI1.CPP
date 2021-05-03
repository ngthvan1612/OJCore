#include <stdio.h>
int compare(int x,int y);
void input(int &x,int &y,int &z,int &t,int &u,int &v);
void point(int &a,int &b,int x,int y);
void solve(int a,int b,int c,int x,int y,int z,int t,int u,int v);
int main()
{
	int a=0,b=0,c=0,x,y,z,t,u,v;
	input(x,y,z,t,u,v);
	solve(a,b,c,x,y,z,t,u,v);
	return 0;
}
int compare(int x,int y)
{
	if (x==y) return -1;
	else if (x==1&&y==3) return 1;
	else if (x==3&&y==1) return 0;
	return (x>y);
}
void input(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void point(int &a,int &b,int x,int y)
{
	if (compare(x,y)==-1)
	{
		a++,b++;
	}
	else if(compare(x,y))
	{
		a+=3;
	}
	else b+=3;
}

void solve(int a,int b,int c,int x,int y,int z,int t,int u,int v)
{
	point(a,b,x,y);
	point(a,c,z,t);
	point(b,c,u,v);
	printf("%d %d %d",a,b,c);
}

