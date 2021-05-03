#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t, int &u,int &v);
int tinhdiem(int x, int y,int z, int t, int u, int v, int &i, int &j, int &k);
void xuat(int i,int j, int k);
void main()
{
	int x,y,z,t,u,v,i,j,k;
	nhap(x,y,z,t,u,v);
	int kq=tinhdiem(x,y,z,t,u,v,i,j,k);
	xuat (i,j,k);
}
void nhap(int &x,int &y,int &z,int &t, int &u,int &v)
{
	scanf("%d %d %d %d %d %d",&x, &y, &z, &t, &u, &v);
}
int tinhdiem(int x, int y,int z, int t, int u, int v, int &i, int &j, int &k)
{
	i=0;
	j=0;
	k=0;
	if(x==y)
	{
		i++;
		j++;
	}
	else if(x==3 && y==2)
		i=i+3;
	else if(x==2 && y==1)
		i=i+3;
	else if(x==1 && y==3)
		i=i+3;
	else
		j=j+3;
	if(z==t)
	{
		i++;
		k++;
	}
	else if(z==3 && t==2)
        i=i+3;
	else if(z==2 && t==1)
		i=i+3;
	else if(z==1 && t==3)
		i=i+3;
	else
		k=k+3;
	if(u==v)
	{
		j++;
		k++;
	}
	else if(u==3 && v==2)
        j=j+3;
	else if(u==2 && v==1)
		j=j+3;
	else if(u==1 && v==3)
		j=j+3;
	else
		k=k+3;
	return 0;

}
void xuat(int i, int j, int k)
{
	printf("%d %d %d",i,j,k);
}