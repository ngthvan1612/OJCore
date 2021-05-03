#include<stdio.h>
int xuXi(int x, int y);
void tinhDiem(int A, int B, int C, int x, int y, int z, int t, int u, int v);
int main() {
	int x, y, z, t, u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int A = 0, B = 0, C = 0;
	tinhDiem(A, B, C, x, y, z, t, u, v);
	return 0;
}
int xuXi(int x, int y) {
	if (x == 1) {
		if (y == 1)
			return 1; // hoa
		else if (y == 2)
			return 0; // thua
		else
			return 3; // thang
	}
	else if (x == 2) {
		if (y == 2)
			return 1; // hoa
		else if (y == 3)
			return 0; // thua
		else
			return 3; // thang
	}
	else if (x == 3) {
		if (y == 3)
			return 1; // hoa
		else if (y == 1)
			return 0; // thua
		else
			return 3; // thang
	}
	return 0;
}
void tinhDiem(int A, int B, int C, int x, int y, int z, int t, int u, int v) {
	A = xuXi(x, y) + xuXi(z, t);
	B = xuXi(y, x) + xuXi(u, v);
	C = xuXi(t, z) + xuXi(v, u);
	printf("%d %d %d", A, B, C);

}