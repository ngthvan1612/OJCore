#include<stdio.h>;
void nhap(int &x,int &y,int &z,int &t,int &u,int&v);
void tinh(int x,int y,int z,int t,int u,int v);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinh(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int diem(int x,int y)
{
	if (x==1)
		if(x==y)
			return 1;
		else
			if(y==3)
				return 3;
			else
				return 0;
	if(x==3)
		if(x==y)
			return 1;
		else
			if(y==1)
				return 0;
			else
				return 3;
	if(x>y)
		return 3;
	else
		if(x==y)
			return 1;
		else
			return 0;
}

void tinh(int x,int y,int z,int t,int u,int v)
{
	int t1,t2,t3;
	t1=diem(x,y);
	t2=diem(y,x);
	t1+=diem(z,t);
	t3=diem(t,z);
	t2+=diem(u,v);
	t3+=diem(v,u);
	printf("%d %d %d",t1,t2,t3);
}
