#include<stdio.h>
void nhap(int &n,int a[]);
int kiemTrachanle(int n,int a[]);
void xuat(int kq);
void main(){
	int a[100],n;
	nhap(n,a);
	int kq=kiemTrachanle(n,a);
	xuat(kq);
}
void nhap(int &n,int a[]){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int kiemTrachanle(int n,int a[]){
	int d=0;
	int s=-1;
	for(int i=0;i<n-1;i++){
		if((a[i]%2==0 && a[i+1]%2==1) || (a[i]%2==1 && a[i+1]%2==0))
			d=d+i;
		else {
			s=i;
			break;
		}
	}
	if(s==-1)
		d=-1;
	else
		d=s+1;
	return d;
}
void xuat(int kq){
	printf("%d",kq);
}