#include<stdio.h>
#define N 100
void nhap(int a[], int &n);
void xuat(int x);
int chan(int x);
int tinh(int a[], int n);

int main()
{
	int a[N],n;
	nhap(a,n);
	int kq=tinh(a,n);
	xuat(kq);
	return 0;
}
void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
}
void xuat(int x)
{
	printf("%d", x);
}
int chan(int x)
{
	if (x % 2==0)
		return 1;
	return 0;
}
int tinh(int a[], int n)
{
	int i;
	int kt=chan(a[0]);
	for(i=1;i<n;i++)
	{
		if (chan(a[i])==kt)
		{
			return i;
		}
		else 
			kt=chan(a[i]);
	}
	return -1;
}