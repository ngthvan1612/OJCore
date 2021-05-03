#include<stdio.h>
#include<math.h>


void main()
{
	int x,y,z,t,u,v;
	scanf("%d %d %d %d %d %d",&x,&y,&z,&t,&u,&v);
	//printf("%d %d %d %d %d %d",x,y,z,t,u,v);
	int diemA = 0;
	int diemB = 0;
	int diemC = 0;
	if (x==1&&y==3||x==2&&y==1||x==3&&y==2)
	{
		diemA = diemA+3;
		diemB = diemB+0;
	}
	else if (x==y)
	{
		diemA = diemA+1;
		diemB = diemB+1;
	}
	else
	{
		diemB = diemB+3;
		diemA=diemA+0;
	}

	if (z==1&&t==3||z==2&&t==1||z==3&&t==2)
	{
		diemA = diemA+3;
		diemC=diemC+0;
	}
	else if (z==t)
	{
		diemA = diemA+1;
		diemC = diemC+1;
	}
	else
	{
		diemA=diemA+0;
		diemC = diemC+3;
	}

	if (u==1&&v==3||u==2&&v==1||u==3&&v==2)
	{
		diemB = diemB+3;
		diemC=diemC+0;
	}
	else if (u==v)
	{
		diemB = diemB+1;
		diemC = diemC+1;
	}
	else
	{
		diemB=diemB+0;
		diemC = diemC+3;
	}
	printf("%d %d %d",diemA,diemB,diemC);

}