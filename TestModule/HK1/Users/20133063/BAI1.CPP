#include<stdio.h>




void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,z);
	int a=diema(x,y,z,t);
	int b=diemb(x,y,u,v);
	int c=diemc(z,t,u,v);
	xuat(a,b,c);
}
void nhap (int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int a,int b,int c)
{
	printf ("%d %d %d",a,b,c);
}
int diem(int x,int y,int z,int t)
{
	int dem=0;
	if (x==1)
		if(y==3) 
			dem++;
	else if(x>y) dem++;
	else if (z==1)
			if(t==3)
				dem++;



}
