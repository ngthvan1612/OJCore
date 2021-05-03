#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void tinhdiem(int x,int y,int &A,int &B);
void xuat(int A,int B,int C);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A=0,B=0,C=0;
	tinhdiem(x,y,A,B);
	tinhdiem(z,t,A,C);
	tinhdiem(u,v,B,C);
	xuat(A,B,C);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinhdiem(int x,int y,int &A,int &B)
{
	
	if(x==1)
	{
		if(y==1)
		{
			A+=1;
			B+=1;
		}
		else 
		{
			if(y==2)
				B+=3;
			else
				A+=3;
		}		
	}

	if(x==2)
	{
		if(y==1)
		{
			A+=3;
		}
		else 
		{
			if(y==2)
			{
				A+=1;
				B+=1;
			}
			else
				B+=3;
		}		
	}

	if(x==3)
	{
		if(y==3)
		{
			A+=1;
			B+=1;
		}
		else 
		{
			if(y==2)
				A+=3;
			else
				B+=3;
		}		
	}
}
void xuat(int A,int B,int C)
{
	printf("%d %d %d",A,B,C);
}