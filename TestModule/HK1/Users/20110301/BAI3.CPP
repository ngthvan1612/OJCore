#include<stdio.h>

void nhap(int A[], int &n);
int kiemTraChan(int a);
int kiemTraChanLe(int A[], int n);
void xuat(int a);

int main(){
	int A[100];
	int n;
	nhap(A,n);
	int kq = kiemTraChanLe(A,n);
	xuat(kq);
	return 0;
}

void nhap(int A[], int &n){
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}

int kiemTraChan(int a){
	if (a%2==0)
		return 1;
	else
		return 0;
}

int kiemTraChanLe(int A[], int n){
	for (int i=1; i<n; i++){
		if (kiemTraChan(A[i-1])==1 && kiemTraChan(A[i])==1)
			return i;
		if (kiemTraChan(A[i-1])==0 && kiemTraChan(A[i])==0)
			return i;
	}
	return -1;
}

void xuat(int a){
	printf("%d", a);
}
