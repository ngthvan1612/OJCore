#include<stdio.h>
int xuly(int n, int a[100]);
void xuat(int kq);
void main()
{
	int n, a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	int kq=xuly(n,a);
	xuat(kq);
}
int xuly(int n, int a[])
{
	int dem=0;
	if(a[0]%2==0){
		for(int i=1; i<n-2; i++){
			if(a[i]%2==1 && a[i+1]%2==1) {dem++; i++;}
			else return -1;
		}
		if(dem==(n-1)/2) return -1;
	}
	else if(a[0]%2==1){
		for(int i=1; i<n-2; i++){
			if(a[i]%2==0 && a[i+1]%2==0) {dem++; i++;}
			else return -1;
		}
		if(dem==(n-1)/2) return -1;
	}
//	if(dem==(n)/2) return -1;
}
void xuat(int kq)
{
	printf("%d", kq);
}