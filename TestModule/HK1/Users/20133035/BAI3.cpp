#include <stdio.h>

void nhap(int &n, int A[]);
int kiemtra(int n, int A[]);
void xuat(int kq);

void main()
{
	int A[100], n;
	nhap(n, A);
	int kq = kiemtra(n, A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &A[i]);
}
int kiemtra(int n, int A[])
{
	int check;
	check = 0;
	for (int i = 0; i < n; ++i)
	{
		if (A[i] == 0)
			return i;
		if (check == 0)
			if (A[i] % 2 == 0)
				check = 1;
			else
				check = -1;
		else if (A[i] % 2 == 0) //chan = 1, le = -1;
		{
			if (check != -1)
				return i;
			check = 1;
		}
		else
		{
			if (check != 1)
				return i;
			check = -1;
		}
	}
	return -1;
}
void xuat(int kq)
{
	printf("%d", kq);
}