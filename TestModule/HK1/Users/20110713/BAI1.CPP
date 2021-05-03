#include <stdio.h>

void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void xuli(int x,int y,int &demA,int &demB);
void xuat(int x,int y,int z);

int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int demA=0,demB=0,demC=0;
	xuli(x,y,demA,demB);
	xuli(z,t,demA,demC);
	xuli(u,v,demB,demC);
	xuat(demA,demB,demC);
	return 0;
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int x,int y,int z)
{
	printf("%d %d %d",x,y,z);	
}
void xuli(int x,int y,int &demA,int &demB)
{
	if(x==1)
	{
		if(y==3)
		{
			demA+=3;
			demB+=0;
		}
		else if(y==2)
		{
			demA+=0;
			demB+=3;
		}
		else
		{
			demA+=1;
			demB+=1;
		}
	}
	else if(x==2)
	{
		if(y==3)
		{
			demA+=0;
			demB+=3;
		}
		else if(y==2)
		{
			demA+=1;
			demB+=1;
		}
		else
		{
			demA+=3;
			demB+=0;
		}		
	}
	else
	{
		if(y==3)
		{
			demA+=1;
			demB+=1;
		}
		else if(y==2)
		{
			demA+=3;
			demB+=0;
		}
		else
		{
			demA+=0;
			demB+=3;
		}
	}
}