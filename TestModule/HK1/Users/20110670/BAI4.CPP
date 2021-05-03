#include <stdio.h>
#define size 100

void nhap(int a[][size], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
}

int snt(int a)
{
	int dem = 0;
	for(int k = 1; k <= a; k++)
		if(a % k == 0)
			dem++;
	if(dem == 2)
		return a;
	return 0;
}
void tinh_tong(int a[][size], int m, int n, int b[])
{
	for(int i = 0; i < m; i++)
	{
		int t = 0;
		for(int j = 0; j < n; j++)
		{
			int tam = snt(a[i][j]);
			t += tam;	
		}
		b[i] = t;
	}
}

int min(int b[], int m)
{
	int tam = b[0]; 
	for(int i = 1; i < m; i++)
	{
		if(b[i] < tam )
			tam = b[i];
	}
	return tam;
}

void xuat(int kq)
{
	printf("%d", kq);
}

void main()
{
	int a[size][size];
	int m, n;
	int b[size];
	nhap(a, m, n);
	tinh_tong(a, m, n, b);
	int kq = min(b, m);
	xuat(kq);
}