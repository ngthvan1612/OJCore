#include <stdio.h>
void sovle(int x, int y, int z, int t, int u, int v);
int main() {
	int x, y, z, t, u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	sovle(x, y, z, t, u, v);
	return 0;
}
void sovle(int x, int y, int z, int t, int u, int v) {
	int diemA = 0, diemB = 0, diemC = 0;
	if(x==y) {
		diemA += 1;
		diemB += 1;
	} else if(x==1 && y == 3) {
		diemA += 3;
		diemB += 0;
	} else if(x==3 && y==2) {
		diemA += 3;
		diemB += 0;
	} else if(x==2 && y == 1) {
		diemA += 3;
		diemB += 0;
	} else {
		diemA += 0;
		diemB += 3;
	}
	if(z==t) {
		diemA += 1;
		diemC += 1;
	} else if(z==1 && t == 3) {
		diemA += 3;
		diemC += 0;
	} else if(z==3 && t==2) {
		diemA += 3;
		diemC += 0;
	} else if(z==2 && t== 1) {
		diemA += 3;
		diemC += 0;
	} else {
		diemA += 0;
		diemC += 3;
	}
	if(u==v) {
		diemB += 1;
		diemC += 1;
	} else if(u==1 && v== 3) {
		diemB += 3;
		diemC += 0;
	} else if(u==3 && v==2) {
		diemB += 3;
		diemC += 0;
	} else if(u==2 && v== 1) {
		diemB += 3;
		diemC += 0;
	} else {
		diemB += 0;
		diemC += 3;
	}
	printf("%d %d %d", diemA, diemB, diemC);
}