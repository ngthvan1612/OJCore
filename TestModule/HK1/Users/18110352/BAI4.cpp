#include<stdio.h>
int TongNhoNhat(int m, int n, int A[][120]);
int SNT(int n);
void main()
{
	int m;
	int n;
	int A[120][120];
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	int kq = TongNhoNhat(m, n, A);
	printf("%d", kq);
}

int TongNhoNhat(int m, int n, int A[][120])
{
	int min = 0; 
	int k = 0;
	int B[100];
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (SNT(A[i][j]) == 1)
			{
				dem = dem + A[i][j];
			}
		B[k] = dem;
		k ++;
		dem = 0;
				
	}
	min = B[0];
	for (int z = 0; z < k; z++)
	{
		if (min > B[z])
		{
			min = B[z]; 
		}
	}
	return min;
}

int SNT(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i < n; i++)
		if(n%i==0)
			return 0;
	return 1;
}