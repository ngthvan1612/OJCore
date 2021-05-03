#include<stdio.h>

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq =tinhDiem;
	xuat(kq);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
}
int tinhDiem(int x, int y, int z, int t, int u, int v)
{
	int dA=0;
	int dB=0;
	int dC=0;
	if (x==1)
		if (y==2)
			dA=0;
			dB=3;
		if (y==3)
			dA=0;

}
void xuat(int kq)
{
	printf("%d", kq);
}