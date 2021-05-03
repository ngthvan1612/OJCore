#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void kt(int x,int y,int z,int t,int u,int v);

void main()
{
	int x,y,z,t,u,v;
    nhap(x,y,z,t,u,v);
	kt(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void kt(int x,int y,int z,int t,int u,int v)
{
	int tonga=0;
	int tongb=0;
	int tongc=0;
	if (x==y)
	{
		tonga=tonga+1;
		tongb=tongb+1;
	}
	if (x==1&&y==2)
	{
		tonga=tonga+0;
		tongb=tongb+3;
	}
	if (x==2&&y==1)
	{
		tonga=tonga+3;
		tongb=tongb+0;
	}
	if (x==1&&y==3)
	{
		tonga=tonga+3;
		tongb=tongb+0;
	}
	if (x==3&&y==1)
	{
		tonga=tonga+0;
		tongb=tongb+3;
	}
	if(x==2&&y==3)
	{
		tonga=tonga+0;
		tongb=tongb+3;
	}
	if (x==3&&y==2)
	{
		tonga=tonga+3;
		tongb=tongb+0;
	}
	if (z==t)
	{
		tonga=tonga+1;
		tongc=tongc+1;
	}
	if (z==1&&t==2)
	{
		tonga=tonga+0;
		tongc=tongc+3;
	}
	if (z==2&&t==1)
	{
		tonga=tonga+3;
		tongc=tongc+0;
	}
	if (z==1&&t==3)
	{
		tonga=tonga+3;
		tongc=tongc+0;
	}
	if (z==3&&t==1)
	{
		tonga=tonga+0;
		tongc=tongc+3;
	}
	if (z==2&&t==3)
	{
		tonga=tonga+0;
		tongc=tongc+3;
	}
	if (z==3&&t==2)
	{
		tonga=tonga+3;
		tongc=tongc+0;
	}
	if (u==v)
	{
		tongb=tongb+1;
		tongc=tongc+1;
	}
	if (u==1&&v==2)
	{
		tongb=tongb+0;
		tongc=tongc+3;
	}
	if (u==2&&v==1)
	{
		tongb=tongb+3;
		tongc=tongc+0;
	}
	if (u==1&&v==3)
	{
		tongb=tongb+3;
		tongc=tongb+0;
	}
	if (u==3&&v==1)
	{
		tongb=tongb+0;
		tongc=tongc+3;
	}
	if (u==2&&v==3)
	{
		tongb=tongb=0;
		tongc=tongc+3;
	}
	if (u==3&&v==2)
	{
		tongb=tongb+3;
		tongc=tongc+0;
	}
	printf("%d %d %d",tonga,tongb,tongc);
	
}


