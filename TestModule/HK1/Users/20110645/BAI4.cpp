#include<stdio.h>
void nhap(int a[][101], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d ", &a[i][j]);
}
int laNT(int x)
{
	int dem = 0;
	for(int i = 1; i < x; i++)
		if(x % i == 0)
			dem++;
	if(dem == 2)
		return 1;
	return 0;

}
int xuli(int a[][101], int m, int n)
{
	int b[101];
	int min = 0;
	int	sum = 0;
	for(int i = 0; i < m; i++)
	{
		{
			for(int j = 0; j < m; j++)
				if(laNT(a[i][j]) == 1)
				{
					sum += a[i][j];
				}
			for (int k = 0; k < m; k++)
					b[k] = sum;
		}
	for(int k = 0; k < m; k++)
		{
			int min = b[0];
			if(b[k]< min)
				min = b[k];
		}
	return min;

}
void xuat(int kq)
{
	prinf("%d", kq);
}
void main()
{
	int a[][101],m,n;
	nhap(a,m,n);
	int kq = xuli(a,m,n);
	xuat(kq);
}