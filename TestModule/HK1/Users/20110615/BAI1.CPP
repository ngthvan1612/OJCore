#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void tinhdiem(int x,int y,int z,int t,int u,int v,int &pa,int &pb,int &pc);
void xuat(int pa,int pb,int pc);
int main()
{
	int x,y,z,t,u,v,pa,pb,pc;
	nhap(x,y,z,t,u,v);
	tinhdiem(x,y,z,t,u,v,pa,pb,pc);
	xuat(pa,pb,pc);
	return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinhdiem(int x,int y,int z,int t,int u,int v,int &pa,int &pb,int &pc)
{
	 pa=0;
	 pb=0;
	 pc=0;
	if(x==y)
	{
		pa++;
		pb++;
	}
	else if((x==1)&&(y==2))
	{
		pb+=3;
	}
	else if((x==1)&&(y==3))
	{
		pa+=3;
	}
	else if((x==2)&&(y==1))
	{
		pa+=3;
	}
	else if((x==2)&&(y==3))
	{
		pb+=3;
	}
	else if((x==3)&&(y==1))
	{
		pb+=3;
	}
	else if((x==3)&&(y==2))
	{
		pa+=3;
	}
	if(z==t)
	{
		pa++;
		pc++;
	}
	else if((z==1)&&(t==2))
	{
		pc+=3;
	}
	else if((z==1)&&(t==3))
	{
		pa+=3;
	}
	else if((z==2)&&(t==1))
	{
		pa+=3;
	}
	else if((z==2)&&(t==3))
	{
		pc+=3;
	}
	else if((z==3)&&(t==1))
	{
		pc+=3;
	}
	else if((z==3)&&(t==2))
	{
		pa+=3;
	}
	if(u==v)
	{
		pb++;
		pc++;
	}
	else if((u==1)&&(v==2))
	{
		pc+=3;
	}
	else if((u==1)&&(v==3))
	{
		pb+=3;
	}
	else if((u==2)&&(v==1))
	{
		pb+=3;
	}
	else if((u==2)&&(v==3))
	{
		pc+=3;
	}
	else if((u==3)&&(v==1))
	{
		pc+=3;
	}
	else if((u==3)&&(v==2))
	{
		pb+=3;
	}
}
void xuat(int pa,int pb,int pc)
{
	printf("%d %d %d",pa,pb,pc);
}