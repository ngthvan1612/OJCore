#include <stdio.h>
void nhap(int a[], int n);
int chanLe(int a[], int n);
int main() {
	int a[100], n;
	scanf("%d", &n);
	nhap(a, n);
	int kq = chanLe(a, n);
	printf("%d", kq);
	return 0;
}
void nhap(int a[], int n) {
	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
}
int chanLe(int a[], int n) {
	for(int i = 0; i < n-1; i++) {
		if((a[i]+a[i+1]) % 2 != 1) return i+1;
	}
	return -1;
}