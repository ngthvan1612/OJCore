#include<stdio.h>
void nhap (int &x,int &y,int &z,int &t,int &u,int &v);
void xuat(int B[],int nB);
void xuli(int x,int y,int z,int t,int u,int v,int B[],int &nB);
void main()
{
	int x,y,z,t,u,v,B[100],nB;
	nhap (x,y,z,t,u,v);
	xuli(x,y,z,t,u,v,B,nB);
	xuat(B,nB);
}
void nhap (int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int B[],int nB)
{
	for (int i=0;i<nB;i++)
		printf("%d ",B[i]);
}
void xuli(int x,int y,int z,int t,int u,int v,int B[],int &nB)
{
	int a=0;
	int b=0;
	int c=0;
	nB=0;
	if (x==1 && y==3)
	{
		a+=3;
		b+=0;
	}
	else if(x==1 && y==2)
	{
		a+=0;
		b+=3;
	}
	else if(x==1 && y==1)
	{
		a+=1;
		b+=1;
	}
	else if (x==2 && y==3)
	{
		a+=0;
		b+=3;
	}
	else if(x==2 && y==2)
	{
		a+=1;
		b+=1;
	}
	else if(x==2 && y==1)
	{
		a+=3;
		b+=0;
	}
	else if (x==3 && y==3)
	{
		a+=1;
		b+=1;
	}
	else if(x==3 && y==2)
	{
		a+=3;
		b+=0;
	}
	else if(x==3 && y==1)
	{
		a+=0;
		b+=3;
	}
	if (z==1 && t==3)
	{
		a+=3;
		c+=0;
	}
	else if(z==1 && t==2)
	{
		a+=0;
		c+=3;
	}
	else if(z==1 && t==1)
	{
		a+=1;
		c+=1;
	}
	else if (z==2 && t==3)
	{
		a+=0;
		c+=3;
	}
	else if(z==2 && t==2)
	{
		a+=1;
		c+=1;
	}
	else if(z==2 && t==1)
	{
		a+=3;
		c+=0;
	}
	else if (z==3 && t==3)
	{
		a+=1;
		c+=1;
	}
	else if(z==3 && t==2)
	{
		a+=3;
		c+=0;
	}
	else if(z==3 && t==1)
	{
		a+=0;
		c+=3;
	}
	if (u==1 && v==3)
	{
		b+=3;
		c+=0;
	}
	else if(u==1 && v==2)
	{
		b+=0;
		c+=3;
	}
	else if(u==1 && v==1)
	{
		b+=1;
		c+=1;
	}
	else if (u==2 && v==3)
	{
		b+=0;
		c+=3;
	}
	else if(u==2 && v==2)
	{
		b+=1;
		c+=1;
	}
	else if(u==2 && v==1)
	{
		b+=3;
		c+=0;
	}
	else if (u==3 && v==3)
	{
		b+=1;
		c+=1;
	}
	else if(u==3 && v==2)
	{
		b+=3;
		c+=0;
	}
	else if(u==3 && v==1)
	{
		a+=0;
		c+=3;
	}
	B[nB++]=a;
	B[nB++]=b;
	B[nB++]=c;
}