#include<stdio.h>
void nhapMang(int A[100][100], int m, int n);
int laNT(int n);
int tongNN(int A[100][100], int m, int n);
int nhoNhat(int A[], int n);
int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	int A[100][100];
	nhapMang(A, m, n);
	int kq = tongNN(A, m, n);
	printf("%d", kq);
	return 0;
}
void nhapMang(int A[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
}
int laNT(int n) {
	if (n == 1)
		return 0;
	int d = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			d++;
	}
	if (d == 2)
		return 1;
	return 0;
}
int tongNN(int A[100][100], int m, int n) {
	int KQ[100];
	int count = 0;
	for (int j = 0; j < m; j++) {
		KQ[j] = 0;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (laNT(A[i][j]) == 1)
				KQ[i] += A[i][j];
		}
	}
	int min = nhoNhat(KQ, m);
	return min;
}
int nhoNhat(int A[], int n) {
	int min = A[0];
	for (int i = 1; i < n; i++) {
		if (A[i] < min)
			min = A[i];
	}
	return min;
}