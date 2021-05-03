#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v){
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int kiemTra(int x, int y,int &tinhDiem1, int &tinhDiem2){
	if(x==1){
		if(y==3){
			tinhDiem1=tinhDiem1+3;
		}else if(y==2){
			tinhDiem2=tinhDiem2+3;
		}else if(y==1){
			tinhDiem1=tinhDiem1+1;
			tinhDiem2=tinhDiem2+1;
		}
	}
	if(x==2){
		if(y==3){
			tinhDiem1=tinhDiem1+3;
		}else if(y==2){
			tinhDiem2=tinhDiem2+3;
		}else if(y==2){
			tinhDiem1=tinhDiem1+1;
			tinhDiem2=tinhDiem2+1;
		}
	}
	if(x==2){
		if(y==1){
			tinhDiem1=tinhDiem1+3;
		}else if(y==3){
			tinhDiem2=tinhDiem2+3;
		}else if(y==2){
			tinhDiem1=tinhDiem1+1;
			tinhDiem2=tinhDiem2+1;
		}
	}
}
int main(){
	int x, y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int tinhDiem1=0, tinhDiem2=0;
	int resta=0; int restb=0;int restc=0;
	kiemTra(x,y,tinhDiem1,tinhDiem2);
	return 0;
}