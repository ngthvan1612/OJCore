#include <stdio.h>
int main (){
int x,y,z,t,u,v;
int A=0;
int B=0;
int C=0;
	scanf ("%d%d%d%d%d%d", x,y,z,t,u,v);
	if ((x==1&&y==3)||(x==2&&y==1)||(x==3&&y==2)){
		A=A+3;
	}else
		if(x==y){
			A++;
			B++;
		}
	else 
		if ((x==1&&y==2)||(x==2&&y==3)||(x==3&&y==1)){
			B=B+3;
		}


	if ((z==1&&t==3)||(z==2&&t==1)||(z==3&&t==2)){
		A=A+3;
		}
	else 
		if(z==t){
			A++;
			C++;
		}
	else 
		if ((z==1&&t==2)||(z==2&&t==3)||(z==3&&t==1)){
			C=C+3;
		}


	if ((u==1&&v==3)||(u==2&&v==1)||(u==3&&v==2)){
		B=B+3;
	}
	else
		if(u==v){
			B++;
			C++;
		}
	else 
		if ((u==1&&v==2)||(u==2&&v==3)||(u==3&&v==1)){
			C=C+3;
		}
printf ("%d %d %d", A, B, C);
return 0;
}