#include<stdio.h>
void nhap(int&x,int&y,int&z,int&t,int&u,int&v);
void xuLi(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	xuLi(x,y,z,t,u,v);
}
void nhap(int&x,int&y,int&z,int&t,int&u,int&v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuLi(int x,int y,int z,int t,int u,int v)
{
	int pA=0,pB=0,pC=0;
	/*hiep 1*/
	if((x==1 && y==2) || (x==2 && y==3) || (x==3)&&(y==1))
		pB=pB+3;
	if((x==1 && y==1) || (x==2 && y==2) || (x==3)&&(y==3))
	{
		pB++;
		pA++;
	}
	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
		pA=pA+3;
	/* hiep 2*/
	if((z==1 && t==2) || (z==2 && t==3) || (z==3)&&(t==1))
		pC=pC+3;
	if((z==1 && t==1) || (z==2 && t==2) || (z==3)&&(t==3))
	{
		pC++;
		pA++;
	}
	if((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1))
		pA=pA+3;
	/*hiep 3*/
	if((v==1 && u==2) || (v==2 && u==3) || (v==3)&&(u==1))
		pB=pB+3;
	if((u==1 && v==1) || (u==2 && v==2) || (u==3)&&(v==3))
	{
		pB++;
		pC++;
	}
	if((v==1 && u==3) || (v==3 && u==2) || (v==2 && u==1))
		pC=pC+3;
	printf("%d %d %d",pA,pB,pC); 
}

