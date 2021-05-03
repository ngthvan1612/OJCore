#include<stdio.h>

void tinhDiem(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int a,int b,int c);
void main()
{

	int x,y,z,t,u,v;
	int a,b,c;
	nhap(x,y,z,t,u,v);
	tinhDiem(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}
void tinhDiem(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	 a=0;
	 b=0;
	 c=0;
	
	 if (x==1 && y==3)
	 {
		 a=a+3;
		 b=b-3;
	 }
	 else if (x<y)
	 {
		 a=a-3;
		 b=b+3;
	 }
	 else
	 {
		 a=a+1;
		 b=b+1;
	 }

	 if (z>t)
	 {
		 a=a+3;
		 c=c-3;
	 }
	 else if (z<t)
	 {
		 a=a-3;
		 c=c+3;
	 }
	 else
	 {
		 a=a+1;
		 c=c+1;
	 }

	 if (u>v)
	 {
		 b=b+3;
		 c=c-3;
	 }
	 else if (u<v)
	 {
		 b=a-3;
		 c=c+3;
	 }
	 else
	 {
		 b=b+1;
		 c=c+1;
	 }

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}

