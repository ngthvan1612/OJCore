#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinhDiem(int x,int y,int z,int t,int u,int v);
void xuat(int a,int b,int c);



void main(){
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=tinhDiem(x,y,z,t,u,v);
	xuat(kq);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v){
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int tinhDiem(int x,int y,int z,int t,int u,int v){
	int a=0,b=0,c=0;
	if(x==y){
		a=b=1;
	} else if((x==1 && y==3) ||(x==3 && y==2) || (x==2 && y==1) )
			a=a+3;
		else {
			b=b+3;
	}
	if(z==t){
		a=a+1;
		c=1;
	} else if((z==1 && t==3) ||(z==3 && t==2) || (z==2 && t==1) )
			a=a+3;
		else{
			c=c+3;
	}
	if(u==v){
		b=b+1;
		c=c+1;
	}else if((u==1 && v==3) ||(u==3 && v==2) || (u==2 && v==1))
			b=b+3;
		else {
			c=c+3;
	}
	return a;
	return b;
	return c;
}

void xuat(int a,int b,int c){
	printf("%d%d%d", a, b, c);
}
	
