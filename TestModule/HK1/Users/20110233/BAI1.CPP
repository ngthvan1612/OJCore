#include <stdio.h>

void diem(int &diem1, int &diem2,int x, int y) {
	if (x=y) {
		diem1+=1;
		diem2+=1;
	}
	else if ((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1)){
		diem1+=3;
	}
	else 
		diem2+=3;
}

int main() {
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x, &y, &z, &t, &u, &v);
	int diemA=0,diemB=0,diemC=0;
	diem(diemA,diemB,x,y);
	diem(diemA, diemC,z,t);
	diem(diemB, diemC, u,v);
	printf("%d %d %d",diemA,diemB,diemC);
	return 1;
}