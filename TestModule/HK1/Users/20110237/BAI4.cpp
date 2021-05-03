#include<stdio.h>
#define N 100
void nhap(int a[][N], int &m, int &n);
void xuat(int x);
int soNT(int x);
int min(int a[], int n);
int tinh(int a[][N], int m, int n);

int main()
{
	int a[N][N],m,n;
	nhap(a,m,n);
	int kq=tinh(a,m,n);
	xuat(kq);
	return 0;
}
void nhap(int a[][N], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		scanf("%d", &a[i][j]);
}
void xuat(int x)
{
	printf("%d", x);
}
int soNT(int x)
{
	int dem=0;
	for(int i=1;i<=x;i++)
		if (x % i ==0)
			dem++;
	if (dem==2)
		return 1;
	return 0;
}
int min(int a[], int n)
{
	int mn=a[0];
	for(int i=1;i<n;i++)
	{
		if (a[i]<mn)
			mn=a[i];
	}
	return mn;
}
int tinh(int a[][N], int m, int n)
{
	int b[N];
	for(int i=0;i<m;i++)
	{
		int tong =0;
		for(int j=0;j<n;j++)
		{
			if (soNT(a[i][j])==1)
				tong+=a[i][j];
		}
		b[i]=tong;
	}
	int kq=min(b,m);
	return kq;
}