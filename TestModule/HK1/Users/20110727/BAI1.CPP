#include<stdio.h>
int kiemtra1(int x,int y,int keo,int bua,int bao);
int kiemtra2(int z,int t,int keo,int bua,int bao);
int kiemtra3(int u,int v,int keo,int bua,int bao);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int keo=1;
	int bua=2;
	int bao=3;
	int kq1=kiemtra1(x,y,keo,bua,bao);
	int kq2=kiemtra2(z,t,keo,bua,bao);
	int kq3=kiemtra3(u,v,keo,bua,bao);
	printf("%d %d %d",kq1,kq2,kq3);
}
int kiemtra1(int x,int y,int keo,int bua,int bao)
{
  int dem1=0;
  {
  if(x==keo&&y==bao)
  {
    dem1+=3;
  }
  if(x==keo&&y==bua)
  {
	  dem1+=0;
  }
  if(x==keo&&y==keo)
  {
	  dem1+=1;
  }
  if(x==bua&&y==bao)
  {
	  dem1+=0;
  }
  if(x==bua&&y==keo)
  {
	  dem1+=3;
  }
  if(x==bua&&y==bua)
  {
	  dem1+=1;
  }
  if(x==bao&&y==keo)
  {
	  dem1+=0;
  }
  if(x==bao&&y==bua)
  {
	  dem1+=3;
  }
  if(x==bao&&y==bao)
  {
	  dem1+=1;
  }
  }
  return dem1;
}
int kiemtra2(int z,int t,int keo,int bua,int bao)
{   int dem2=0;
{
  if(z==keo&&t==bao)
  {
    dem2+=3;
  }
  if(z==keo&&t==bua)
  {
	  dem2+=0;
  }
  if(z==keo&&t==keo)
  {
	  dem2+=1;
  }
  if(z==bua&&t==bao)
  {
	  dem2+=0;
  }
  if(z==bua&&t==keo)
  {
	  dem2+=3;
  }
  if(z==bua&&t==bua)
  {
	  dem2+=1;
  }
  if(z==bao&&t==keo)
  {
	  dem2+=0;
  }
  if(z==bao&&t==bua)
  {
	  dem2+=3;
  }
  if(z==bao&&t==bao)
  {
	  dem2+=1;
  }
}
  return dem2;
}
int kiemtra3(int u,int v,int keo,int bua,int bao)
  {   int dem3=0;
   
if(u==keo&&v==bao)
{
    dem3+=3;
	{
  if(u==keo&&v==bua)
  {
	  dem3+=0;
  }
  if(u==keo&&v==keo)
  {
	  dem3+=1;
  }
  if(u==bua&&v==bao)
  {
	  dem3+=0;
  }
  if(u==bua&&v==keo)
  {
	  dem3+=3;
  }
  if(u==bua&&v==bua)
  {
	  dem3+=1;
  }
  if(u==bao&&v==keo)
  {
	  dem3+=0;
  }
  if(u==bao&&v==bua)
  {
	  dem3+=3;
  }
  if(u==bao&&v==bao)
  {
	  dem3+=1;
  }
	}
  return dem3;
}
}

