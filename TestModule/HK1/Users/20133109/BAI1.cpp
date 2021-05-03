#include<stdio.h>
int x,y,z,t,u,v,a,b,c;
int main()
{
	scanf("%d %d %d %d %d %d", &x, &y, &z, &t, &u,& v);
	
	if(x==1 && y==3) {a=3;b=0;}
	else if(x==2 && y==1) {a=3; b=0;}
	else if(x==3 && y==2) {a=3; b=0;}
	else if(x==3 && y==1) {a=0; b=3;}
	else if(x==1 && y==2) {a=0; b=3;}
	else if(x==2 && y==3) {a=0; b=3;}
	else if(x==y) {a=1;b=1;}

	
	if(z==1 && t==3) {a=a+3;b=b+0;}
	else if(z==2 && t==1) {a=a+3; c=0;}
	else if(z==3 && t==2) {a=a+3; c=0;}
	else if(z==3 && t==1) {a=a+0; c=3;}
	else if(z==1 && t==2) {a=a+0; c=3;}
	else if(z==2 && t==3) {a=a+0; c=3;}
	else if(z==t) {a=a+1;c=1;}
	
	if(u==1 && v==3) {a=a+3;b=b+0;}
	else if(u==2 && v==1) {b=b+3; c=c+0;}
	else if(u==3 && v==2) {b=b+3; c=c+0;}
	else if(u==3 && v==1) {b=b+0; c=c+3;}
	else if(u==1 && v==2) {b=b+0; c=c+3;}
	else if(u==2 && v==3) {b=b+0; c=c+3;}
	else if(u==v) {b=b+1;c=c+1;}
	 printf("%d %d %d", a,b,c);
}
