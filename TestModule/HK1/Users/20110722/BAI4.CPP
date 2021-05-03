#include <stdio.h>
void xuat(int a[100][100], int n, int m);
void main()
{
	int a[100][100],n,m;
	scanf("%d%d",&n,&m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d",&a[i][j]);
	xuat(a,n,m);
}

int laNgto(int n)
{
	int d = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			d++;
	if (d == 2)
		return 1;
	return 0;
}

void xuat(int a[100][100], int n, int m)
{
	int b[10000];int h = 0;int tong;
	for (int i = 0; i < n; i++)
	{
		 tong = 0;
		for (int j = 0; j < m; j++)
			if (laNgto(a[i][j]))
				tong += a[i][j];
		b[h++] = tong;
	}

	int min = b[0];
	for (int k = 0; k < h; k++)
		if (b[k] < min)
			min = b[k];
	printf ("%d",min);
}
