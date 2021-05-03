#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void solve(int x,int y,int z,int t,int u,int v);
int tuti(int x,int y);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	solve(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void solve(int x,int y,int z,int t,int u,int v)
{
	int diemA=0;
	int diemB=0;
	int diemC=0;
	if (tuti(x,y)==1)
	{
		diemA+=3;
		diemB+=0;
	}
	else if (tuti(x,y)==0)
		{
			diemB+=3;
			diemA+=0;
		}
		else 
		{
			diemA+=1;
			diemB+=1;
		}
	if (tuti(z,t)==1)
	{
		diemA+=3;
		diemC+=0;
	}
	else if (tuti(z,t)==0)
		{
			diemC+=3;
			diemA+=0;
		}
		else 
		{
			diemA+=1;
			diemC+=1;
		}
	if (tuti(u,v)==1)
	{
		diemB+=3;
		diemC+=0;
	}
	else if (tuti(u,v)==0)
		{
			diemC+=3;
			diemB+=0;
		}
		else 
		{
			diemB+=1;
			diemC+=1;
		}
	printf("%d %d %d ",diemA,diemB,diemC);

}
int tuti(int x,int y)
{
	if (x==y)
		return 2; // hoa //
	else 
	{
		if (x==1 && y==3)
			return 1; //thang//
		else if (x==3 && y==2)
			return 1;
		else if (x==2 && y==1)
			return 1;

	}
	return 0; // thua
}