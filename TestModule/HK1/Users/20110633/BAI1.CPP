#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinh(int x,int y,int z,int t,int u,int v);
void xet(int x,int y,int &diema,int &diemb);

void main()
{
  int x,y,z,t,u,v;
  nhap(x,y,z,t,u,v);
  int kt=tinh(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
  scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinh(int x,int y,int z,int t,int u,int v)
{
  int diema=0;
  int diemb=0;
  int diemc=0;
  xet(x,y,diema,diemb);
  xet(z,t,diema,diemc);
  xet(u,v,diemb,diemc);
  printf("%d %d %d",diema,diemb,diemc);
  return 1;
}
void xet(int x,int y,int &diema,int &diemb)
{
   if(x==1 && y==2)  
   {
     diemb+=3;
   }
   if(x==1 && y==3)
	   diema+=3;
   if(x==y)
   {
     diema+=1;
	 diemb+=1;
   }
   if(x==2&&y==1)
	   diema+=3;
   if(x==2&&y==3)
	   diemb+=3;
   if(x==3&&y==1)
	   diemb+=3;
   if(x==3&&y==2)
	   diema+=3;
}
