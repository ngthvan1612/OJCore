#include<stdio.h>
void nhap(int &x ,int &y, int &z, int &t, int &u, int &v);
void keobuabao(int x, int y, int z, int t, int u, int v);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	keobuabao(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void keobuabao(int x, int y, int z, int t, int u, int v)
{
	int a=0;int b=0; int c=0;
	if (x==1 && y==3) 
	{
		a=a+3;
		b=b+0;
	}
	else 
		if (x==3 && y==1)
		{
			b=b+3;
			a=a+0;
		}
	else 
		if (x==y) 
		{
			a=a+1;
			b=b+1;
		}
	else
		if (x==2 && y==3)
		{
			b=b+3;
			a=a+0;
		}
	else 
		if (x==3 && y==2)
		{
			a=a+3;
			b=b+0;
		}
	else 
		if (x==1 && y==2)
		{
			b=b+3;
			a=a+0;
		}
		else 
			if (x==2 && y==1)
			{
				a=a+3;
				b=b+0;

			}
        if (z==1 && t==3)
	{
		a=a+3;
		c=c+0;
	}
	else 
		if (z==3 && t==1)
		{
			c=c+3;
			a=a+0;
		}
	else 
		if (z==t) 
			{
				a=a+1;
				c=c+1;
			}
	 else
		if (z==2 && t==3)
		{
			c=c+3;
			a=a+0;
		}
	else 
		if (z==3 && t==2)
		{
			a=a+3;
			c=c+0;
		}
	else
		if (z==1 && t==2)
			{
				c=c+3;
				a=a+0;
			}
			else 
		if (z==2 && t==1)
		{
			a=a+3;
			c=c+0;
		}

			if (u==1 && v==3)
			{
				b=b+3;
				c=c+0;

			}
	else 
		if (u==3 && v==1)
				{
					c=c+3;
					b=b+0;
			}
					
	else 
		if (u==v)
				{
					b=b+1;
					c=c+1;
				}
	else
		if (u==2 && v==3)
		{
			c=c+3;
			b=b+0;
		}
	else 
		if (u==3 && v==2)
		{
			b=b+3;
			c=c+0;
		}
			else 
		if (u==1 && v==2)
		{
			c=c+3;
			b=b+0;
		}
		else 
			if (u==2 && v==1)
			{
				b=b+3;
                c=c+0;
			}
	  
	printf("%d ",a);
	printf("%d ",b);
	printf("%d",c);
}

