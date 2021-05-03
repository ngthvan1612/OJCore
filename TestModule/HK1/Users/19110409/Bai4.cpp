#include<stdio.h>
void nhap(int a[][100], int &n, int &m);
bool SNT(int n);
void xuLi(int a[][100], int n, int m);
void main()
{
	int a[100][100], n, m;
	nhap(a,n,m);
	xuLi(a,n,m);
}
void xuLi(int a[][100], int n, int m)
{
	int min = 999;
	
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		for(int j = 0; j < m; j++)
		{
			if(SNT(a[i][j]))
				sum += a[i][j];
			
		}
		if(min >= sum)
			min = sum;
	    
	}	
	printf("%d",min);
}
bool SNT(int n)
{
	int dem = 0;
	if(n < 2) return false;
	for(int i = 2; i <= n/2; i++)
	{
		if(n % i == 0)
			dem++;
	}
	if(dem == 0)
		return true;
	else return false;
}
void nhap(int a[][100], int &n, int &m)
{
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
}
