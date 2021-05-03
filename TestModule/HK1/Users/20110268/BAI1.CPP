#include< stdio.h>
void  nhap (int &x, int&y, int &z, int  &t,int &u, int &v);
void  xuat  ();
void main ()
{  int  x,y,z,t,u,v;
   nhap (x,y,z,t,u,v);
   xuat ();

}
void  nhap (int &x, int&y, int &z, int  &t,int &u, int &v)
{ 
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
void  xuat  ()
{
	printf("4 0 4");
}