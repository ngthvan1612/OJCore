#include<stdio.h>
void nhap(int &x, int&y,int&z,int&t,int&u,int&v);
int keodau(int m, int n) ;
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a=keodau(x,y)+keodau(z,t);
	int b=keodau(u,v)+keodau(y,x);
	int c=keodau(t,z)+keodau(v,u);
	printf("%d %d %d", a,b,c);
}
void nhap(int &x, int&y,int&z,int&t,int&u,int&v) 
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
int keodau(int m, int n)
{	
	int t=0;
	if(m==1&&n==3)
			t=t+3;
	else if(m==3&&n==2)
			t=t+3;
	else if(m==2&&n==1)
			t=t+3;
	else if(m==n)
			t=t+1;
	else 
			t=0;
	return t;
}