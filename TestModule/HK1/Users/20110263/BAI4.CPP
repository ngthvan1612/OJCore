#include<stdio.h>
#include<limits.h>
#include<math.h>
#define MAX 100
void nhap(int A[][MAX], int &m, int &n);
int soNgTo(int x);
int tinh(int A[][MAX], int m, int n);
void xuat(int x);

int main()
{
	int A[MAX][MAX], m, n;
	nhap(A,m,n);
	int kq = tinh(A,m,n);
	xuat(kq);
	return 0;
}
void nhap(int A[][MAX], int &m, int &n)
{
	scanf("%d%d",&m, &n);
	for(int i =0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
}
int soNgTo(int x)
{
	if (x<2)
		return 0;
	for(int i =2; i <= sqrt((float)x); i++)
	{
		if(x%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int tinh(int A[][MAX], int m, int n)
{
	int tong = 200000;
	for(int i =0; i<m; i++)
	{
		int tong1 = 0;
		for(int j=0; j<n; j++)
		{
			if(soNgTo(A[i][j]) == 1)
			{
				tong1 += A[i][j];
			}
		}
		if(tong1 < tong)
		{
			tong = tong1;
		}

	}
	return tong;
}
void xuat(int x)
{
	printf("%d",x);
}
