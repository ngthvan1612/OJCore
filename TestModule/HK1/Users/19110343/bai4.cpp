#include<stdio.h>
void Nhap(int a[100][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
}
int Kiemtra(int a)
{
	int kt = 0;
	for (int i = 1; i < a; i++)
		if(a%i == 0) kt++;
	if(kt == 1) return 1;
	else return 0;
}
int Tinh(int a[100][100], int m, int n)
{
	int tong, max = 999999999;
	for(int i = 0; i < m; i++)
	{
		tong = 0;
		for(int j = 0; j < n; j++)
			if(Kiemtra(a[i][j])) tong += a[i][j];
		if(max > tong) max = tong;
	}
	return max;
}
void main()
{
	int a[100][100], m ,n;
	Nhap(a,m,n);
	printf("%d",Tinh(a,m,n));
}