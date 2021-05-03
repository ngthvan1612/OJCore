#include <stdio.h>
void nhap(int a[],int &n);
int kiemtra(int a[],int n);
void xuat(int kq);
void main ()
{
	int a[100],n;
	nhap(a,n);
	int kq=kiemtra(a,n);
	xuat(kq);
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
}
int kiemtra(int a[],int n)
{
	for(int i=0;i<n-1;i++){
		if ((a[i]%2==0 && a[i+1]%2==0) || (a[i]%2!=0 && a[i+1]%2!=0))
			return i+1;
	
	}
	return -1;

}
void xuat(int kq)
{
	printf("%d",kq);
}