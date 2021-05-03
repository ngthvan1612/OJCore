#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int ktra(int x,int y,int z,int t,int u,int v);
void xuat(int kq);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=ktra(x,y,z,t,u,v);
	xuat(kq);
}
void nhap(int x,int y,int z,int t,int u,int v)
{
	scanf("%d %d %d %d %d %d",&x,&y,&z,&t,&u,&v);
}
int ktra(int x,int y,int z,int t,int u,int v)
{
    int sum1=0;
	int sum2=0;
	int sum3=0;
	int sum1a=0;
	int sum1b=0;
	int sum2a=0;
	int sum2b=0;
	int sum3a=0;
	int sum3b=0;
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=ktra(x,y,z,t,u,v);
	xuat(kq);
	{
		if (y==1)		
			sum1a=sum2a=1;		
  		else if (y==2)
		     sum1a=0;
		     sim2a=3;
	         else if (y==3)
			    sum1a=3;
	     	    sum2a=0;
    }
	else if (x==2)
		if (y==1)
			sum1a=0;
		    sum2a=3
		else if (y==2)
		     sum1a=sum2a=1;
             else if (y==3)
				 sum1a=3;
			     sum2a=0;
	else if (x==3)
		if (y==1)
			sum1a=0;
	        sum1a=3;
		 else if (y==2)
			sum1a=0;
			sum2a=3;
			else if (y==3)
				sum1a=sum2a=1;
	if (z=1)
	{
		if (t=1)		
		sum1b=sum3a=1;
  		else if (t==2)
		     sum1b=0
		     sim3a=3;
	         else if (t==3)
			    sum1b=3;
	     	    sum3a=0;
    }
	else if (z==2)
		if (t==1)
			sum1b=0;
		    sum3a=3;
		else if (==2)
		     sum1b=sum3a=1;
             else if (t==3)
				 sum1b=3;
			     sum3a=0;
	else if (z==3)
		if (t==1)
			sum1b=0;
	        sum3a=3;
		 else if (t==2)
			sum1b=0;
			sum3a=3;
			else if (z==3)
				sum1b=sum3a=1;
	if (u==1)
	{
		if (v==1)
			sum2b=sum3b=1;
  		else if (v==2)
		     sum2b=0;
		     sim3b=3;
	         else if (v==3)
			    sum2b=3;
	     	    sum3b=0;
    }
	else if (u==2)
		if (v==1)
			sum2b=0;
		    sum3b=3;
		else if (v==2)
		     sum2b=sum3b=1;
             else if (v==3)
				 sum2b=3;
			     sum3b=0;
	else if (u==3)
		if (v==1)
			sum2b=0;
	        sum3b=3;
		 else if (v==2)
			sum2b=0;
			sum3b=3;
			else if (v==3)
            sum1c=sum2c=1;
   sum1=sum1a+sum1b;
   sum2=sum2a+sum2b;
   sum3=sum3a+sum3b;
}
void xuat(int kq)
{
	printf("%d %d %d",sum1,sum2,sum3);
}