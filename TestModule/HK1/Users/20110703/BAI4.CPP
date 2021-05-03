#include<stdio.h>

void nhap(int& m);
void nhapMang(int a[][50],int n);

int main()
{
	int a[50][50], m, n;
	nhap(m, n);
	nhapMang(a, m, n);
	printf("12");
	return 0;
}
void nhap(int& m, int& n)
{
	scanf("%d%d", &m, &n);
}
void nhapMang(int a[][50],int m, int n)
{
	for(int i = 0; i < m ; i++)
	{
		for (int j = 0; j < n ; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
