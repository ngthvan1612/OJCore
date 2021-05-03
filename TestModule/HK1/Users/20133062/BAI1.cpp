#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinhdiem(int x,int y,int z,int t,int u,int v,int a,int b,int c);
void xuat(int a,int b,int c);
void main()
{ 
   int x,y,z,t,u,v;
    nhap(x,y,z,t,u,v);
	int a,b,c;
	int kq=tinhdiem(x,y,z,t,u,v,a,b,c);
  printf("%d%d%d",a,b,c);
	 

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinhdiem(int x,int y,int z,int t,int u,int v ,int a,int b,int c)
{
	 a=0;
	 b=0;
	 c=0;
	{
		if((x==1)&&(y==3)||(x==3)&&(y==2)||(x==2)||(y==1))
   {
	    a=a+3;
   
   }
	
   else 
   {
	   b=b+3;
   
   }
  
    if((x==1)&&(y==1)||(x==2) &&(y==2) || (x==3)||(y==3))
	   
   {
	   a=a+1;
	   b=b+1;
   }
   

     if ((z==1)&&(t==3)||(z==3)&&(t==2)||(z==2)&&(x==1))
		  a=a+3;
	 else
		  c=c+3;
	 if((z==1)&&(t==1)||(z==2) &&(t==2) || (z==3)&&(t==3))
	 {
		 a=a+1;
		 c=c+1;
	 }
	
	
	 if ((u==1)&&(v==3)||(u==3)&&(v==2)||(u==2)&&(v==1))
		
	 {
		   b=b+3;
	 
	 }
	 
	 else
		  
	 {
		 c=c+3;
	
	 }
	
	 if((u==1)&&(v==1)||(u==2) &&(v==2) || (u==3)||(v==3))

	 {
		 b=b+1;
		 c=c+1;
	 }
	  
return a,b,c;
}

