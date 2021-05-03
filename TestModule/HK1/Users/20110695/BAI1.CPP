#include<stdio.h>
#include<math.h>
void nhap(int &x,int &y,int &z, int &t,int &u, int &v);
void xuat(int A,int B,int C);
int diemA(int x,int y,int z,int t);
int diemB(int x,int y,int u,int v);
int diemC(int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int A=diemA(x,y,z,t);
	int B=diemB(x,y,u,v);
	int C=diemC(z,t,u,v);
	xuat(A,B,C);
}
void nhap(int &x,int &y,int &z, int &t,int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	if((x<1 && x>3)||(y<1 && y>3)||(z<1 && z>3)||(t<1 && t>3)||(u<1 && u>3)||(v<1 && v>3))
		scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void xuat(int A,int B,int C)
{
	printf("%d %d %d",A,B,C);
}
int diemA(int x,int y,int z,int t)
{
	int diem=0;
	if((x==1 && y==3)||(x==3 && y==2)||(x==2 && y==1))
		diem+=3;
	else if(x==y)
		diem+=1;
	else
		diem+=0;


	int diem2=0;
	if((z==1 && t==3)||(z==3 && t==2)||(z==2 && t==1))
		diem2+=0;
	else if(z==t)
		diem2+=1;
	else
		diem2+=3;
	return diem+diem2; 
}
int diemB(int x,int y,int u,int v)
{
	int diem=0;
	if((x==1 && y==3)||(x==3 && y==2)||(x==2 && y==1))
		diem+=0;
	else if(x==y)
		diem+=1;
	else
		diem+=3;


	int diem2=0;
	if((u==1 && v==3)||(u==3 && v==2)||(u==2 && v==1))
		diem2+=3;
	else if(u==v)
		diem2+=1;
	else
		diem2+=0;
	return diem+diem2; 
}
int diemC(int z,int t,int u,int v)
{
	int diem=0;
	if((z==1 && t==3)||(z==3 && t==2)||(z==2 && t==1))
		diem+=0;
	else if(z==t)
		diem+=1;
	else
		diem+=3;


	int diem2=0;
	if((u==1 && v==3)||(u==3 && v==2)||(u==2 && v==1))
		diem2+=0;
	else if(u==v)
		diem2+=1;
	else
		diem2+=3;
	return diem+diem2; 
}