#include<stdio.h>

void xuat(int diemA, int diemB, int diemC);
int tinhDC(int z, int t, int u, int v);
int tinhDB(int x, int y, int u, int v);
int tinhDA(int x, int y, int z, int t);
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);

int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int diemA= tinhDA(x,y,z,t);
	int diemB= tinhDB(x,y,u,v);
	int diemC= tinhDC(z,t,u,v);
	xuat(diemA,diemB,diemC);
	return 0;
}
void xuat(int diemA, int diemB, int diemC)
{
	printf("%d %d %d", diemA, diemB, diemC);
}
int tinhDC(int z, int t, int u, int v)
{
	int diem=0;
	if(t==z)
		diem += 1;
	else 
		if (t==1 && z==3 || t==2 && z==1 || t==3 && z==2)//a thang
			diem += 3;
		else 
			diem +=0;
	if(v==u)
		diem += 1;
	else 
		if (v==1 && u==3 || v==2 && u==1 || v==3 && u==2)//a thang
			diem += 3;
		else 
			diem +=0;
	return diem;
}
int tinhDB(int x, int y, int u, int v)
{
	int diem=0;
	if(u==v)
		diem += 1;
	else 
		if (x==u && y==v || u==2 && v==1 || u==3 && v==2)// thang
			diem += 3;
		else 
			diem +=0;
	if(y==x)
		diem += 1;
	else 
		if (y==1 && x==3 || y==2 && x==1 || y==3 && x==2)//a thang
			diem += 3;
		else 
			diem +=0;
	return diem;
}
int tinhDA(int x, int y, int z, int t)
{
	int diem=0;
	if(x==y)
		diem += 1;
	else 
		if (x==1 && y==3 || x==2 && y==1 || x==3 && y==2)//a thang
			diem += 3;
		else 
			diem +=0;
	if(z==t)
		diem += 1;
	else 
		if (z==1 && t==3 || z==2 && t==1 || z==3 && t==2)//a thang
			diem += 3;
		else 
			diem +=0;

	return diem;
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
