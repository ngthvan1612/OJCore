#include<stdio.h>




int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);

	//
	if(x-y == 0){
	a+=1;
	b+=1;
	}
	if(x-y == 1) a+=3;
	if(x-y == 2) b+=3;
	if(x-y == -1) b+=3;
	if(x-y == -2) a+=3;
	//
	if(z-t == 0){
	a+=1;
	c+=1;
	}
	if(z-t == 1) a+=3;
	if(z-t == 2) c+=3;
	if(z-t == -1) c+=3;
	if(z-t == -2) a+=3;
	//
	if(u-v == 0){
	b+=1;
	c+=1;
	}
	if(u-v == 1) b+=3;
	if(u-v == 2) c+=3;
	if(u-v == -1) c+=3;
	if(u-v == -2) b+=3;
	//
	//
	//
	printf("%d %d %d",a,b,c);
	return 0;
}