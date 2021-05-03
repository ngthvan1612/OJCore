#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int kTra(int x,int y);
void tinhDiem(int x,int y,int z,int t,int u,int v,int A[]);
void xuat(int A[]);
void main()
{
	int A[3];
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinhDiem(x,y,z,t,u,v,A);
	xuat(A);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int kTra(int x,int y)
{
	if(x==1 && y==3 || x==2 && y==1 || x==3 && y==2)
		return 3;
	else if(x==y)
		return 1;
	return 0;
}
void tinhDiem(int x,int y,int z,int t,int u,int v,int A[])
{
	int a,b,c;
    a=kTra(x,y)+kTra(z,t);
	b=kTra(y,x)+kTra(u,v);
	c=kTra(t,z)+kTra(v,u);
	A[0]=a;
	A[1]=b;
	A[2]=c;
}
void xuat(int A[])
{
	for(int i=0;i<3;i++)
		printf("%d ",A[i]);
}







