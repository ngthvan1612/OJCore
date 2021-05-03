#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int kt(int x,int y);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A,B,C=0;
	if(kt(x,y)==1)
	{
		A+=3;
	}
	if(kt(z,t)==1)
	{
		A+=3;
	}
	if(kt(u,v)==1)
	{
		B+=3;
	}
	if(kt(x,y)==2)
	{
		A++;
		B++;
	}
	if(kt(z,t)==2)
	{
		A++;
		C++;
	}
	if(kt(u,v)==2)
	{
		C++;
		B++;
	}
	if(kt(x,y)==3)
	{
		B+=3;
	}
	if(kt(z,t)==3)
	{
		C+=3;
	}
	if(kt(u,v)==3)
	{
		C+=3;
	}
	printf("%d %d %d",A,B,C);
	

	
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int kt(int x,int y)
{
	if(x<y)
	{
		return 1;
	}
	if(x==y)
	{
		return 3;
	}
	if(x>y)
	{
		return 2;
	}
}
