#include<stdio.h>
void nhap (int &x,int &y,int &z,int &t,int &v,int &u);
int th(int x,int y,int z,int t,int v,int u);
void xuat (int kq );

void main ()
{
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	int kq=th(x,y,z,t,v,u);
	xuat (kq);
}
void nhap (int &x,int &y,int &z,int &t,int &v,int &u)
{
	scanf ("%d%d%d%d%d%d";&x,&y,&z,&u,&v,&u);
}
int th(int x,int y,int z,int t,int v,int u)
{
int kq;
int A=0;
int B=0;
int C=0;
if((x==1,y==2)||(x=2,y==3)||(x=3,y=1))
(B=B+3)&&(A=A+0);
return B;
if(x=y)
(A=A+1)&&(B=B+1);
return B,A;
if ((y==1,x==2)||(y=2,x==3)||(y=3,x=1))
(A=A+3)&&(B=B+0);
 return A;
if ((z==1,t==2)||(z=2,t==3)||(z=3,t=1)
	(C=C+3)&&(A=A+0)
return A;
if((t==1,z==2)||(t=2,z==3)||(t=3,z=1))
(A=A+3)&&(C=C+0);
return A;
if(z=t)
(A=A+1)&&(C=C+1);
return A,C;
if ((u==1,v==2)||(u=2,v==3)||(u=3,v=1))
(B=B+3)&&(C=C+0);
return B;
if( (v==1,u==2)||(v=2,u==3)||(v=3,u=1))
(C=C+3)&&(B=B+0);
return C;
if (u=v)
(B=B+1)&&(C=C+1);
return B,C;
void xuat (int kq )
{
printf("%d%d%d",kq);
}