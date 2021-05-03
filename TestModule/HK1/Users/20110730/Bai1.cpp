#include<stdio.h>
void nhap(int &x,int &y,int &z, int &t, int &u, int &v);
void ketqua(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	ketqua(x,y,z,t,u,v);
}
void ketqua(int x,int y,int z,int t,int u,int v)
{
	int A=0,B=0,C=0;
	if (x==1 && y==1)
	{
		A+=1;
		B+=1;
	}
	else if (x==1 && y==2)
	{
		A+=0;
		B+=3;
	}
	else if (x==1 && y==3)
	{
		A+=3;
		B+=0;
	}
	else if (x==2 && y==1)
	{
		A+=0;
		B+=3;
	}
	else if(x==2 && y==2)
	{
		A+=1;
		B+=1;
	}
	else if (x==2 && y==3)
	{
		A+=3;
		B+=0;
	}
	else if (x==3 && y==1 )
	{
		A+=3;
		B+=0;
	}
	else if (x==3 && y==2)
	{
		A+=0;
		B+=3;			
	}
	else if (x==3 && y==3)
	{
		A+=1;
		B+=1;
	}
	if (z==1 && t==1)
	{
		A+=1;
		C+=1;
	}
	else if (z==1 && t==2)
	{
		A+=0;
		C+=3;
	}
	else if (z==1 && t==3)
	{
		A+=3;
		C+=0;
	}
	else if (z==2 && t==1)
	{
		A+=0;
		C+=3;
	}
	else if(z==2 && t==2)
	{
		A+=1;
		C+=1;
	}
	else if (z==2 && t==3)
	{
		A+=3;
		C+=0;
	}
	else if (z==3 && t==1 )
	{
		A+=3;
		C+=0;
	}
	else if (z==3 && t==2)
	{
		A+=0;
		C+=3;			
	}
	else if (z==3 && t==3)
	{
		A+=1;
		C+=1;
	}
	if (u==1 && v==1)
	{
		B+=1;
		C+=1;
	}
	else if (u==1 && v==2)
	{
		B+=0;
		C+=3;
	}
	else if (u==1 && v==3)
	{
		B+=3;
		C+=0;
	}
	else if (u==2 && v==1)
	{
		B+=0;
		C+=3;
	}
	else if(u==2 && v==2)
	{
		B+=1;
		C+=1;
	}
	else if (u==2 && v==3)
	{
		B+=3;
		C+=0;
	}
	else if (u==3 && v==1 )
	{
		B+=3;
		C+=0;
	}
	else if (u==3 && v==2)
	{
		B+=0;
		C+=3;			
	}
	else if (u==3 && v==3)
	{
		B+=1;
		C+=1;
	}
	printf("%d %d %d",A,B,C);
}
void nhap(int &x,int &y,int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}