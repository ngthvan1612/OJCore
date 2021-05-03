#include<iostream>
#define SIZE 100
void nhap(int a[],int &n);
int Work(int a[],int n);
void xuat(int kq);
using namespace std;
int main(){
	int a[SIZE],n;
	nhap(a,n);
	int kq=Work(a,n);
	xuat(kq);
	return 0;
}
void nhap(int a[],int &n){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
}
int Work(int a[],int n){
	for(int i=0;i<n-1;i++){
		int j=i+1;
		if((a[i]%2==0 && a[j]%2==0) || (a[i]%2!=0  && a[j]%2!=0))
			return j;
		return -1;
	}
}
void xuat(int kq){
	cout<<kq<<endl;
}
