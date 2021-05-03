#include<stdio.h>
#define size 100
void nhap(int a[],int &n);
int kiemtra(int a[],int n);
void xuat(int kq);
void main(){
	int a[size],n;
	nhap(a,n);
	int kq=kiemtra(a,n);
	xuat(kq);

}
void nhap(int a[],int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int kiemtra(int a[],int n){
		int t=-1;
		int b=a[0];
		if(b%2==0){
			for(int j=0;j<n;j+=2){
				if(a[2]%2!=0){
					return j;
				}
				if(a[j+1]%2==0&&(j+1)<n){
					return j+1;
				}
			}
			return t;
		}
		else if(b%2==1){
			for(int j=0;j<n;j+=2){
				if(a[j]%2==0){
					return j;
				}
				if(a[j+1]%2!=0&&(j+1)<n){
					return j+1;
				}
			}
			return t;
		}
	return t;
}
void xuat(int kq){
	printf("%d",kq);
}