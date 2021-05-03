#include <stdio.h>

void nhapma(int A[][100], int &m, int &n) {
	scanf("%d%d",&m, &n);
	for (int i=0; i<m; i++) {
		for (int j=0;j<n;j++) {
			scanf("%d",&A[i][j]);
		}
	}
}


int prime(int n) {
	if (n<=1)
		return 0;
	else 
		for (int i=2; i<n;i++) 
			if (n%i==0)
				return 0;
	return 1;
}

int kiemtra(int A[][100], int m, int n) {
	int tong=0;
	for (int j=0;j<n;j++) {
		if (prime(A[0][j]))
			tong+=A[0][j];
	}
	for (int i=0; i<m; i++) {
		int t=0;
		for (int j=0; j<n;j++) {
			if (prime(A[i][j])==1)
				t+=A[i][j];
		}
		if (t<tong)
			tong=t;
	}
	return tong;
}
void main() {
	int A[100][100];
	int m,n;
	nhapma(A,m,n);
	int kq=kiemtra(A,m,n);
	printf("%d",kq);
}
