#include <stdio.h>
void nhap(int &x, int &y,int &z, int &t, int &u, int &v);
void TinhDiem(int x,int y, int z, int t,int u,int v);
void xuat(int k);
int diemTungDot(int a,int b);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	TinhDiem(x,y,z,t,u,v);

	//xuat(a,b,c);
}
void nhap(int &x, int &y,int &z, int &t, int &u, int &v)
{
	scanf("%d",&x, &y,&z,&t,&u,&v);
}
void TinhDiem(int x,int y, int z, int t,int u,int v)
{
	int diemA, diemB, diemC;
	diemA=diemTungDot(x,y)+diemTungDot(z,t);
	diemB=diemTungDot(y,x)+diemTungDot(u,v);
	diemC=diemTungDot(t,z)+diemTungDot(v,u);
	xuat(diemA);
	xuat(diemB);
	xuat(diemC);

}
int diemTungDot(int a,int b)
{
	int dA=0;
	if (a==1)
	{
		if (b==1) dA=1;
		else if (b==2) dA=0;
		else dA=3;
	}
	else if (a==2)
	{
		if (b==1) dA=3;
		else if (b==2) dA=1;
		else dA=0;
	}
	else
	{
		if (b==1) dA=0;
		else if (b==2) dA=3;
		else dA=1;
	}
	return dA;
}
void xuat(int k)
{
	printf("%d ",k);
}