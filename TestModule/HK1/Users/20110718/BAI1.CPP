#include<stdio.h>


void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=kiemTra(x,y,z,t,u,v);
	xuat(kq);
	
}
int kiemTra(int x,int y,int z,int t,int u,int v)
{
	int tinh1=0;tinh2=0;
	if(a==1)
	{
		if(b==3)
		{   {tinh1=tinh1+3;}
		else if(b==2)
		{
			tinh2=tinh2+3;}
		else if(b==1)
			tinh1=tinh1+1;
		    tinh2=tinh2+1;
	if(a==2)
		{
		if(b==1)
			tinh1=tinh1+3
		}
		else if(b==3)
			tinh2=tinh2+3;
		else if(b==2)
			tinh1=tinh1+1;
		    tinh2=tinh2+1
	if(a==3)
	{
		if(b==1)
		{
			tinh2=tinh2+3;}
		else if(b==2)
		{
			tinh1=tinh1+3;
		}
		if(b==3)
		{	tinh1+tinh1+1;
		    tinh2=tinh2+1;}


		;

void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int kq)
{
	printf("%d",kq);
}