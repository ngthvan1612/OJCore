#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int x, int y)
{
	if(x==y) return 1;
	if(x==1 && y==2)
	{
		return 0;
	}
	if(x==1 && y==3)
	{
		return 3;
	}
	if(x==2 && y==1)
	{
		return 3;
	}
	if(x==2 && y==3)
	{
		return 0;
	}
	if(x==3 && y==1)
	{
		return 0;
	}
	if(x==3 && y==2)
	{
		return 3;
	}
	return 0;
}
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int da, db, dc;
	da = db = dc =0;
	da = da +check(x,y);
	db = db + check(y,x);

	da = da + check(z,t);
	dc = dc + check(t,z);

	db = db + check(u,v);
	dc = dc + check(v,u);
	
	printf("%d %d %d",da,db,dc);
}





