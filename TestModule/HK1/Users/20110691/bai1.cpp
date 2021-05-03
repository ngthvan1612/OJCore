#include<stdio.h>
#include<stdlib.h>

void nhap(int&x, int &y, int &z, int &t, int &u, int &v);
int xuat(int x, int y, int z, int t, int u, int v, int diem1, int diem2, int diem3);

void main(){
	int x, y, z, t, u, v;
	int diem1, diem2, diem3;
	nhap(x, y, z, t, u, v);
	int kq = xuat(x, y, z, t, u, v, diem1, diem2, diem3);
}

void nhap(int&x, int &y, int &z, int &t, int &u, int &v){
	scanf("%d %d %d %d %d %d", &x, &y, &z, &t, &u, &v);
}

int xuat(int x, int y, int z, int t, int u, int v, int diem1, int diem2, int diem3){
	diem1 = 0;
	diem2 = 0;
	diem3 = 0;
	if((x == 1 && y == 3) || (x == 3 && y == 2)|| (x == 2 && y==1))
		diem1 = diem1 + 3;
	else if(x == y){
		diem1 = diem1 + 1;
		diem2 = diem2 + 1;
	}
	else{
		diem1 = diem1;
		diem2 = diem2 + 3;
	}
	
	if((z == 1 && t == 3) || (z == 3 && t == 2)|| (z == 2 && t==1))
		diem1 = diem1 + 3;
	else if(z == t){
		diem1++;
		diem3++;
	}
		else
			diem3 = diem3 + 3;
	if((u == 1 && v == 3) || (u == 3 && v == 2)|| (u == 2 && v==1))
		diem2 = diem2 + 3;
	else if(u == v){
		diem2++;
		diem3++;
	}
		else
			diem3 = diem3 + 3;
	printf("%d %d %d", diem1, diem2, diem3);
	return 0;
}
