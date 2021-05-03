#include<stdio.h>
#define N 100
void nhap (int &m, int &n, int A[][N]);
int tongmin (int m, int n, int A[][N]);
int tongSNT (int x, int n, int A[][N]);
bool laSNT (int x);
void main () {
	int m,n,A[N][N];
	nhap (m,n,A);
	int kq=tongmin(m,n,A);
	printf ("%d",kq);
}
void nhap (int &m, int &n, int A[][N]) {
	scanf ("%d%d",&m, &n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf ("%d",&A[i][j]);
}
int tongmin (int m, int n, int A[][N]) {
	int min=tongSNT (0,n,A);
	for (int i=1;i<m;i++) {
		int t=tongSNT (i,n,A);
		if (t<min)
			min=t;
	}
	return min;
}
int tongSNT (int x, int n, int A[][N]) {
	int t=0;
	for (int j=0;j<n;j++) {
		if (laSNT(A[x][j]))
			t=t+A[x][j];
	}
	return t;
}
bool laSNT (int x) {
	int k=0;
	for (int i=1;i<=x;i++)
		if (x%i==0)
			k++;
	if (k==2) return true;
	return false;
}

