#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinh(int x,int y,int z,int t,int u,int v,int &d1,int &d2,int &d3);
void xuat(int a,int b,int c);
int main()
{
	int x,y,z,t,v,u;
	nhap(x,y,z,t,v,u);
	int d1,d2,d3;
	tinh(x,y,z,t,u,v,d1,d2,d3);
	xuat(d1,d2,d3);
	return 0;
}

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}

int tinh(int x,int y,int z,int t,int u,int v,int &d1,int &d2,int &d3)
{
	d1 = 0;
	d2 = 0; 
	d3 = 0;
	
	if(x == y )
	{
		d1 = d1 + 1;
		d2 = d2 + 1;  
	}
	else
	{
		if (x == 1 && y == 2)
			d2 = d2 +3;
		else if (x == 1 && y == 3)
			d1 = d1 +3;
		else if (x == 2 && y == 3)
			d2 = d2 +3;
		else if (x == 2 && y == 1)
			d1 = d1 +3;
		else if(x == 3 && y == 1)
			d2 == d2 + 3;
		else if(x == 3 && y == 2)
			d1 == d1+3;
	}
	
	if(z == t)
	{
		d1 = d1 + 1;
		d3 = d3 + 1;  
	}
	else
	{
		if (z == 1 && t == 2)
			d3 = d3 +3;
		else if (z == 1 && t == 3)
			d1 = d1 +3;
		else if (z == 2 && t == 3)
			d3 = d3 +3;
		else if (z == 2 && t == 1)
			d1 = d1 +3;
		else if(z == 3 && t == 1)
			d3 == d3 + 3;
		else if(z == 3 && t == 2)
			d1 == d1+3;
	}
	
	if(u == v)
	{
		d3 = d3 + 1;
		d2 = d2 + 1;  
	}
	else
	{
		if (u == 1 && v == 2)
			d3 = d3 +3;
		else if (u == 1 && v == 3)
			d2 = d2 +3;
		else if (u == 2 && v == 3)
			d3 = d3 +3;
		else if (u == 2 && v == 1)
			d2 = d2 +3;
		else if(u == 3 && v == 1)
			d3 == d3 + 3;
		else if(u == 3 && v == 2)
			d2 == d2 +3;
	}
}

void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}
