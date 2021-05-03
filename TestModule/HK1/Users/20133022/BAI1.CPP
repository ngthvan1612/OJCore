#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int a,b,c;
	a=0;
	b=0; 
	c=0;
	 if(x==y)
	 {
		 b++;
		 a++;
	 }
	 else if(x!=y)
	 { 
		 if(y-x==1||x-y==2)
			 b+=3;
		 else a=a+3;
	 }
	 if(z==t)
	 {
		 c++;
		 a++;
	 }
	 else if(z!=t)
	 { 
		 if(t-z==1||z-t==2)
			 c+=3;
		 else a=a+3;
	 }
		 if(u==v)
	 {
		 c++;
		 b++;
	 }
	 else if(u!=v)
	 { 
		 if(v-u==1||u-v==2)
			 c+=3;
		 else b=b+3;
	 }
	 printf("%d %d %d",a,b,c);
	 return 0;

}