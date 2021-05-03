#include <iostream>
using namespace std;

void xuat(int a, int b, int c);
void nhap(int x[6]);
void point(int x[6],int &a, int &b, int &c);

int main() {
	int x[6], a=0,b=0,c=0;
	nhap(x);
	point(x,a,b,c);
	xuat(a,b,c);
	return 1;
}

void xuat(int a, int b, int c) {
	cout << a << " " << b << " " <<c;
}

void nhap(int x[6]) {
	for (int i=0; i<6; i++) {
		cin >> x[i];
	}
}

int check(int x, int y) {
	if (x==y) return 1;
	if ((x==1) && (y==3)) return 3;
	if (x > y) return 3;
	else return 0; 
}

void getPoint(int &x, int &y, int n)  {
	if (n == 1) {
		x++;
		y++;
	}
	if (n == 0) {
		y +=3;
	}
	if (n == 3) {
		x +=3;
	}
}

void point(int x[6],int &a, int &b, int &c) {
	getPoint(a,b,check(x[0],x[1]));
	getPoint(a,c,check(x[2],x[3]));
	getPoint(b,c,check(x[4],x[5]));	
}


