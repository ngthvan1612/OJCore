#include<stdio.h>

void nhap(int m,int n, int a[100][100]);
int kiemtra(int a[100][100], int m,int n);
void xuat(int kq);

void main()
{
	int m,n;
	int a[100][100],sum[100];
	nhap(a,m,n);
	int kq = kiemtra(a,m,n);
	xuat(kq);

}
void nhap(int m,int n, int a[100][100])
{
	scanf("%d%d", &m,&n);
	for(int i=0; i<m;i++)
		for(int j=0; j<n;j++)
			scanf("%d", &a[100][100]);
}
int kiemtra(int a[100][100], int m,int n)
{
	int sum[0]=0
	for(int i=0; i<m;i++)
		for(int j=0; j<n;j++)
		{
			sum[i++]+=a[i][j];
		}
	return sum;
}
void xuat(int kq)
{
	printf("%d", kq);
}

