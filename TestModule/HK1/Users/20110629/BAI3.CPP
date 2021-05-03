#include<stdio.h>
void nhap( int A[],int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int LaSoChan( int x){
	if(x%2==0)
		return 1;
	return 0;
}
int LaSoLe( int x){
	if(x%2!=0)
		return 1;
	return 0;
}
int xuLy( int A[], int n){
	int a=0;
	for(int i=0;i<n;i++){
		if(LaSoChan(A[i])==1 && LaSoChan(A[i+1])==0)
				a=-1;
	}
	if(a==0){
		for(int i=0;i<n;i++){
			if(LaSoChan(A[i])==1)
					a=i;
					break;
		}
	}
	return a;
}
void xuat( int kq){
	if(kq==-1)
		printf("%d",kq);
	else if( kq!=1) 
		printf("%d",kq);
}

void main(){
	int A[100],n;
	nhap(A,n);
	int kq=xuLy(A,n);
	xuat(kq);
}