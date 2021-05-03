#include<stdio.h>
void tinh(int x,int y,int &demA,int &demB);
void main()
{
	int demA,demB,demC,x,y,z,t,u,v;
    scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	demA=0;
	demB=0;
	demC=0;
	tinh(x,y,demA,demB);
	tinh(z,t,demA,demC);
	tinh(u,v,demB,demC);
	printf("%d %d %d",demA,demB,demC);
}
void tinh(int x,int y,int &demA,int &demB)
{
	if(x==1)
	{
		if(y==1)
		{
			demA++;
			demB++;
		}
		else if(y==2)
		{
			demB=demB+3;
		}
		else if(y==3)
		{
			demA=demA+3;
		}
	}
	else if(x==2)
	{
		if(y==1)
			demA=demA+3;
		else if(y==2)
		{
			demA++;
			demB++;
		}
		else 
			demB=demB+3;
	}
	else if(x==3)
	{
		if(y==1)
		{
			demB=demB+3;
		}
		else if(y==2)
		{
			demA=demA+3;
		}
		else
		{
			demA++;
			demB++;
		}
	}
}

