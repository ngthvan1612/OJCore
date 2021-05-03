#include <stdio.h> 
void input (int &x, int &y, int a[][100]);
int solve (int m, int n, int a[][100]);
void output (int kq);
int SoNT(int a);
int main () {
	int a[100][100];
	int m,n;
	input (m,n,a);
	int kq= solve (m,n,a)
	;
	output (kq);
	return 0;
}
void input (int &m, int &n, int a[][100]) {
	scanf ("%d%d",&m,&n);
	for (int i=0; i<m;i ++) {
		for (int j=0; j<n; j++) {
			scanf ("%d",&a[i][j]);
		}
	}
}
int solve (int m, int n, int a[][100]) {
	int dem=0;
	for (int i=0; i<n; i++) {
		if (SoNT(a[0][i])==2)
		dem+=a[0][i];
	}
	int min=dem;
	for (int i=1; i<m;i ++) {
		dem=0;
		for (int j=0; j<n; j++) {
			if (SoNT(a[i][j])==2)
			dem +=a[i][j];
		}
		if (dem <min) 
		min=dem;
	}
	return min;
}
void output (int kq) {
	printf ("%d",kq);
}
int SoNT(int a) {
	int dem =0;
	for (int i=1; i<=a; i++) {
		if (a%i==0) 
		dem++;
	}
	return dem;
}
