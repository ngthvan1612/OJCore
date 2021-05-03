// kiem tra mang co chan le xen ke ko
#include<stdio.h>

void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}

int kiemTra(int A[], int n)
{
	for(int i = 0; i < n - 1; i++)
		if((A[i] + A[i + 1]) % 2 == 0)
			return i + 1;
	return -1;
}

void xuat(int x)
{
	printf("%d", x);
}

void main()
{
	int A[200], n;
	nhap(A, n);
	int kq = kiemTra(A, n);
	xuat(kq);
}