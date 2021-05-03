#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d", &n);
	for(int i=0; i<n;i ++){
		scanf("%d",&a[i]);
	}
}
int kiemtra(int a[], int n){
	int kq=0;
	for(int i=0 ; i< n; i++){
		if(a[i]%2 == 0 ){
			if(a[i+1]%2 != 0 )
				kq=-1;
			else{
					kq= i+1;
					return kq;
					break;
				}
		}
		else
		{
			if(a[i+1] % 2 == 0){
			kq=-1;
			}
			else{
				kq= i+1;
					return kq;
					break;
			}
		}
	}
}
void main(){
	int n, a[100];
	nhap(a,n);
	int kq= kiemtra(a,n);
	printf("%d", kq);
}