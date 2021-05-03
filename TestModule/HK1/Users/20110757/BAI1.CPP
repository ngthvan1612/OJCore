#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int tinh(int a,int b);
int bailam(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	bailam(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int tinh(int a,int b)
{
int diem=0;
	if(a==1) 
	{
		if(b==1)
			diem=diem+1;
		else if(b==2)
			diem=0;
		else if(b==3)
			diem=diem+3;
	}
	if(a==2)
	{
		if(b==1)
			diem=diem+3;
		else if(b==2)
			diem=diem+1;
		else if(b==3)
			diem=0;
	}
	if(a==3)
	{
		if(b==1)
			diem=0;
		else if(b==2)
			diem=diem+3;
		else if(b==3)
			diem=diem+1;
	}
return diem;
}
int bailam(int x,int y,int z,int t,int u,int v)
{
	int A=tinh(x,y)+tinh(z,t);
	int B=tinh(y,x)+tinh(u,v);
	int C=tinh(t,z)+tinh(v,u);
	printf("%d %d %d",A,B,C);
	return 0;
}