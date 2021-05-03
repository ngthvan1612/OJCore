#include<stdio.h>
void main()
{  
	int a,b,c,d,e,f,x,y,z;
    x=0;
    y=0;
    z=0;

    scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);
    if (a==1 && b==3) {x=x+3;}
	if (a==1 && b==2) { y=y+3;}
	if (a==1 && b==1) { x=x+1; y=y+1;}
	if (a==2 && b==1) {x=x+3;}
	if (a==2 && b==2) {y=y+1; x=x+1;}
	if (a==2 && b==3) {y=y+3;}
	if (a==3 && b==1) {y=y+3;}
	if (a==3 && b==2) {x=x+3;}
	if (a==3 && b==3) {x=x+1; y=y+1;}

    if (c==1 && d==3) {x=x+3;}
	if (c==1 && d==2) { z=z+3;}
	if (c==1 && d==1) { x=x+1; z=z+1;}
	if (c==2 && d==1) {x=x+3;}
	if (c==2 && d==2) {z=z+1; x=x+1;}
	if (c==2 && d==3) {z=z+3;}
	if (c==3 && d==1) {z=z+3;}
	if (c==3 && d==2) {x=x+3;}
	if (c==3 && d==3) {x=x+1; z=z+1;}

	if (e==1 && f==3) { y=y+3;}
	if (e==1 && f==2) { z=z+3;}
	if (e==1 && f==1) { y=y+1; z=z+1;}
	if (e==2 && f==1) {y=y+3;}
	if (e==2 && f==2) {y=y+1; z=z+1;}
	if (e==2 && f==3) {z=z+3;}
	if (e==3 && f==1) {z=z+3;}
	if (e==3 && f==2) {y=y+3;}
	if (e==3 && f==3) {z=z+1; y=y+1;}
	printf ("%d%d%d",x,y,z);
}
