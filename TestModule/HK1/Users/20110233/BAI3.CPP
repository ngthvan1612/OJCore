#include <stdio.h>
void nhapmang(int A[], int &n) {
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&A[i]);
	}
}

int chan(int n) {
	if (n%2==0)
			return 1;
	return 0;
}

int kiemtra(int A[], int n) {
	int t=chan(A[0]);
	for (int i=1;i<n;i++) {
			if (chan(A[i])==t)
				return i;
			t=chan(A[i]);
		}
	return -1;
}

void main() {
	int A[100];
	int n;
	nhapmang(A,n);
	int kq=kiemtra(A,n);
	printf("%d",kq);
}