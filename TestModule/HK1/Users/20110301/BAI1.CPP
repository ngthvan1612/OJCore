#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void AdauB(int x, int y, int &A, int &B);
void AdauC(int z, int t, int &A, int &C);
void BdauC(int u, int v, int &B, int &C);
void xuat(int A, int B, int C);

int main(){
	int x,y,z,t,u,v;
	int A=0, B=0, C=0;
	nhap(x,y,z,t,u,v);
	AdauB(x,y,A,B);
	AdauC(z,t,A,C);
	BdauC(u,v,B,C);
	xuat(A,B,C);
	return 0;
}

void nhap(int &x, int &y, int &z, int &t, int &u, int &v){
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}

void xuat(int A, int B, int C){
	printf("%d %d %d" ,A,B,C);
}

void AdauB(int x, int y, int &A, int &B){
	if (x==1 && y==3)
		A+=3;
	else
		if (x==3 && y==2)
			A+=3;
		else
			if (x==2 && y==1)
				A+=3;
			else
				if (x==y){
					A+=1;
					B+=1;
				}
				else
					B+=3;
}

void AdauC(int z, int t, int &A, int &C){
	if (z==1 && t==3)
		A+=3;
	else
		if (z==3 && t==2)
			A+=3;
		else
			if (z==2 && t==1)
				A+=3;
			else
				if (z==t){
					A+=1;
					C+=1;
				}
				else
					C+=3;
}

void BdauC(int u, int v, int &B, int &C){
	if (u==1 && v==3)
		B+=3;
	else
		if (u==3 && v==2)
			B+=3;
		else
			if (u==2 && v==1)
				B+=3;
			else
				if (u==v){
					B+=1;
					C+=1;
				}
				else
					C+=3;
}

