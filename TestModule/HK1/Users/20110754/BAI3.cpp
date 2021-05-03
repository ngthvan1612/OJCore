#include<stdio.h>
#define SIZE 100
void nhap(int a[SIZE],int &n);
int xuly(int a[SIZE],int n);
void xuat(int kq);
int main(){
	int a[SIZE];
	int n;
	nhap(a,n);
	int kq=xuly(a,n);
	xuat(kq);
}
void nhap(int a[SIZE],int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int xuly(int a[SIZE],int n){
	for(int i=0;i<n-1;i++){
		if((a[i]%2==0 && a[i+1]%2 == 0) || (a[i]%2 !=0 && a[i+1]%2 !=0)){
			return i+1;
		}
	}
	return -1;
}
void xuat(int kq){
	printf("%d",kq);
}
