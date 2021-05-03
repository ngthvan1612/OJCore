#include<stdio.h>

void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

int xuLy(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(((a[i] % 2 == 0) && (a[i + 1] % 2 == 1)) || ((a[i] % 2 == 1) && (a[i + 1] % 2 == 0)))
			continue;
		else
			if(((a[i] % 2 == 0) && (a[i + 1] % 2 == 0)) || ((a[i] % 2 == 1) && (a[i + 1] % 2 == 1)))
				return i+1;
	}
	return -1;
}

void xuat(int kq)
{
	printf("%d", kq);
}

void main()
{
	int a[100], n;
	nhap(a, n);
	int kq = xuLy(a, n);
	xuat(kq);
}