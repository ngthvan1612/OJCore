#include<stdio.h>
int checkChan(int n);
int chanLe(int A[], int n);
void nhapMang(int A[], int n);
int main() {
	int n;
	scanf("%d", &n);
	int A[100];
	nhapMang(A, n);
	int kq = chanLe(A, n);
	printf("%d", kq);
	return 0;
}
void nhapMang(int A[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
}
int checkChan(int n) {
	if (n % 2 == 0)
		return 1; // chan
	return 0; // le
}
int chanLe(int A[], int n) {
	if (checkChan(n) != 1) {
		if (checkChan(A[0]) == 1) {
			for (int i = 0; i < n - 1; i+=2) {
				if (checkChan(A[i]) != 1)
					return i;
				else if (checkChan(A[i+1]) == 1)
					return i+1;
			}
		}
		else {
			for (int i = 0; i < n - 1; i+=2) {
				if (checkChan(A[i]) == 1)
					return i;
				else if (checkChan(A[i+1]) != 1)
					return i+1;
			}
		}
	}
	else {
		if (checkChan(A[0]) == 1) {
			for (int i = 1; i < n - 1; i+=2) {
				if (checkChan(A[i]) == 1)
						return i;
					else if (checkChan(A[i+1]) != 1)
						return i+1;	
				}
		}
		else {
			for (int i = 1; i < n - 1; i+=2) {
				if (checkChan(A[i]) != 1)
					return i;
				else if (checkChan(A[i+1]) == 1)
					return i+1;
			}
		}
	}
	return -1;
}
