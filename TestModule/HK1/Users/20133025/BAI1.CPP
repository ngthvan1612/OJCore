#include<stdio.h>
int main()
{
int x,y,z,t,u,v;
int A=0,B=0,C=0;
scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
if((x==1&&y==3)||(x==2&&y==1)||(x==3&&y==2))
{
	A=A+3; B=B+0;
}
if((x==3&&y==1)||(x==1&&y==2)||(x==2&&y==3))
{
	B=B+3; A=A+0;
}
if(x==y)
{
	B=B+1;
	A=A+1;
}
if((z==1&&t==3)||(z==2&&t==1)||(z==3&&t==2))
{
	A=A+3; C=C+0;
}
if((z==3&&t==1)||(z==1&&t==2)||(z==2&&t==3))
{
	C=C+3; A=A+0;
}
if(z==t)
{
	A=A+1;
	C=C+1;
}
if((u==1&&v==3)||(u==2&&v==1)||(u==3&&v==2))
{
	B=B+3; C=C+0;
}
if((u==3&&v==1)||(u==1&&v==2)||(u==2&&v==3))
{
	C=C+3; A=A+0;
}
if(u==v)
{
	B=B+1;
	C=C+1;
}
printf("%d %d %d",A,B,C);
return 0;
}