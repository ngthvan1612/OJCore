#include<stdio.h>
void nhap(int a[], int &n);
void xuat(int kq);
int xuly(int a[], int n);
int main()
{
	int n;
	int a[100];
	nhap(a,n);
	int kq=xuly(a,n);
	xuat(kq);
	return 0;
}
void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void xuat(int kq)
{
	printf("%d", kq);
}
int xuly(int a[], int n)
{
	int k=-1;
	for (int i=0; i<n; i++)
	{
	for (int j=i+1; j<n-1; j++)
		if ((a[i]%2==0 && a[j]%2==0) || (a[i]%2!=0 && a[j]%2!=0))
			return i;
		else
			return k;
	}
}