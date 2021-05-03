#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int A,int B,int C)
{
	printf("%d %d %d",A,B,C);
}
int kt1(int x,int y,int z,int t)
{
	int A=0;
	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
		A=A+3;
	else if((x==1 && y==1) || (x==3 && y==3) || (x==2 && y==2))
		A=A+1;
	else
		A=A;
	if((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1))
		A=A+3;
	else if((z==1 && t==1) || (z==3 && t==3) || (z==2 && t==2))
		A=A+1;
	else
		A=A;
	return A;
}
int kt2(int x,int y,int u,int v)
{
	int B=0;
	if((y==1 && x==3) || (y==3 && x==2) || (y==2 && x==1))
		B=B+3;
	else if((y==1 && x==1) || (y==3 && x==3) || (y==2 && x==2))
		B=B+1;
	else
		B=B;
	if((u==1 && v==3) || (u==3 && v==2) || (u==2 && v==1))
		B=B+3;
	else if((u==1 && v==1) || (u==3 && v==3) || (u==2 && v==2))
		B=B+1;
	else
		B=B;
	return B;
}
int kt3(int z,int t,int u,int v)
{
	int C=0;
	if((t==1 && z==3) || (t==3 && z==2) || (t==2 && z==1))
		C=C+3;
	else if((t==1 && z==1) || (t==3 && z==3) || (t==2 && z==2))
		C=C+1;
	else
		C=C;
	if((v==1 && u==3) || (v==3 && u==2) || (v==2 && u==1))
		C=C+3;
	else if((v==1 && u==1) || (v==3 && u==3) || (v==2 && u==2))
		C=C+1;
	else
		C=C;
	return C;
}
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A=kt1(x,y,z,t);
	int B=kt2(x,y,u,v);
	int C=kt3(z,t,u,v);
	xuat(A,B,C);
}