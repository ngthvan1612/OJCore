#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

void nhap(char x[10], char y[10]);
void xuat(long int n);
int trans(char x);
long int chuyenHe16(char x[10]);


int main() {
	char x[10],y[10];
	nhap(x,y);
	long int a= chuyenHe16(x), b= chuyenHe16(y);
	long int kq= a + b;
	xuat(kq);
	return 0;
}

void nhap(char x[10], char y[10]) {
	cin >> x >> y;
}

void xuat(long int n) {
	cout << n;
}

int trans(char x) {
	if (x==	'A') return 10;
	if (x==	'B') return 11;
	if (x==	'C') return 12;
	if (x==	'D') return 13;
	if (x==	'E') return 14;
	if (x==	'F') return 15;
	return x-48;
}

long int chuyenHe16(char x[10]) {
	long int sum=0;
	int len=strlen(x),count =0;
	for (int i=len-1; i>=0; i--) {
		sum += trans(x[i])*pow(16,count);
		count++;
	}
	return sum;
}

