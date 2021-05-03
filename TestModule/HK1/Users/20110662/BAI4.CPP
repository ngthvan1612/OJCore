#include<stdio.h>
#define size 100
void nhap(int a[][size],int &m,int&n);
int so_NT(int a);
void tinh(int a[][size],int m,int n,int b[],int &nb);
int timmax(int b[],int nb);
void xuat(int kq);
void main(){
	int a[size][size],m,n,b[size],nb;
	nhap(a,m,n);
	tinh(a,m,n,b,nb);
	int kq=timmax(b,nb);
	xuat(kq);
}
void nhap(int a[][size],int &m,int&n){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int so_NT(int a){
	int dem=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			dem++;
		}
	}
	if(dem==2){
		return 1;
	}
	return 0;
}
void tinh(int a[][size],int m,int n,int b[],int &nb){
	nb=0;
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(so_NT(a[i][j])){
				sum+=a[i][j];
			}
		}
		b[nb++]=sum;
	}
}
int timmax(int b[],int nb){
	int max=b[0];
	for(int i=1;i<nb;i++){
		if(b[i]<=max){
			max=b[i];
		}
	}
	return max;
}
void xuat(int kq){
	printf("%d",kq);
}