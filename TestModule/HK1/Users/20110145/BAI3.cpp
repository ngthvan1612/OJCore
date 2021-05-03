#include<iostream>
using namespace std;
void nhap(int &n,int a[]){
	cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
}
void xuat(int kq){
	cout<<kq;
}
int tinh(int n,int a[]){
	int kq=-1;
	for(int i=0;i<n;i++){
		if((a[i]%2==0&&a[i+1]%2==0&&i+1<n)||(a[i]%2!=0&&a[i+1]%2!=0&&i+1<n)) kq=i+1;

	}
	return kq;
}
void main(){
	int n;
	int a[101];
	nhap(n,a);
	int kq=tinh(n,a);
	xuat(kq);
}