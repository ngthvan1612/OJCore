#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int sosanh(int a,int b,int &A);
int sosanh2(int a,int b,int &B);
void xuat(int A,int B,int C);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A=0,B=0,C=0;
	int kq1=sosanh(x,y,A);
	int kq2=sosanh(z,t,A);
	 A=kq1+kq2;
    int kq3=sosanh2(x,y,B);
	int kq4=sosanh(u,v,B);
	 B=kq3+kq4;
	int kq5=sosanh2(u,v,C);
	int kq6=sosanh2(z,t,C);
	C=kq4+kq5;
	xuat(A,B,C);

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int sosanh(int a,int b,int &A)
{
	A=0; 
	if((a==1 && b==3) ||(a==3 && b==2) ||(a==2 && b==1))
		A=A+3;
	else if(a==b)
	{
		A=A+1;
	}
	else
		A=0;
	return A;
	
	
}
int sosanh2(int a,int b,int &A)
{
	A=0; 
	if((a==1 && b==3) ||(a==3 && b==2) ||(a==2 && b==1))
		A=0;
	else if(a==b)
	{
		A=A+1;
	}
	else
		A=A+3;
	return A;
}
void xuat(int A,int B,int C)
{
	printf("%d %d %d",A,B,C);
}
