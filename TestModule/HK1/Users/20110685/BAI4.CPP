#include <stdio.h>

void nhap(int a[99][99], int *m, int *n)
{
	scanf("%d%d", m, n);
	for (int i=0; i<*m; i++)
	{
		for (int j=0; j<*n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}

int ngTo(int x)
{
	if (x==1)
		return 0;
	for (int i=2; i<x; i++)
	{
		if (x%i==0)
			return 0;
	}
	return 1;
}

void kiemTra(int a[99][99], int m, int n, int *t)
{
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (ngTo(a[i][j]))
			{
				t[i]+=a[i][j];
			}
		}
	}
}

void hienThi(int *t, int m)
{
	int min=t[0];
	for (int i=0; i<m; i++)
	{
		min = (min<t[i]) ? min : t[i];
	}
	printf("%d", min);
}

int main()
{
	int a[99][99], m, n;
	int t[99] = {0};
	nhap(a, &m, &n);
	kiemTra(a, m, n, t);
	hienThi(t, m);

	return 0;
}

