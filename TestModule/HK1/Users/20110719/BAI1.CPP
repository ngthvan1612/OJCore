#include <stdio.h>
void diem3Nguoi(int x, int y, int z, int t, int u, int v);
int thiDau(int a, int b);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
    diem3Nguoi(x,y,z,t,u,v);
}   

void diem3Nguoi(int x, int y, int z, int t, int u, int v)
{
	int diemA=0;
	int diemB=0;
	int diemC=0;
	diemA=thiDau(x,y)+thiDau(z,t);
	diemB=thiDau(y,x)+thiDau(u,v);
	diemC=thiDau(t,z)+thiDau(v,u);
	printf("%d %d %d",diemA,diemB,diemC);
}

int thiDau(int a, int b)
{
    int diem;
	if((a==1&&b==1) || (a==2 && b==2 ) ||(a==3&& b==3) )
		diem=1;
	else if((a==1&&b==3) || (a==3 && b== 2) || (a==2 && b==1))
		diem=3;
	else if((b==1&&a==3) || (b==3 && a== 2) || (b==2 && a==1))
		diem =0;
	return diem;
}