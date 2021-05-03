#include <stdio.h>

int kiemTra(int A[], int n);
void nhap(int A[], int &n);
void xuat(int x);

void main()
{
	int A[100], n;
	nhapMang(A, n);
	int kq = kiemTra(A, n);
	xuat(kq);
}

void nhap(int A[], int &n)
{
	int i;
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf ("%d", &A[i]);
}

void xuat(int x)
{
	printf ("%d", x);
}

int kiemTra(int A[], int n)
{
	int i;
	for (i=0; i<n; i++)
		if (A[i]%2==0)
		{
			if (A[i+1]%2==0)
				return i;
			else if (A[i+1]%2!=0)
				return -1;
		}
		else if (A[i]%2!=0)
		{
			if (A[i+1]%2!=0)
				return i;
			return -1;
		}
}