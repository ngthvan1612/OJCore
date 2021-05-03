#include<stdio.h>
int cp(int a, int b);
void main (){
	int x,y,z ,t ,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int kq1=cp(x,y)+ cp(z,t);
	int kq2=cp(y,x)+cp(u,v);
	int kq3=cp(t,z)+cp(v,u);
	printf("%d %d %d",kq1, kq2 , kq3);
}
int cp(int a, int b)
{
	if(a==b)
		return 1;
	if((a==1 &&b==3 )|| (a==3 && b==2 ) ||(a==2 && b==1))
		return 3;
	return 0;
}
