#include<stdio.h>
void diem(int x, int y, int z, int t, int u, int v);
int ketqua(int a, int b);
void main()
{
	int x, y, z, t, u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	diem(x,y,z,t,u,v);

}
int ketqua(int a, int b)
{
	if(a ==1 && b==3 || a==3 && b==2 || a==2 && b==1)
		return 3;
	else if(a==b)
		return 1;
	else
		return 0;
}
void diem(int x, int y, int z, int t, int u, int v)
{

	int diemA = 0;
	int diemB = 0;
	int diemC = 0;
	//vans1
	diemA += ketqua(x,y);
	diemB+=ketqua(y,x);
	//van2
	diemA += ketqua(z,t);
	diemC += ketqua(t,z);
	//van3
	diemB += ketqua(u,v);
	diemC += ketqua(v,u);
	printf("%d %d %d", diemA, diemB, diemC);
}