#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int &A,int&B,int&C);
void main()
{
	int A,B,C,x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	{
		A=0;
		B=0;
		C=0;
		if (x==y)
		{
			A=A+1;
			B=B+1;
		}
		else
		{
			if (x!=1 && x>y)
				A=A+3;
			else B=B+3;
		}
		if(x==1&&x!=y)
		{
			if (y==3)
				A=A+3;
			if (y==2)
				B=B+3;
		}
		if (z==t)
		{
			A=A+1;
			C=C+1;
		}	
		else
		{
			if (z!=1 && z>t)
				A=A+3;
			else C=C+3;
		}
		if(z==1&&z!=t)
		{
			if (t==3)
				A=A+3;
			if (t==2)
				C=C+3;
		}
		if (u==v)
		{
			B=B+1;
			C=C+1;
		}
		else
		{
			if (u!=1 && u>v)
				B=B+3;
			else C=C+3;
		
			if(u==1&&u!=v)
			{
				if (v==3)
					B=B+3;
				if (v==2)
					C=C+3;
			}
		}
	}
	xuat(A,B,C);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x, &y, &z, &t, &u, &v);
}


void xuat(int &A,int&B,int&C)
{
	printf("%d %d %d",&A,&B,&C);
}






