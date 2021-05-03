#include<stdio.h>
void nhap(int &n, int A[]);
void xuat(int n, int A);
int main(){
	int A[100];
	int n;
	nhap(n, A);
	xuat(n, A);
	return 0;
}
void nhap(int &n, int A[]){
	scanf("%d", &n);
	for(int i=0; i<n, i++){
		scanf("%d", &A[i]);
	}
}
void xuat(int n, int A){
	int a;
	for(int i=0; i+1<n; i++){
		if((A[i]%2==0)&&(A[i+1]%2==0)){
			a=i;
			break;
		}
		else if((A[i]%2==1)&&(A[i+1]%2==1)){
			a=i;
			break;
		}
		else{
			a=-1;
		}
	}
	printf("%d", a);
}

