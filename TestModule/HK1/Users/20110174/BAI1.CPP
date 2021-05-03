#include<stdio.h>
void xuat(int kq,int ban);
int tinhdiem(int x,int y);
void nhap(int&x,int&y,int&z,int&t,int&u,int&v);
void diemdau(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	diemdau(x,y,z,t,u,v);
}
void nhap(int&x,int&y,int&z,int&t,int&u,int&v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int kq,int ban)
{
	printf("%d",kq);
	if(ban!=3)
		printf(" ");
}
int tinhdiem(int a,int b)
{
	if(a==b)
		return 0;
	if(a==1 && b==3)
		return 1;
	if(a==3 && b==1)
		return -1;
	if(a==2 && b==1)
		return 1;
	if(a==1 && b==2)
		return -1;
	if(a==3 && b==2)
		return 1;
	if(a==2 && b==3)
		return -1;
}
void diemdau(int x,int y,int z,int t,int u,int v)
{
	int sum1=0,sum2=0,sum3=0;
	int a=tinhdiem(x,y),b=tinhdiem(z,t),c=tinhdiem(u,v);
	if(a==0)
	{
		sum1+=1;
		sum2+=1;
	}
	else
		if(a==1)
			sum1+=3;
		else
			sum2+=3;
	if(b==0)
	{
		sum1+=1;
		sum3+=1;
	}
	else
		if(b==1)
			sum1+=3;
		else
			sum3+=3;
	if(c==0)
	{
		sum2+=1;
		sum3+=1;
	}
	else
		if(c==1)
			sum2+=3;
		else
			sum3+=3;
	xuat(sum1,1);
	xuat(sum2,2);
	xuat(sum3,3);

}