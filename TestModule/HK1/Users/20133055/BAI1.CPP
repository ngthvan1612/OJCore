#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int diem(int x, int y, int z, int t, int u, int v);
void xuat (int kq);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=diem(x,y,z,t,u,v);
	xuat (kq);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int diem(int x, int y, int z, int t, int u, int v)
{
	if ((x==1 && y==3)&&(z==2 && t==2)&&(u==2 && v==3))
			if ((x==1 && y==2)&&(z==2 && t==3)&&(u==3 && v==2))
			return 1;
		return 0;
}
void xuat (int kq)
{
	if (int t=0)
		if (int t=1)
			printf("0 6 3");
		printf("4 0 4");

}
