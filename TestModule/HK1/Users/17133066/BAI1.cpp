#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int check(int a, int b)
{
	if(a==b) return 0; //hoa
	if(a==1 && b == 3) return 1; //a thang
	if(a==3 && b ==2)	return 1;//a thang
	if(a==2 && b==1) return 1; //a thang
	if(a==3 && b == 1) return 2; //b thang
	if(a==2 && b==3) return 2; //b thang
	if(a==1 && b==3) return 2; //b thang
}
void tinh(int x, int y, int z, int t, int u, int v)
{
	int a=0,b=0,c=0;
	if(check(x,y)==1)
		a=a+1;
	if(check(z,t)==1)
		a=a+1;
	if(check(z,t)==2)
		c=c+1;
	if(check(u,v)==1)
		b=b+1;
	if(check(u,v)==2)
		c=c+1;
	if(check(x,y)==2)
		b=b+1;

	printf("%d %d %d", a,b,c);
	//return 0;

}
void xuat(int x)
{
	printf("%d");
}
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinh(x,y,z,t,u,v);
	//xuat(kq);
}