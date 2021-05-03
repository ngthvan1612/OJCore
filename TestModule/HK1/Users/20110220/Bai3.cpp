#include <iostream>
using namespace std;

void nhap(int &n, int a[]);
void xuat(int kq);
int check(int n, int a[]);

int main() {
	int n,a[n];
	nhap(n,a);
	int kq = check(n,a);
	xuat(kq);
	return 0;
}

void nhap(int &n, int a[]) {
	cin >>n;
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
}

void xuat(int kq) {
	cout << kq;
}

bool isEven(int x) {
	if (x % 2 == 0 ) return 1;
	return 0;
}

int check(int n, int a[]) {
	int flag= isEven(a[0]);
	for (int i=1; i<n; i++) {
		if (isEven(a[i]) != flag) 
			flag = 1 - flag;
		else 
			return i;
	}
	return -1;
}
