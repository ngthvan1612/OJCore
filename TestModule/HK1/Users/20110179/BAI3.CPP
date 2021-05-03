#include<stdio.h>
int viTri(long a[], int n);
void nhap(long a[], int &n);
int main(){
	long a[101];
	int n;
	nhap(a, n);
	int kq=viTri(a, n);
	printf("%d", kq);
	return 0;
}
void nhap(long a[], int &n){
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%ld", &a[i]);
}
int viTri(long a[], int n){
	int kq=-1;
	if((a[0]%2==0&&a[1]%2==0) || (a[0]%2==1&&a[1]%2==1)) return 1;
	for(int i=1; i<n-1; i++)
		if((a[i-1]%2==1&&a[i]%2==0&&a[i+1]%2==1) || (a[i-1]%2==0&&a[i]%2==1&&a[i+1]%2==0))
			kq=-1;
		else{
			kq=i+1;
			break;
		}
	return kq;
}