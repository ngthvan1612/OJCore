#include<stdio.h>
void nhap(int &m, int &n, int a[][100]);
int kiemtra(int m, int n, int a[][100]);
void xuat(int kq);
void main()
{
    int a[100][100];
	int m,n;
	nhap(m,n,a);
    int kq=kiemtra(m,n,a);
	xuat(kq);
}

void nhap(int &m, int &n, int a[][100])
{
    scanf("%d%d", &m,&n);
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
	}
}
int soNT(int x)
{
    int dem=0;
	for(int i=1; i<x; i++)
	{
	    if(x%i==0) dem++;
	}
	if(dem==1) return 1;
	return 0;
}
int kiemtra(int m, int n, int a[][100])
{
    int min=1000000;
	for(int i=0; i<m; i++)
	{
	    int sum=0;
		for(int j=0; j<n; j++)
		{
		    if (soNT(a[i][j])==1) sum=sum+a[i][j];
		}
        if(sum<min) min= sum;
	}
	return min;
}
void xuat(int kq)
{
    printf("%d", kq);
}