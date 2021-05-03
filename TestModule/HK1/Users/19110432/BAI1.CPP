#include <stdio.h>
void XuLy(int &a,int &b,int &c,int x,int y,int z,int t, int u, int v);
int thangthua(int p,int q);
void main()
{
	int a=0;
	int b=0;
	int c=0;
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	XuLy(a,b,c,x,y,z,t,u,v);
	printf("%d %d %d ", a, b, c);
}
void XuLy(int &a,int &b,int &c,int x,int y,int z,int t, int u, int v)
{
	if(thangthua(x,y)==1)
		a+=3;
	if(thangthua(x,y)==0)
	{
		a+=1;
		b+=1;
	}
	if(thangthua(x,y)==-1)
		b+=3;
	if(thangthua(z,t)==1)
		a+=3;
	if(thangthua(z,t)==0)
	{
		a+=1;
		c+=1;
	}
	if(thangthua(z,t)==-1)
		c+=3;
	if(thangthua(u,v)==1)
		b+=3;
	if(thangthua(u,v)==0)
	{
		c+=1;
		b+=1;
	}
	if(thangthua(u,v)==-1)
		c+=3;
}
int thangthua(int p,int q)
{
	if((p == 1 && q==3)||(p==3 && q==2)||(p==2 && q ==1))
		return 1;
	else 
	{
		if(p == q)
			return 0;
		else
			return -1;
	}
}