#include<stdio.h>
void tinhdiem(int x,int y,int &A,int &B);
void main()
{
	int A,B,C,x,y,z,t,u,v;
	scanf("%d %d %d %d %d %d",&x,&y,&z,&t,&u,&v);
	A=0;
	B=0;
	C=0;
	tinhdiem(x,y,A,B);
	tinhdiem(z,t,A,C);
	tinhdiem(u,v,B,C);
	printf("%d %d %d ",A,B,C);
}
void tinhdiem(int x,int y,int &A,int &B)
{
	if(x==1)
	{
		if(y==1)
			{
				A++;B++;
		}
		else if(y==2)
		{
			B=B+3;
		}
		else if(y==3)
		{
			A=A+3;
		}
	}
	else if(x==2)
	{
		if(y==1)
		{
			A=A+3;
		}
		else if(y==2)
		{
			A++;
			B++;
		}
		else
			B=B+3;
	}
	else
	{
		if(y==1)
		{
			B=B+3;
		}
		else if(y==2)
		{
			A=A+3;
		}
		else
		{
			B++;
			A++;
		}
	}
}



