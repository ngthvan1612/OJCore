#include<stdio.h>
void tinhdiem(int x,int y,int &a,int &b);
void nhap(int x,int y,int z);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z);
	nhap(t,u,v);
	int a=0,b=0,c=0;
	tinhdiem(x,y,a,b);
	tinhdiem(z,t,a,c);
	tinhdiem(u,v,b,c);
	printf("%d %d %d",a,b,c);

}
void nhap(int x,int y,int z)
{
	scanf("%d%d%d",&x,&y,&z);
}
void tinhdiem(int x,int y,int &a,int &b)
{
	if(x==1)
	{
		if(y==1)
		{
			a=a+1;
			b=b+1;
		}
		else if(y==3)
			b=b+3;
		else
			a=a+3;

	}
	 if(x==2)
	{
		if(y==1)
			b=b+3;
		else if(y==2)
		{
			a=a+1;
			b=b+1;
		}
		else
			a=a+3;
	}
	else
	{
		if(x==3)
		{if(y==1)
			b=b+3;
		else if(y==2)
			a=a+3;
		else 
		{
			a=a+1;
			b=b+1;
		}
		}

	}
}