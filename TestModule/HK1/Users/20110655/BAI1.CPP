#include <stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void kiemtra(int x,int y,int z,int t,int u,int v,int &s1,int &s2,int &s3);
void xuat(int s1,int s2,int s3);
int main()
{
	int x,y,z,t,u,v,s1,s2,s3;
	nhap(x,y,z,t,u,v);
	kiemtra(x,y,z,t,u,v,s1,s2,s3);
	xuat(s1,s2,s3);
	return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinh(int a,int b)
{
	if(a==1 && b==3)
		return 3;
	else if(a==1 && b==2)
		return 0;
	else if(a==2 && b==1)
		return 3;
	else if(a==2 && b==3)
		return 0;
	else if(a==3 && b==1)
		return 0;
	else if(a==3 && b==2)
		return 3;
	else if(a==b)
		return 1;
}
void kiemtra(int x,int y,int z,int t,int u,int v,int &s1,int &s2,int &s3)
{
	s1=0;
	s2=0;
	s3=0;
	int a=tinh(x,y);
	s1=s1+a;
	a=tinh(z,t);
	s1=s1+a;
	int b=tinh(y,x);
	s2=s2+b;
	b=tinh(u,v);
	s2=s2+b;
	int c=tinh(t,z);
	s3=s3+c;
	c=tinh(v,u);
	s3=s3+c;
}
void xuat(int s1,int s2,int s3)
{
	printf("%d %d %d",s1,s2,s3);
}