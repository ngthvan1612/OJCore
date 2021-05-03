#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinh(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a,b,c;
	int kq=tinh(x,y,z,t,u,v,a,b,c);
	printf("%d %d %d",a,b,c);
}

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}

int tinh(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	a=0;b=0;c=0;
	if (x==y) {a=a+1; b=b+1;}
	else 
	{
		if (x==1)
		{
			if (y==2) b=b+3;
			else a=a+3;
		}
		else 
		{
			if (x==2)
			{
				if (y==3) b=b+3;
				else a=a+3;
			}
			else 
			{
				if (y==1) b=b+3;
				else a=a+3;
			}
		}
	}

	if (z==t) {a=a+1; c=c+1;}
	else 
	{
		if (z==1)
		{
			if (t==2) c=c+3;
			else a=a+3;
		}
		else 
		{
			if (z==2)
			{
				if (t==3) c=c+3;
				else a=a+3;
			}
			else 
			{
				if (t==1) c=c+3;
				else a=a+3;
			}
		}
	}

	if (u==v) {b=b+1; c=c+1;}
	else 
	{
		if (u==1)
		{
			if (v==2) c=c+3;
			else b=b+3;
		}
		else 
		{
			if (u==2)
			{
				if (v==3) c=c+3;
				else b=b+3;
			}
			else 
			{
				if (v==1) c=c+3;
				else b=b+3;
			}
		}
	}
return 0;
}



