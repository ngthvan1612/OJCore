#include<stdio.h>

int main(){
	int A;
	scanf("&x && &z");
	int B;
	scanf("&y && &u");
	int C;
	scanf("&t && &v");
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
	
	if(x>=1 && x<=3 && y>=1 && y<=3 && z>=1 && z<=3 && t>=1 && t<=3 && u>=1 && u<=3 && v>=1 && v<=3){
		if((x/y==1/3)||(x/y==3/2)||(x/y==2/1)){
			printf("3");
		}
		else printf("0");
		
		if((z/t==1/3)||(z/t==3/2)||(z/t==2/1)){
			printf("3");
		}
		else printf("0");
		
		if((u/v==1/3)||(u/v==3/2)||(u/v==2/1)){
			printf("3");
		}
		else printf("0");
		
		if(x/y==z/t==u/v==3/3==2/2==1/1){
			printf("1");
		}
		
	else printf("0");	
	}

	return 0;
}
