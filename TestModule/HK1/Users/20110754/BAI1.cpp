#include<stdio.h>


void nhap(int &x,int &y,int &z,int &t,int &u,int &v){
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinhdiem(int x,int y,int z,int t,int u,int v,int &da,int &db,int &dc){
	da=db=dc=0;
	if((x==1 && y==3) || (x==2 && y==1) || (x==3 && y==2)){
		da+=3;
		db+=0;
	}else if (x==y){
		da+=1;
		db+=1;
	}else {
		db+=3;
		da+=0;
	}
	if((z==1 && t==3) || (z==2 && t==1) || (z==3 && t==2)){
		da+=3;
		dc+=0;
	}else if (z==t){
		da+=1;
		dc+=1;
	}else {
		dc+=3;
		da+=0;
    }  
    if((u==1 && v==3) || (u==2 && v==1) || (u==3 && v==2)){
		db+=3;
		dc+=0;
	}else if (u==v){
		db+=1;
		dc+=1;
	}else {
		dc+=3;
		db+=0;
    }  
}
void xuat(int da,int db,int dc){
	printf("%d %d %d",da,db,dc);
}
int main(){
	int x,y,z,t,u,v;
	int da,db,dc;
	nhap(x,y,z,t,u,v);
	tinhdiem(x,y,z,t,u,v,da,db,dc);
	xuat(da,db,dc);
}
