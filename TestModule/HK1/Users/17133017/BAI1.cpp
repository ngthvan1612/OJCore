#include<stdio.h>
void diemTran(int x, int y, int &a, int &b);
void tinhDiem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int a,b,c;
	tinhDiem(x,y,z,t,u,v,a,b,c);
	printf("%d %d %d",a,b,c);
}
void tinhDiem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c)
{
	a=0;
	b=0;
	c=0;
	diemTran(x,y,a,b);
	diemTran(z,t,a,c);
	diemTran(u,v,b,c);
}
void diemTran(int x, int y, int &a, int &b)
{
	if (x>y)
		a+=3;
	else
		if (x<y)
			b+=3;
		else
		{
			a+=1;
			b+=1;
		}
}
