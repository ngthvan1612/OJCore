#include <stdio.h>
#define size 100

void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

int kiem_tra(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n - 1; i++)
		if(a[i] % 2 == 0 && a[i + 1] % 2 == 1 || a[i] % 2 == 1 && a[i+1] % 2 == 0)
			dem++;
		else
		{
			for(int i = 0; i < n; i++)
					if(a[i] % 2 == 0 && a[i+1] % 2 ==0 || a[i] % 2 == 1 && a[i+1] % 2 == 1)
						return i + 1;
		}
	if(dem == n - 1);
		return -1;
}

void xuat(int kq)
{
	printf("%d", kq);
}

void main()
{
	int a[size];
	int n;
	nhap(a, n);
	int kq = kiem_tra(a, n);
	xuat(kq);
}