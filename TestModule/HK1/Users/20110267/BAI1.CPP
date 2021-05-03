#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u ,int &v);
void tinhdiem(int x,int y, int z, int t, int u, int v);

	void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinhdiem(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u ,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinhdiem(int x,int y, int z, int t, int u, int v)
{
	int A=0;
	int B=0;
	int C=0;
	if(x==1)
	{
		if(y==3)
		{	
			A=A+3;
		}
		else
			B=B+3;
	}
	else if((x==y)){

		A=A+1;
		B=B+1;}
	if(z==1)
	{
		if(t==3)
		{	
			A=A+3;
		}
		else
			C=C+3;
	}
	else if(z==t){

		A=A+1;
		C=C+1;}
				if(u==1)
	{
		if(v==3)
		{	
			B=B+3;
		}
		else
			C=C+3;
	}
	else if(u==v){

		B=B+1;
		C=C+1;}

	

	printf("%d ",A);
	printf("%d ",B);
	printf("%d",C);

}