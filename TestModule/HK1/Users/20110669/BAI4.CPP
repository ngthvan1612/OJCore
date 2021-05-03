#include <stdio.h>
void main ()
{
	int m,n,a[100][100];
	int mins = tongsonguyento(a[m][n]);
	xuat (mins);
}
void nhap(int &m,int &n; int a[][])
{
	scanf("%d%d",&m ,&n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d";&a[i][j]);
		}
	}
}
int tongsonguyento(int m;int n)
{
	for (int j = 0; j < n; j++)
	{
		int u = 0;
		int s1 = 0;
		while (i < m)
		{
		for (int k = 1; k <= a[0][j]; k++)
		{
			if (a[0][j] % k == 0)
			{
				u++;
			}
		
		if (u == 2)
		{
			s1 += a[0][j];
		}
		i++;
		}


	