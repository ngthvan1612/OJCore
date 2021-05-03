#include<stdio.h>
void nhapSo(int &x,int &y,int &z,int &t,int &u,int &v);
void xuliDulieu(int x,int y ,int z ,int t ,int u,int v);
void xuliDiem(int x ,int y,int &diemMot,int &diemHai);
void main() {
	int x = 0,
		y = 0,
		z = 0,
		t = 0,
		u = 0,
		v = 0;
	nhapSo(x,y,z,t,u,v);	
	xuliDulieu(x,y,z,t,u,v);
}
void nhapSo(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d %d %d %d %d %d",&x,&y,&z,&t,&u,&v);
}
void xuliDulieu(int x,int y ,int z ,int t ,int u,int v) {
	int pA = 0,
		pB = 0,
		pC = 0;
	xuliDiem(x,y,pA,pB);
	xuliDiem(z,t,pA,pC);
	xuliDiem(u,v,pB,pC);
	printf("%d %d %d",pA,pB,pC);
}
void xuliDiem(int x ,int y,int &diemMot,int &diemHai)
{
// Keo truoc
	if(x == 1 && y== 2) // A keo , B bua
	{
		diemHai +=3;
	}
	else if(x == 1 && y == 3) // A keo , B bao
	{
		diemMot += 3;
	}
	else if(x == 1 && y == 1)
	{
		diemMot +=1;
		diemHai +=1;
	}
// Bua 2
	if(x == 2 &&  y== 1) // 1 bua , 2 kéo
	{
		diemMot+= 3;
	}
	else if(x == 2 && y == 3) // 1 bua , 2 bao
	{
		diemHai +=3;
	}
	else if( x== 2 && y == 2)
	{
		diemMot +=1;
		diemHai +=1;
	}
// Bao 3
	if(x == 3 && y == 1) // 1 bao ,2 keo
	{
		diemHai +=3;	
	}
	else if(x==3 && y ==2)// 1 bao , 2 bua
	{
		diemMot+=3;	
	}	
	else if( x== 3 && y == 3)
	{
		diemMot +=1;
		diemHai +=1;
	}
}