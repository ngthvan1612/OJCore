#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void tinh(int x, int y, int z, int t, int u, int v,int &bana, int &banb, int &banc);
void xuat( int bana,int banb,int banc);

int main()
{
	int x,y,z,t,u,v;
	int bana=0;
	int banb=0;
	int banc=0;
	nhap(x,y,z,t,u,v);
    tinh(x,y,z,t,u,v,bana,banb,banc);
	xuat(bana,banb,banc);
	return 0;
}


void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void tinh(int x, int y, int z, int t, int u, int v,int &bana, int &banb, int &banc)
{
	

	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
		bana=bana+3;
	else if (x==y)
	{
		bana++;
		banb++;
	}
	else banb=banb+3;
	if((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1))
		bana=bana+3;
	else if (z==t)
	{		
		bana++;
		banc++;
	}
	else banc=banc+3;
	if((u==1 && v==3) || (u==3 && v==2) || (u==2 && v==1))
		banb=banb+3;
	else if (u==v)
	{
		banb++;
		banc++;
	}
	else banc=banc+3;
}
void xuat( int bana,int banb,int banc)
{
	printf("%d %d% %d", bana,banb,banc);
}