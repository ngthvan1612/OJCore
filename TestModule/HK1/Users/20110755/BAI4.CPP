// tong cac so nguyen to tung dong cho biet tong nho nhat
#include<stdio.h>

void nhap(int A[][200], int &h, int &c)
{
	scanf("%d%d", &h, &c);
	for(int i = 0; i < h; i++)
		for(int j = 0; j < c; j++)
			scanf("%d", &A[i][j]);
}

int soNT(int n)
{
	int dem = 0;
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			dem++;
	if(dem == 2)
		return 1;
	return 0;
}

int kiemTra(int A[][200], int h, int c)
{
	int B[200];
	int nB = 0;
	for(int i = 0; i < h; i++)
	{
		int tong = 0;
		for(int j = 0; j < c; j++)
			if(soNT(A[i][j]) == 1)
				tong += A[i][j];
		B[nB++] = tong;
	}
	int min = B[0];
	for(i = 0; i < h; i++)
		if(B[i] < min)
			min = B[i];
	return min;
}

void xuat(int x)
{
	printf("%d", x);
}

void main()
{
	int A[200][200], h, c;
	nhap(A, h, c);
	int kq = kiemTra(A, h, c);
	xuat(kq);
}