#include<stdio.h>

void nhap(int a[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
}

int laNguyenTo(int a)
{
	int dem = 0;
	for(int i = 1; i <= a/2; i++)
		if(a % i == 0)
			dem++;
	if(dem == 1)
		return 1;
	return 0;
}

int xuLy(int a[][100], int m, int n)
{
	int b[100];
	int nB = 0;
	for(int i = 0; i < m; i++)
	{
		int tong = 0;
		for(int j = 0; j < n; i++)
			if(laNguyenTo(a[i][j]) == 1)
				tong = tong + a[i][j];
		b[nB++] = tong;
	}
	int min = b[0];
	for(int k = 0; k < nB; k++)
		if(b[k] < min)
			min = b[k];
	return min;
}

void xuat(int kq)
{
	printf("%d", kq);
}

void main()
{
	int a[100][100], m, n;
	nhap(a, m, n);
	int kq = xuLy(a, m, n);
	xuat(kq);
}