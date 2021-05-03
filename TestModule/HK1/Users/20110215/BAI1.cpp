#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int diemA(int x,int y,int z,int t);
int diemB(int x,int y,int u,int v);
int diemC(int y,int t,int u,int v);
int main()
{
	int x,y,z,t,u,v,a,b,c;
	nhap(x,y,z,t,u,v);
	diemA(x,y,z,t);
	diemB(x,y,u,v);
	diemC(z,t,u,v);
	return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int diemA(int x,int y,int z,int t)
{
	int A=0;
	if(x==1)
	{
		if(y==1)	{	A+=1;	}
		else if(y==2)	{A+=0;	}
		else if(y==3)	{A+=3;	}
	}
	else if(x==2)
	{
		if(y==1)	{A+=3;	}
		else if(y==2)	{A+=1;	}
		else if(y==3)	{A+=0;	}
	}
	else if(x==3)
	{
		if(y==1)	{A+=0;	}
		if(y==2)	{A+=3;	}
		if(y==3)	{A+=1;	}
	}
	if(z==1)
	{
		if(t==1)	{	A+=1;	}
		else if(t==2)	{A+=0;	}
		else if(t==3)	{A+=3;	}
	}
	else if(z==2)
	{
		if(t==1)	{A+=3;	}
		else if(t==2)	{A+=1;	}
		else if(t==3)	{A+=0;	}
	}
	else if(z==3)
	{
		if(t==1)	{A+=0;	}
		if(t==2)	{A+=3;	}
		if(t==3)	{A+=1;	}
	}
	printf("%d",A);
	return A;
}
int diemB(int x,int y,int u,int v)
{
	int B=0;
	if(x==1)
	{
		if(y==1)	{	B+=1;	}
		else if(y==2)	{B+=3;	}
		else if(y==3)	{B+=0;	}
	}
	else if(x==2)
	{
		if(y==1)	{B+=0;	}
		else if(y==2)	{B+=1;	}
		else if(y==3)	{B+=3;	}
	}
	else if(x==3)
	{
		if(y==1)	{B+=3;	}
		else if(y==2)	{B+=0;	}
		else if(y==3)	{B+=1;	}
	}
	if(u==1)
	{
		if(v==1)	{	B+=1;	}
		else if(v==2)	{B+=0;	}
		else if(v==3)	{B+=3;	}
	}
	else if(u==2)
	{
		if(v==1)	{B+=3;	}
		else if(v==2)	{B+=1;	}
		else if(v==3)	{B+=0;	}
	}
	else if(u==3)
	{
		if(v==1)	{B+=0;	}
		if(v==2)	{B+=3;	}
		if(v==3)	{B+=1;	}
	}
	printf(" %d",B);
	return B;
}
int diemC(int z,int t,int u,int v)
{
	int C=0;
	if(t==1)
	{
		if(z==1)	{	C+=1;	}
		else if(z==2)	{C+=0;	}
		else if(z==3)	{C+=3;	}
	}
	else if(t==2)
	{
		if(z==1)	{C+=3;	}
		else if(z==2)	{C+=1;	}
		else if(z==3)	{C+=0;	}
	}
	else if(t==3)
	{
		if(z==1)	{C+=0;	}
		if(z==2)	{C+=3;	}
		if(z==3)	{C+=1;	}
	}
	if(v==1)
	{
		if(u==1)	{	C+=1;	}
		else if(u==2)	{C+=0;	}
		else if(u==3)	{C+=3;	}
	}
	else if(v==2)
	{
		if(u==1)	{C+=3;	}
		else if(u==2)	{C+=1;	}
		else if(u==3)	{C+=0;	}
	}
	else if(v==3)
	{
		if(u==1)	{C+=0;	}
		if(u==2)	{C+=3;	}
		if(u==3)	{C+=1;	}
	}
	printf(" %d",C);
	return C;
}
