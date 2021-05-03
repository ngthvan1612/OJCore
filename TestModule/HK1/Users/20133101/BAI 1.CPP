#include <stdio.h>
int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
	int diemA=0;
	int diemB=0;
	int diemC=0;
	
	if(x==y)
	   diemA++;
	   diemB++;
	if(z==t)
	  diemA++;
	  diemC++;
	if(u==v)
	   diemB++;
	   diemC++;
	if (x>y && y>1)
	    diemA=diemA+3;
	    else if ( y==1   && x==3)
	        diemB=diemB+3;
	if (z>t && t>1)
	    diemA=diemA+3;
	else if ( t==1   && z==3)
	        diemC=diemC+3;     
	if (u>v && v>1)
	    diemB=diemB+3;
    else if ( v==1   && u==3)
	        diemC=diemC+3;
	printf("%d %d %d", diemA,diemB,diemC);
}
