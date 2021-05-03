#include<stdio.h>
void nhap(int &x,int&y,int&z,int&t,int&u,int&v);
int tuxi(int x,int y);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a=0,b=0,c=0;
	if(tuxi(x,y)==1)
		a=a+3;
	else if (tuxi(x,y)==2)
		b=b+3;
	else 
	{
		a=a+1;
		b=b+1;
	}
	if(tuxi(z,t)==1)
		a=a+3;
	else if (tuxi(z,t)==2)
		c=c+3;
	else 
	{
		c=c+1;
		a=a+1;
	}
	if(tuxi(u,v)==1)
		b=b+3;
	else if (tuxi(u,v)==2)
		c=c+3;
	else 
	{
		b=b+1;
		c=c+1;
	}
	printf("%d %d %d",a,b,c);
}
void nhap(int &x,int&y,int&z,int&t,int&u,int&v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tuxi(int x,int y)
{
	int t;
	if(x==1&&y==3||x==2&&y==1||x==3&&y==2)
		t= 1;	//thang
	if(y==1&&x==3||y==2&&x==1||y==3&&x==2)
		t= 2;
	if(x==y)
		t= 3;	//hoa
	return t;

}
