#include <stdio.h>
int kt(int x,int y)
{
	int a=0;
	if (x==y )
		a=a+1;

	if (x==1 && y==3 )
		a=a+3;
	if (x==3 && y==2 )
		a=a+3;
	if (x==2 && y==1)
		a=a+3;
	return a;
}
int main()
{
	int x,y,z,t,u,v;
	scanf("%d %d %d %d %d %d",&x,&y,&z,&t,&u,&v);
	int a,b,c;
	a=kt(x,y)+kt(z,t);
	b=kt(y,x)+kt(u,v);
	c=kt(t,z)+kt(v,u);
	printf("%d %d %d",a,b,c);
	return 0;
}

