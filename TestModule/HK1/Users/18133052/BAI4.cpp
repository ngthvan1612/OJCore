#include<stdio.h>

void nhapMang(int a[][100], int n, int m);
bool ktra(int a);
void tong(int a[][100], int n, int m);

void main()
{
	int a[100][100];
	int n,m;
	scanf("%d%d", &n, &m);
	nhapMang(a,n,m);
	tong(a,n,m);
}
void nhapMang(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
bool ktra(int a)
{
	int dem = 0;
	for(int i = 1; i < a; i++)
	{
		if(a%i == 0)
			dem++;
	}
	if (dem == 1)
		return 1;
	else
		return 0;
}
int tinhtong(int a[][100], int n, int m)
{
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			tong = tong + a[i][j];
		}
	}
	return tong;
}
void tong(int a[][100], int n, int m)
{
	int tongmin = tinhtong(a,n,m);
	int tong;
	for(int i = 0; i < n; i++)
	{
		tong = 0;
		for(int j = 0; j < m; j++)
		{
			if(ktra(a[i][j]) == 1)
			{
				tong = tong + a[i][j];
			}
		}
		if (tong < tongmin)
		{
			tongmin = tong;
		}
	}
	printf("%d",tongmin);
}
