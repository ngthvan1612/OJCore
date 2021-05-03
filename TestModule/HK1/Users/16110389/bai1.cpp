#include<stdio.h>
#include<string.h>

void main()
{
	int x,y,z,t,u,v;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	scanf("%d",&t);
	scanf("%d",&u);
	scanf("%d",&v);
	int a=0,b=0,c=0;
   
    //A vs B
	if(x==1 && y==3)
	{
		a+=3;
		b+=0;
	}
	if(x==1 && y==2)
	{
		a+=0;
		b+=3;
	}
	if(x==2 && y==3)
	{
		a+=0;
		b+=3;
	}
	if(x==2 && y==1)
	{
		a+=3;
		b+=0;
	}
    if(x==3 && y==2)
	{
		a+=3;
		b+=0;
	}
	if(x==3 && y==1)
	{
		a+=0;
		b+=3;
	}
	if(x==y)
	{
		a+=1;
		b+=1;
	}
	// Avs C
	if(z==1 && t==3)
	{
		a+=3;
		c+=0;
	}
	if(z==1 && t==2)
	{
		a+=0;
		c+=3;
	}
	if(z==2 && t==3)
	{
		a+=0;
		c+=3;
	}
	if(z==2 && t==1)
	{
		a+=3;
		c+=0;
	}
    if(z==3 && t==2)
	{
		a+=3;
		c+=0;
	}
	if(z==3 && t==1)
	{
		a+=0;
		c+=3;
	}
	if(z==t)
	{
		a+=1;
		c+=1;
	}
    // B vs C
	if(u==1 && v==3)
	{
		b+=3;
		c+=0;
	}
	if(u==1 && v==2)
	{
		b+=0;
		c+=3;
	}
	if(u==2 && v==3)
	{
		b+=0;
		c+=3;
	}
	if(u==2 && v==1)
	{
		b+=3;
		c+=0;
	}
    if(u==3 && v==2)
	{
		b+=3;
		c+=0;
	}
	if(u==3 && v==1)
	{
		b+=0;
		c+=3;
	}
	if(u==v)
	{
		b+=1;
		c+=1;
	}
	printf("%d %d %d",a,b,c);
}