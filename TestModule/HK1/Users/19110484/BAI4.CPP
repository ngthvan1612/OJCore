#include<stdio.h>
#include<string.h>
#include<math.h>

bool nguyenTo(int a)
{
	int dem = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	else return false;
}
int tongMang(int A[],int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + A[i];
	}
	return tong;
}
void main()
{
	int m,n;
	scanf("%d%d", &m,&n);
	int A[1000][100];
	int min = 100000;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
			if (!nguyenTo(A[i][j]))
				A[i][j] = 0;
		}	
		int a = tongMang(A[i], n);
		if (min > a) min = a;
	}
	printf("%d", min);
	
}