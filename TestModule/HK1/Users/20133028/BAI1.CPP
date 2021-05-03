
#include <stdio.h>
int main ()
{
	int x, y, z, t, u, v;
	int a=0, b=0, c=0;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	if ( x, y, z, t, u, v >= 1 && x, y ,z ,t , u, v <= 3)
	{
		if (x==1 && y==3 || x==3 && y==2 || x==2 && y==1)
		{
	 	  a=a+3;
		}
 	    else if (x==3 && y==1 || x==2 && y==3 || x==1 && y==2)
		{
		  b=b+3;
		}
	    else 
		{
	  	  a=a+1;
	  	  b=b+1;
		}
	
	    if (z==1 && t==3 || z==3 && t==2 || z==2 && t==1)
		{
	      a=a+3;
		}
	    else if (z==3 && t==1 || z==2 && t==3 || z==1 && t==2)
		{
	 	  c=c+3;
		}
	    else
		{
		  a=a+1;
		  c=c+1;
		}
	
	    if (u==1 && v==3 || u==3 && v==2 || u==2 && v==1)
		{
		  b=b+3;
		}
	    else if (u==3 && v==1 || u==2 && v==3 || u==1 && v==2)
		{
		  c=c+3;
		}
	    else 
		{
		  b=b+1;
		  c=c+1;
		}
	}
    printf(" %d %d %d ", a, b, c);
		return 1;
}
