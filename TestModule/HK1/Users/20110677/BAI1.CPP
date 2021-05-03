#include <stdio.h>


int tinhsodiem1(int x, int y, int a, int &b)
{
	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
		return 1;
	if((x==3 && y==1) || (x==2 && y==3) || (x==1 && y==2))
		return -1;
	if(a==b)
	{
		return 0;
	}
}
int tinhsodiem2(int x, int y, int a, int c)
{
	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
		return 1;
	if((x==3 && y==1) || (x==2 && y==3) || (x==1 && y==2))
		return -1;
	if(a==c)
	{
	return 0;
	}
}
int tinhsodiem3(int x, int y, int &b, int &c)
{
	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
	return 1;
	if((x==3 && y==1) || (x==2 && y==3) || (x==1 && y==2))
	return -1;
	if(c==b)
	{
		return 0;
	}
}

void main()
{
	int x, y, z, t, u,v, a=0 , b=0 ,c=0,a1=0, b1=0, c1=0; 
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	if(tinhsodiem1(x,y,a,b)==1)
		a1=a1+3;
	else if(tinhsodiem1(x,y,a,b)==-1)
		b1=b1+3;
	else {
		a1+=1;
		b1+=1;
	}
	if(tinhsodiem2(z,t,a,c)==1)
		a1=a1+3;
	else if(tinhsodiem2(z,t,a,c)==-1)
		c1=c1+3;
	else {
		a1=a1+1;
		c1=c1+1;
	}
	if(tinhsodiem3(u,v,b,c)==1)
		b1=b1+3;
	else if(tinhsodiem3(u,v,b,c)==-1)
		c1=c1+3;
	else {
		c1=c1+1;
		b1=b1+1;
	}
	printf("%d %d %d", a1, b1, c1);
}