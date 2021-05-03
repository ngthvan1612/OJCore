#include<stdio.h>
int kiem(int x,int y)
{
	if (x==y) return 2;
	if ( ( x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1)) return 1;
	return 0;
}
int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int a=0,b=0,c=0;
	if (kiem(x,y)==1) a=a+3; 
	else if (kiem(x,y)==2)
	 {
	 	a++;
	 	b++;
	 }
	else b=b+3;
	if (kiem(z,t)==1) a=a+3; 
	else
	if (kiem(z,t)==2)
	 {
	 	a++;
	 	c++;
	 }
	else c=c+3;
	if (kiem(u,v)==1) b=b+3; 
	else 
	if (kiem(u,v)==2)
	 {
	 	b++;
	 	c++;
	 }
	else c=c+3;
	printf("%d %d %d",a,b,c);
	return 0;
}
