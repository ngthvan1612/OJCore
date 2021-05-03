#include<stdio.h>
void Nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int Tinh(int x, int y, int z, int t, int u, int v);
void xuat(int kq, int a, int b, int c);
void main()
{
	int a, b, c;
	int x, y, z, t, u, v;
	Nhap(x,y,z,t,u,v);
	int kq=Tinh(x,y,z,t,u,v);
	xuat(kq, a,b,c);
}
void Nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
int Tinh(int x, int y, int z, int t, int u, int v)
{
	int a, b, c;
	a=0;b=0;c=0;
	if(x-y==-2||x-y==1)
		a+=3;
		if(x-y==0)
			a+=1;
			if(x-y==2||x-y==-1)
				a+=0;
	if(z-t==-2||z-t==1)
		a+=3;
		if(z-t==0)
			a+=1;
			if(z-t==2||z-t==-1)
				a+=0;
	return a;
	if(y-x==-2||y-x==1)
		b+=3;
		if(y-x==0)
			b+=1;
			if(y-x==2||y-x==-1)
				b+=0;
	if(u-v==-2||u-v==1)
		b+=3;
		if(u-v==0)
			b+=1;
			if(u-v==2||u-v==-1)
				b+=0;
	return b;
	if(t-z==-2||t-z==1)
		c+=3;
		if(t-z==0)
			c+=1;
			if(t-z==2||t-z==-1)
				c+=0;
	if(v-u==-2||v-u==1)
		c+=3;
		if(v-u==0)
			c+=1;
			if(v-u==2||v-u==-1)
				c+=0;
	return c;
void xuat(int kq, int a, int b, int c)
{
	printf("%d%d%d", &a, &b, &c, kq);
}

			



	

		

		

	
