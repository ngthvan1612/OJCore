#include<stdio.h>
void kiemtra(int x,int y,int z,int t,int u,int v);
int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	kiemtra(x,y,z,t,u,v);
}
void kiemtra(int x,int y,int z,int t,int u,int v)
{
	int diemA =0;
	int diemB =0;
	int diemC =0;
	if(x==1&&y==3||x==3&&y==2||x==2&&y==1)
	{
		diemA=diemA+3;
	}
	else if(y==1&&x==3||y==3&&x==2||y==2&&x==1)
	{
		diemB=diemB+3;
	}
	else if(x==y)
	{
		diemA=diemA+1;
		diemB=diemB+1;
	}
	if(z==1&&t==3||z==3&&t==2||z==2&&t==1)
	{
		diemA=diemA+3;
	}
	else if(t==1&&z==3||t==3&&z==2||t==2&&z==1)
	{
		diemC=diemC+3;
	}
	else if(t==z)
	{
		diemA=diemA+1;
		diemC=diemC+1;
	}
	if(u==1&&v==3||u==3&&v==2||u==2&&v==1)
	{
		diemB=diemB+3;
	}
	else if(v==1&&u==3||v==3&&u==2||v==2&&u==1)
	{
		diemC=diemC+3;
	}
	else if(u==v)
	{
		diemC=diemC+1;
		diemB=diemB+1;
	}
	printf("%d %d %d",diemA,diemB,diemC);
}
