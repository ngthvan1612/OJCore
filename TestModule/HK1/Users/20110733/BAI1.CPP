#include<stdio.h>
void xuat(int x,int y,int z,int t,int u,int v);
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuat(x,y,z,t,u,v);
	return 0;
}
void xuat(int x,int y,int z,int t,int u,int v)
{
	int a=0,b=0,c=0;
	if((x==1&&y==3)||(x==3&&y==2)||(x==2&&y==1))
		a+=3;
	else
		if(x==y)
		{
			a+=1;
			b+=1;
		}
		else
			b+=3;
	if((z==1&&t==3)||(z==3&&t==2)||(z==2&&t==1))
		a+=3;
	else
		if(z==t)
		{
			a+=1;
			c+=1;
		}
		else
			c+=3;
	if((u==1&&v==3)||(u==3&&v==2)||(u==2&&v==1))
		b+=3;
	else
		if(u==v)
		{
			b+=1;
			c+=1;
		}
		else
			c+=3;
	printf("%d %d %d",a,b,c);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}