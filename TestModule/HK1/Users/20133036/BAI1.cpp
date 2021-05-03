#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void tinh(int x,int y,int z,int t,int u,int v);
int kiemtra(int a,int b);
void xuat(int x);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinh(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinh(int x,int y,int z,int t,int u,int v)
{
	int a=0,b=0,c=0;
	if(kiemtra(x,y)==1)
	{
		a=a+3;
	}
	else 
		if(kiemtra(x,y)==0)
		{
			a=a+1;
			b=b+1;
		}
		else 

			b=b+3;
	if (kiemtra(z,t)==1)
	{
		a=a+3;
	}
	else
		if(kiemtra(z,t)==0)
		{
			a=a+1;
			c=c+1;
		}
		else 
			c=c+3;
	if(kiemtra(u,v)==1)
	{
		b=b+3;
	}
	else
		if(kiemtra(u,v)==0)
		{
			b=b+1;
			c=c+1;
		}
		else c=c+3;
	xuat(a);xuat(b);xuat(c);		


}
int kiemtra(int a,int b)
{
	if( (a==1 && b==3) ||(a==3 && b==2) || (a==2 && b==1))
		return 1;
	else 
		if(a==b)
			return 0;
		else 
			return -1;
}
void xuat(int x)
{
	printf("%d ",x);
}