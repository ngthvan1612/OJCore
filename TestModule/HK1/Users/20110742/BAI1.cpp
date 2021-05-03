#include<stdio.h>

int tinhtoan(int x,int y){
	int A=0;
	if(x==y+1 || x==y-2){
		A=3;
	}
	if(x==y){
		A=1;
	}
	if(x==y+2 || x==y-1){
		A=0;
	}
	return A;
}
void main(){
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int A=0,B=0,C=0;
	A=(tinhtoan(x,y)+tinhtoan(z,t));
	B=(tinhtoan(y,x)+tinhtoan(u,v));
	C=(tinhtoan(t,z)+tinhtoan(v,u));
	printf("%d %d %d",A,B,C);
}

