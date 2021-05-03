#include <stdio.h>
#include <math.h>
void nhap(int a[][100], int dong, int cot);
bool nt(int n);
int solve(int a[][100], int dong, int cot);
int main() {
	int a[100][100], dong, cot;
	scanf("%d%d", &dong, &cot);
	nhap(a, dong, cot);
	int kq = solve(a, dong, cot);
	printf("%d", kq);
	return 0;
}
void nhap(int a[][100], int dong, int cot) {
	for(int i = 0; i < dong; i++) {
		for(int j = 0; j < cot; j++) scanf("%d", &a[i][j]);
	}
}

bool nt(int n) {
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n%i==0) return false;
	}
	return true;
}
int solve(int a[][100], int dong, int cot) {
	int min = 0;
	for(int l = 0; l < cot; l++) {
		if(nt(a[0][l])) min += a[0][l];
	}
	for(int i = 1; i < dong; i++) {
		int tong = 0;
		for(int j = 0; j < cot; j++) {
			if(nt(a[i][j])) tong += a[i][j];
		}
		if(tong < min) min = tong;
	}
	return min;
}