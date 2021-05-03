#include <stdio.h>
void nhap(int a[], int &n);
int chan( int x);
int kiemtra( int a[], int n);
void xuat(int kq);
void main()
{
	int a[100], n;
	nhap(a,n);
	int kq=kiemtra(a,n);
	xuat(kq);
}

void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &a[i]);
}

int chan( int x)
{
	if(x%2==0)
		return 1;
	return 0;
}


int kiemtra( int a[], int n)
{
	for(int i=1; i<n; i++)
		if(chan(a[i])==chan(a[i+1]))
			return i;
	return -1;
}

void xuat(int kq)
{
	printf("%d", kq);
}