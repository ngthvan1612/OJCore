#include<stdio.h>
int check(int x, int y);
int main()
{
	int a[6];
	int dA=0, dB=0,dC=0;
	for(int i=0;i<6;i++)
		scanf("%d", &a[i]);
	dA= check(a[0],a[1])+check(a[2],a[3]);
	dB= check(a[1],a[0])+check(a[4],a[5]);
	dC=check(a[3],a[2])+check(a[5],a[4]);
	printf("%d %d %d", dA,dB,dC);
	return 0;
}
int check(int x, int y)
{
	if(x==1)
	{
		if(y==3)
			return 3;
		if(y==1)
			return 1;
		if(y==2)
			return 0;
	}
	else 
	if(x==2)
	{
		if(y==3)
			return 0;
		if(y==1)
			return 3;
		if(y==2)
			return 1;
	}
	else
	if(x==3)
	{
		if(y==3)
			return 1;
		if(y==1)
			return 0;
		if(y==2)
			return 3;
	}
}
