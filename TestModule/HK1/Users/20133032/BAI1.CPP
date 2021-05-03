#include <stdio.h>

void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void tinhketqua(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c);
void xuat(int a,int b,int c); 



void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a,b,c;
	tinhketqua(x,y,z,t,u,v,a,b,c);
	xuat(a,b,c);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinhketqua(int x,int y,int z,int t,int u,int v,int &a,int &b,int &c)
{
	b=0;
	a=0;
	c=0;
	if(x==1 && y==2){
		b=b+3;
	}else if(x==1 && y==3){
		a=a+3;
	}else if(y==1 && x==2){
		a=a+3;
	}else if(y==1 && x==3){
		b=b+3;
	}else if(x==2 && y==3){
		b=b+3;
	}else if(x==3 && y==2){
		b=b+3;
	}else{
		a=a+1;
		b=b+1;
	}

	if(z==1 && t==2){
		c=c+3;
	}else if(z==1 && t==3){
		a=a+3;
	}else if(t==1 && z==2){
		a=a+3;
	}else if(t==1 && z==3){
		c=c+3;
	}else if(t==2 && z==3){
		a=a+3;
	}else if(t==3 && z==2){
		c=c+3;
	}else{
		a=a+1;
		c=c+1;
	}


	if(u==1 && v==2){
		c=c+3;
	}else if(u==1 && v==3){
		b=b+3;
	}else if(v==1 && u==2){
		b=b+3;
	}else if(v==1 && u==3){
		c=c+3;
	}else if(u==2 && v==3){
		c=c+3;
	}else if(u==3 && v==2){
		b=b+3;
	}else{
		c=c+1;
		b=b+1;
	}
	

}
void xuat(int a,int b,int c)
{
	printf("%d %d %d",a,b,c);
}
