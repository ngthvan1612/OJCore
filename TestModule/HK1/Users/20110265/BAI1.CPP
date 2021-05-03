#include<stdio.h>

int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	1<= x,y,z,t,u,v <=3;
	int a=0,b=0,c=0;
	if (x==y)
	{
		a++;
		b++;
	}
	if ((x==1 && y==3)||(x==3 && y==2)||(x==2 && y==1) ) a=a+3;
	if ((y==1 && x==3)||(y==3 && x==2)||(y==2 && x==1) ) b=b+3;
	if (z==t)
	{
		a++;
		c++;
	}
	if ((z==1 && t==3)||(z==3 && t==2)||(z==2 && t==1)) a=a+3;
	if ((t==1 && z==3)||(t==3 && z==2)||(t==2 && z==1)) c=c+3; 
	if (u==v)
	{
		b++;
		c++;
	}
	if ((u==1 && v==3)||(u==3 && v==2)||(u==2 && v==1)) b=b+3;
	if ((v==1 && u==3)||(v==3 && u==2)||(v==2 && u==1)) c=c+3;
	printf("%d %d %d",a,b,c);
	return 0;
}