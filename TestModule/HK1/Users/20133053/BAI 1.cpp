#include<stdio.h>
void kq(int x, int y,int &a,int &b);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int a=0, b=0, c=0;
	kq(x,y,a,b);
	kq(z,t,a,c);
	kq(u,v,b,c);
	printf("%d %d %d",a , b, c);
}
void kq(int x,int y, int  &a, int &b)
{
	if(x==y)
	{
		a++; b++;
	}
	else
	{
		if((x==1 ||x==3)&&(y==3 ||y==1) )
		{
			if(x<y)
			{
				a=a+3;
			}
			else b=b+3;
		}
		else
		{ 
			if(x>y)
			{
				a=a+3;
			}
			else b=b+3;
		}

	}
}