#include<stdio.h>
void input(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void result(int a, int b, int &scoreA, int &scoreB)
{
	if((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2))
	scoreA+=3;
	else if((b==1 && a==3) || (b==2 && a==1) || (b==3 && a==2))
	scoreB+=3;
	else if(a==b)
	{
		scoreA+=1;
		scoreB+=1;
	}
}
void output(int a, int b, int c)
{
	printf("%d %d %d",a,b,c);
}
void main()
{
	int x,y,z,t,u,v;
	int scoreA=0;
	int scoreB=0;
	int scoreC=0;
	input(x,y,z,t,u,v);
	result(x,y,scoreA,scoreB);
	result(z,t,scoreA,scoreC);
	result(u,v,scoreB,scoreC);
	output(scoreA,scoreB,scoreC);
}