#include<stdio.h> 
int main() 
{
	int x,y,z,t,u,v ;
	scanf("%d %d %d %d %d %d" ,&x,&y,&z,&t,&u,&v) ;
	int a = 0 ;
	int b = 0 ;
	int c = 0 ;
	if(x == 1 && y == 1 ) {
		a = a + 1 ;
		b = b + 1 ;
	}
	if(x == 1 && y == 3 )
	{
		a = a + 3 ;
	}
	if(x == 1 && y == 2)
	{
		b = b + 3 ;
	}
	if(x == 2 && y == 3) 
	b = b + 3 ;
	if(x == 2 && y == 1) 
	a = a + 3 ;
	if(x == 2 && y == 2 ) 
	{
		a = a + 1 ;
		b = b + 1 ;
	}
	if(x == 3 && y == 3) 
	{
	    a = a + 1 ;
		b= b+1 ; 
	}
	if(x == 3 && y == 1) 
	b = b + 3 ;
	if(x == 3 && y == 2) 
	a = a + 3 ;
	
	if(z == 1 && t == 1 ) {
		a = a + 1 ;
		c = c + 1 ;
	}
	if(z == 1 && t == 3 )
	{
		a = a + 3 ;
	}
	if(z == 1 && t == 2)
	{
		c = c + 3 ;
	}
	if(z == 2 && t == 3) 
	c = c + 3 ;
	if(z == 2 && t == 1) 
	a = a + 3 ;
	if(z == 2 && t == 2 ) 
	{
		a = a + 1 ;
		c = c + 1 ;
	}
	if(z == 3 && t == 3) 
	{
	    a = a + 1 ;
		c= c+1 ; 
	}
	if(z == 3 && t == 1) 
	c = c + 3 ;
	if(z == 3 && t == 2) 
	a = a + 3 ;
	
		if(u == 1 && v == 1 ) {
		b = b + 1 ;
		c = c + 1 ;
	}
	if(u == 1 && v == 3 )
	{
		b = b + 3 ;
	}
	if(u == 1 && v == 2)
	{
		c = c + 3 ;
	}
	if(u == 2 && v == 3) 
	c = c + 3 ;
	if(u == 2 && v == 1) 
	b = b + 3 ;
	if(u == 2 && v == 2 ) 
	{
		b = b + 1 ;
		c = c + 1 ;
	}
	if(u == 3 && v == 3) 
	{
	    b = b + 1 ;
		c= c+1 ; 
	}
	if(u == 3 && v == 1) 
	c = c + 3 ;
	if(u == 3 && v == 2) 
	b = b + 3 ;
	
	printf("%d %d %d" , a,b,c)
	
	
	
	
	

	
	
return 0 ;
}
