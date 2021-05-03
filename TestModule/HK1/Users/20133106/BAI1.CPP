#include<stdio.h>
void xuat(int kq,int a,int b,int c);
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int demso(int x,int y,int z,int t,int u,int v,int &a,int&b,int &c);



void main()
{
	int x,y,z,t,u,v;
	int a,b,c;
	nhap(x,y,z,t,u,v);
	int kq=demso(x,y,z,t,u,v,a,b,c);
	xuat(kq,a,b,c);

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int demso(int x,int y,int z,int t,int u,int v,int &a,int&b,int &c)
{
	a=0;
	b=0;
	c=0;
	
	if((x==3&&y==2)||(x==1&&y==3)||(x==2&&y==1))
	  a=a+3;


	if(x==y)
	{
		a=a+1;
		b=b+1;
	}
	if((y==3&&x==2)||(y==1&&x==3)||(y==2&&x==1))
	  b=b+3;


    if((z==3&&t==2)||(z==1&&t==3)||(z==2&&t==1))
	  a=a+1;
	if(z==t)
	{
		a=a+1;
		c=c+1;
	}
	if((t==3&&z==2)||(t==1&&z==3)||(t==2&&z==1))
	  c=c+3;




	if((u==3&&v==2)||(u==1&&v==3)||(u==2&&v==1))
	  b=b+3;
	if(u==v)
	{
		c=c+1;
		b=b+1;
	}
	if((v==3&&u==2)||(v==1&&u==3)||(v==2&&u==1))
	  c=c+3;



	
	return a,b,c;
}
void xuat(int kq,int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}