#include<stdio.h>

void nhapMang(int a[], int& n);
int kiemTraChan(int a[], int n);
int kiemTraLe(int a[], int n);
int kiemTra(int a[], int na, int b[], int &nb, int c[], int &nc);
void xuat(int kq);

void main()
{
	int a[100], na, b[100], nb, c[100], nc;
	nhapMang(a, na);
	int kq = kiemTra(a, na, b, nb, c, nc);
	xuat(kq);
}

void nhapMang(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}

int kiemTraChan(int a[], int n)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			d++;
		}
	}
	if (n == d) return 1;
	return 0;
}

int kiemTraLe(int a[], int n)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			d++;
		}
	}
	if (n == d) return 1;
	return 0;
}

int kiemTra(int a[], int na, int b[], int &nb, int c[], int &nc)
{
	nb = 0;
	for (int i = 0; i < na; i++)
	{
		if (i % 2 == 0)
			{
				b[nb] = a[i];
				nb++;
			}
	}
	nc = 0;
	for (int j = 0; j < na; j++)
	{
		if (j % 2 != 0)
			{
				c[nc] = a[i];
				nc++;
			}
	}
	int x = 8;
	for (int t = 0; t < na; t++);
	{
		if (a[t] % 2 == 0 && a[t+1] % 2 == 0)
		{
			a[t + 1] = x;
		}
	}
	if (nb + nc == na && kiemTraChan(b, nb) == 1 && kiemTraLe(c, nc) == 1) return -1;
	if (nb + nc == na && kiemTraLe(b, nb) == 1 && kiemTraChan(c, nc) == 1) return -1;
	return x;
}

void xuat(int kq)
{
		printf("%d ", kq);
}