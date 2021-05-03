#include <iostream>
#include <cmath>
using namespace std;

void nhap(int &m, int &n, int a[100][100]);
void xuat(int kq);
int minArr(int m, int n, int a[100][100]);

int main() {
	int m,n,a[100][100];
	nhap(m,n,a);
	int kq = minArr(m,n,a);
	xuat(kq);
	return 0;
}

void nhap(int &m, int &n, int a[100][100]) {
	cin >> m >> n;
	for (int i=0; i<m; i++) 
		for (int j=0; j<n; j++)
			cin >> a[i][j];
}

void xuat(int kq) {
	cout << kq;
}

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i=2; i<= sqrt(n); i++) 
		if (n % i ==0) return false;
	return true;
}

int minArr(int m, int n, int a[100][100]) {
	int min=100000000,sum;
	for (int i=0; i<m; i++) {
		sum =0;
		for (int j=0; j<n; j++) 
			if (isPrime(a[i][j])) {
				sum += a[i][j];
			}
		if (sum < min)
			min = sum;
	}
	return min;
}
