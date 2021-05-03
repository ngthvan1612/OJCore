#include <iostream>

using namespace std;
void nhap(int a[], int &n);
int lechan(int n);
void kiemtra(int a[], int n, int b[]);
int xuat(int b[], int n);
int main(){
	int a[100];
	int b[100];
	int n;
	nhap(a,n);
	kiemtra(a,n,b);
	int kq = xuat(b,n);
	cout<<kq;
	return 0;
}
void nhap(int a[], int &n){
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
}
int lechan(int n){
	if (n%2==1)
		return 1;
	else return 0;
}
void kiemtra(int a[], int n, int b[]){
	for (int i=0;i<n;i++){
		int t = lechan(a[i]);
		b[i]=t;
	}
}
int xuat(int b[], int n){
	for (int i=0;i<n-1;i++){
		if (b[i] == b[i+1])
			return i+1;
	}
	return -1;
}