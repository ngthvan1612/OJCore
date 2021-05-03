#include <stdio.h>

void nhap(int &m, int &n, int A[][100]);
int kiemtra(int m, int n, int A[][100]);
int Nguyento(int i, int j, int A[][100]);
void xuat(int kq);

void main()
{
	int A[100][100], m, n;
	nhap(m, n, A);
	int minNguyento = kiemtra(m, n, A);
	xuat(minNguyento);
}
void nhap(int &m, int &n, int A[][100])
{
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			scanf("%d", &A[i][j]);
}
int kiemtra(int m, int n, int A[][100])
{
	int tong, min, check;
	min = check = 0;
	for (int i = 0; i < m; ++i)
	{
		tong = 0;
		for (int j = 0; j < n; ++j)
			if (Nguyento(i, j, A) == 2)
				tong = tong + A[i][j];
		if (check == 0)
		{
			min = tong;
			check = 1;
		}
		else
			if (min > tong)
				min = tong;
	}			
	return min;
}
int Nguyento(int i, int j, int A[][100])
{
	int check = 0;
	for (int k = 1; k <= A[i][j]; ++k)
		if (A[i][j] % k == 0)
			++check;
	return check;
}
void xuat(int kq)
{
	printf("%d", kq);
}