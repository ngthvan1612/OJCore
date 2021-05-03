#include<stdio.h>

void nhap(int a[][100], int &m, int &n);
void xuat(int kq);
int xuly(int a[100][100], int b[100], int m, int n);
int langto(int n);

int main()
{
	int m,n;
	int a[100][100];
	int b[100];
	nhap(a,m,n);
	int kq=xuly(a,b,m,n);
	xuat(kq);
	return 0;
}
void nhap(int a[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
void xuat(int kq)
{
	printf("%d", kq);
}
int langto(int n)
{
	int dem=0;
	for (int i=1; i<=n; i++)
		if (n%i==0)
			dem++;
	if (dem==2)
		return 1;
	else 
		return 0;
}
int xuly(int a[100][100],int b[100], int m, int n)
{
	for (int i=0; i<m; i++)
	{
		b[i]=0;
		for (int j=0; j<n; j++)
			if (langto(a[i][j])==1)
				b[i]=b[i]+a[i][j];
	}
	int min=b[0];
	for (int k=1; k<m; k++)
		if (b[k]<min)
			min=b[k];
	return min;
}