#include<stdio.h>
void thangthua(int x,int y,int z,int t,int u,int v,int C[])
{
	if(((x==3)&&(y==2))||((x==2&&y==1))||((x==1&&y==3)))
	{
		C[0]=3;
		C[1]=0;
	}
	if(x==y)
	{
		C[0]=1;
		C[1]=1;
	}
	if(((y==3)&&(x==2))||((y==2&&x==1))||((y==1&&x==3)))
	{
		C[0]=0;
		C[1]=3;
	}
	if(((z==3)&&(t==2))||((z==2&&t==1))||((z==1&&t==3)))
	{
		C[0]=C[0]+3;
		C[2]=0;
	}
	if(z==t)
	{
		C[0]=C[0]+1;
		C[2]=1;
	}
	if (((t==3)&&(z==2))||((t==2&&z==1))||((t==1&&z==3)))
	{
		C[2]=3;
	}
	if (((u==3)&&(v==2))||((u==2&&v==1))||((u==1&&v==3)))
	{
		C[1]=C[1]+3;
	}
	if (((v==3)&&(u==2))||((v==2&&u==1))||((v==1&&u==3)))
	{
		C[2]=C[2]+3;
	}
	if(u==v)
	{
		C[2]=C[2]+1;
		C[1]=C[1]+1;
	}
}
void xuat(int C[])
{
	for(int i=0;i<3;i++)
	{
		printf("%d ",C[i]);
	}
}
void main()
{
	int x,y,z,t,u,v,C[30];
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	thangthua(x,y,z,t,u,v,C);
	xuat(C);
}
