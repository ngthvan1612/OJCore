#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinhdiem(int x,int y,int z,int t,int ,int u,int v,int a,int b,int c);
void xuat(int a,int b,int c);
void main()

{
	int x,y,z,t,u,v,a,b,c;
	nhap(x,y,z,t,u,v);
	kq =tinhdiem(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);


}
int tinhdiem(int x,int y,int z,int t,int ,int u,int v,int a,int b,int c)
{
	int a,b,c;
	if(x==1)
	{
		if(y==2)
			b=3;
		if(y==3)
			a=3;
		if(y==1)
			a=1 and b=1;
	}
	
	if(x==2)
	{
		if(y==2)
			a=1 and b=1;
		if(y==3)
			b=3;
		if(y==1)
			a=3;
	}
	if(x==3)
	{
		if(y==3)
			a=1 and b=1;
		if(y==1)
			b=3;
		if(y==2)
			a=3;
	}
	if(z==1)
	{
		if(t==2)
			c=3;
		if(t==3)
			a=a+3;
		if(y==1)
			a=a+1 and c=1;
	}
	if(z==2)
	{
		if(t==2)
			a=a+1 and c=1;
		if(t==3)
			c=3;
		if(t==1)
			a=a+3;
	}
	if(z==3)
	{
		if(t==3)
			a=a+1 and c=1;
		if(t==1)
			c=3;
		if(y==2)
			a=a+3;
	}
	if(u==1)
	{
		if(v==2)
			c=c+3;
		if(v==3)
			b=b+3;
		if(v==1)
			b=b+1 and c=c+1;
	}
	
	if(u==2)
	{
		if(v==2)
			b=b+1 and c=c+1;
		if(v==3)
			c=c+3;
		if(v==1)
			b=b+3;
	}
	if(u==3)
	{
		if(v==3)
			b=b+1 and c=c+1;
		if(v==1)
			c=c+3;
		if(v==2)
			b=b=3;
	}
	return a,b,c;
void xuat(int a,int b,int c)
{
	printf("%d%d%d",a,b,c);


}



}
