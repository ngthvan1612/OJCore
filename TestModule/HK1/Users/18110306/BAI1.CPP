#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>




int main(){
	int a=0,b=0,c=0;
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x, &y, &z, &t, &u, &v);
	if(x==3&&y==1)
		b=b+3;
	if(x==1&&y==3)
		a=a+3;	
	if(x==1&&y==2)
		b=b+3;
	if(x==2&&y==1)
		a=a+3;	
	if(x==3&&y==2)
		a=a+3;
	if(x==2&&y==3)
		b=b+3;	
	if((x==1&&y==1)||(x==2&&y==2)||(x==3&&y==3))
	{ 
	a=a+1;
	b=b+1;
	}

	if(z==3&&t==1)
		c=c+3;
	if(z==1&&t==3)
		a=a+3;	
	if(z==1&&t==2)
		c=c+3;
	if(z==2&&t==1)
		a=a+3;	
	if(z==3&&t==2)
		a=a+3;
	if(z==2&&t==3)
		c=c+3;	
	if((z==1&&t==1)||(z==2&&t==2)||(z==3&&t==3))
	{ 
	a=a+1;
	c=c+1;
	}

	if(u==3&&v==1)
		c=c+3;
	if(u==1&&v==3)
		b=b+3;	
	if(u==1&&v==2)
		c=c+3;
	if(u==2&&v==1)
		b=b+3;	
	if(u==3&&v==2)
		b=b+3;
	if(u==2&&v==3)
		c=c+3;	
	if((u==1&&v==1)||(u==2&&v==2)||(u==3&&v==3))
	{ 
	b=b+1;
	c=c+1;
	}


printf("%d\t%d\t%d\n",a,b,c);
}