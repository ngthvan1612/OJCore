#include <stdio.h>

bool ktrSoNT(int x);
int tongMin(int n, int m, int a[100][100]);

void main()
{
	int n, m, a[100][100];
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	tongMin(n, m, a);
	printf("%d", tongMin(n,m,a));
}

int tongMin(int n, int m, int a[100][100])
{
	int min = 99999999;
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(ktrSoNT(a[i][j]))
			{
				tong = tong + a[i][j];
			}
		}
		if(min > tong)
		{
			min = tong;
		}
		tong = 0;
	}
	return min;
}

bool ktrSoNT(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x % i == 0)
		{
			dem++;
		}
	}
	if(dem == 2)
	{
		return 1;
	}
	return 0;
}