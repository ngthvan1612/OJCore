#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int sosanh(int x, int y);
void xuLi(int x, int y, int z, int t, int v, int u);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuLi(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int sosanh(int x, int y)
{
	if(x==1&&y==3)
		return 3;
	if(x==3&&y==2)
		return 3;
	if(x==2&&y==1)
		return 3;
	if(x==3&&y==1)
		return 0;
	if(x==2&&y==3)
		return 0;
	if(x==1&&y==2)
		return 0;
	if(x==1&&y==1)
		return 1;
	if(x==2&&y==2)
		return 1;
	if(x==3&&y==3)
		return 1;
}
void xuLi(int x, int y, int z, int t, int v, int u)
{
	int dA=0, dB=0, dC=0;
	while(dA>=0&&dB>=0&&dC>=0)
	{
	  if(sosanh(x,y)==3)
	  {
		dA=dA+3;
		dB=dB;
	  }
	  if(sosanh(x,y)==0)
	  {
		dA=dA;
	 	dB=dB+3;
	  }
	  if(sosanh(x,y)==1)
	  {
		dA=dA+1;
		dB=dB+1;
	  }
	  if(sosanh(z,t)==3)
	  {
		dA=dA+3;
		dC=dC;
	  }
	  if(sosanh(z,t)==0)
	  {
		dA=dA;
		dC=dC+3;
	  }
	  if(sosanh(z,t)==1)
	  {
		dA=dA+1;
		dC=dC+1;
	  }
	  if(sosanh(u,v)==3)
	  {
		dB=dB+3;
		dC=dC;
	  }
	  if(sosanh(u,v)==0)
	  {
		dB=dB;
		dC=dC+3;
	  }
	  if(sosanh(u,v)==1)
	  {
		dB=dB+1;
		dC=dC+1;
   
	  }
	  printf("%d %d %d",dA,dB, dC);
	  break;
	}
}


