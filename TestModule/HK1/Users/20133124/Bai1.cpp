#include<stdio.h>
void nhap(int &x,int &y, int &z, int &t, int &u, int &v);
void xuat(int a, int b, int c);
int Xuli(int x, int y, int z, int t, int u, int v);
int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=Xuli(x,y,z,t,u,v);
}
void nhap(int &x,int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int Xuli(int x, int y, int z, int t, int u, int v)
{
	int a,b,c;
	if(((x==1)&&(y==2))||((x==2)&&(y==3))||((x==3)&&(y==1)))
	{
	     a=0;
		 b=3;
	}
	else if(((x==1)&&(y==3))||((x==2)&&(y==1))||((x==3)&&(y==2)))
	{
		  a=3;
		  b=0;
	}
	else if(((x==1)&&(y==2))||((x==2)&&(y==3))||((x==3)&&(y==1)))
	{
		if(((z==1)&&(t==2))||((z==2)&&(t==3))||((z==3)&&(t==1)))
		{
			 a=0;
			 c=3;
			 b=3;
		}
        if(((z==1)&&(t==3))||((z==2)&&(t==1))||((z==3)&&(t==2)))
		{
			 a=3;
			 c=0;
			 b=3;
		}
	}
    else if(((x==1)&&(y==3))||((x==2)&&(y==1))||((x==3)&&(y==2)))
	{
		if(((z==1)&&(t==2))||((z==2)&&(t==3))||((z==3)&&(t==1)))
		{
			 a=3;
			 b=0;
			 c=3;
		}
		if(((z==1)&&(t==3))||((z==2)&&(t==1))||((z==3)&&(t==2)))
		{
			 a=6;
			 b=0;
			 c=0;
		}
	}
	else if(((u==1)&&(v==2))||((u==2)&&(v==3))||((u==3)&&(v==1)))
    {
		if(((x==1)&&(y==2))||((x==2)&&(y==3))||((x==3)&&(y==1)))
	{
		if(((z==1)&&(t==2))||((z==2)&&(t==3))||((z==3)&&(t==1)))
		{
			 a=0;
			 c=6;
			 b=3;
		}
        if(((z==1)&&(t==3))||((z==2)&&(t==1))||((z==3)&&(t==2)))
		{
			 a=3;
			 c=3;
			 b=3;
		}
	}
	}
	if(((x==1)&&(y==3))||((x==2)&&(y==1))||((x==3)&&(y==2)))
	{
		if(((z==1)&&(t==2))||((z==2)&&(t==3))||((z==3)&&(t==1)))
		{
			 a=3;
			 b=3;
			 c=3;
		}
		if(((z==1)&&(t==3))||((z==2)&&(t==1))||((z==3)&&(t==2)))
		{
			 a=6;
			 b=3;
			 c=0;
		}
	}
}


	void xuat(int a, int b, int c)
	{
		printf("%d%d%d",a,b,c);
	}
