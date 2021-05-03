#include<stdio.h>
void nhap( int &x,int &y,int &z,int &t,int &u ,int &v){
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int xuLy1( int x,int y){
	int a=0;
	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1) )
		a+=3;
	else if( x==2 && y==2)
		a+=1;
	else 
		a+=0;
	return a;
}
int tong1(int z,int t, int kqA){
	if((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1))
		kqA+=3;
	else if( z==2&&t==2)
		kqA+=1;
	else 
		kqA+=0;
	return kqA;
}
int xuLy2(int y,int x){
	int b=0;
	if((y==1 && x==3) || (y==3 && x==2) || (y==2 && x==1))
		b+=3;
	else if( y==2 && x==2)
		b+=1;
	else 
		b=0;
	return b;
}
int tong2(int u,int v, int kqB){
	if((u==1 && v==3) || (u==3 && v==2) || (u==2 && v==1))
		kqB+=3;
	else if( u==2 && v==2)
		kqB+=1;
	else 
		kqB+=0;
	return kqB;
}
int xuLy3(int t,int z){
	int c=0;
	if((t==1 && z==3) || (t==3 && z==2) || (t==2 && z==1))
		c+=3;
	else if( t==2 && z==2)
		c+=1;
	else 
		c+=0;
	return c;
}
int tong3(int v,int u, int kqC){
	if((v==1 && u==3) || (v==3 && u==2) || (v==2 && u==1))
		kqC+=3;
	else if( v==2 && u==2)
		kqC+=1;
	else 
		kqC+=0;
	return kqC;
}
void xuat( int kq1, int kq2, int kq3){
	printf("%d %d %d",kq1, kq2, kq3);
}
void main(){
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kqA=xuLy1(x,y);
	int kq1=tong1(z,t,kqA);
	int kqB=xuLy2(y,x);
	int kq2=tong2(u,v,kqB);
	int kqC=xuLy3(t,z);
	int kq3=tong3(v,u,kqC);
	xuat(kq1,kq2,kq3);
}