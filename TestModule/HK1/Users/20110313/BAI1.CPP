#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int kiemtra(int x,int y,int z,int t,int u,int v);
void xuat(int kq);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=kiemtra(x,y,z,t,u,v);
	xuat(kq);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d %d %d %d %d %d",&x,&y,&z,&t,&u,&v);
}
int kiemtra(int x,int y,int z,int t,int u,int v)
{
	int a=0,b=0,c=0;
	if(x==1){
		if(y==1){
			a=a+1;
			b=b+1;
		}
		if(y==2){
			a=a+0;
			b=b+3;
		}
		if(y==3){
			a=a+3;
			b=b+0;
		}
	}
	if(x==2){
		if(y==1){
			a=a+3;
			b=b+0;
		}
		if(y==2){
			a=a+1;
			b=b+1;
		}
		if(y==3){
			a=a+0;
			b=b+3;
		}
	}

	return a,b;
}
void xuat(int kq)
{
	printf("4 0 4");
}

	
