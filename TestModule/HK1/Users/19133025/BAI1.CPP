#include<stdio.h>
int xuLy(int x, int y);
int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int diemA, diemB, diemC,diem1,diem2,diem3;
	if(xuLy(x,y)==0 ||xuLy(x,y)==1 || xuLy(x,y)==5)
	{
		diemA = 3;
		diemB =0;
	}
	else if(xuLy(x,y)==3 ||xuLy(x,y)==4 || xuLy(x,y) == 2)
	{
		diemA = 0;
		diemB = 3;
	}else if(xuLy(x,y)==6)
	{
		diemA=1;
		diemB=1;
	}	
	if(xuLy(z,t)==0 ||xuLy(z,t)==1 || xuLy(z,t)==5)
	{
		diem1 = 3;
		diemC =0;
	}
	else if(xuLy(z,t)==3 ||xuLy(z,t)==4 || xuLy(z,t) == 2)
	{
		diem1 = 0;
		diemC = 3;
	}else if(xuLy(z,t)==6)
	{
		diem1=1;
		diemC=1;
	}
	if(xuLy(u,v)==0 ||xuLy(u,v)==1 || xuLy(u,v)==5)
	{
		diem2 = 3;
		diem3 =0;
	}
	else if(xuLy(u,v)==3 ||xuLy(u,v)==4 || xuLy(u,v) == 2)
	{
		diem2 = 0;
		diem3 = 3;
	}else if(xuLy(u,v)==6)
	{
		diem2=1;
		diem3=1;
	}
	int a = diemA+diem1;
	int b = diemB+diem2;
	int c = diemC+diem3;
	printf("%d %d %d",a,b,c);
	return 0;
}
int xuLy(int x, int y)
{
	if(x == 1 && y == 3)
		return 0;
	else if(x ==2 && y == 1)
		return 1;
	else if(x == 2 && y == 3)
		return 2;
	else if(x == 3 && y == 1)
		return 3;
	else if(x == 1 && y == 2)
		return 4;
	else if(x == 3 && y == 2)
		return 5;
	else if(x == y)
		return 6;
	else 
		return 7;
}