#include<stdio.h>
void nhap(int a[][100], int &m, int &n);
int laNT(int n);
int xuly(int a[][100], int m, int n);
void xuat(int kq);
void main()
{
	int a[100][100];
	int m,n;
	nhap(a,m,n);
	int kq=xuly(a,m,n);
	xuat(kq);
}
void nhap(int a[][100], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&a[i][j]);
}
int laNT(int n)
{
	int dem=0;
	for (int i=1; i<=n; i++)
		if (n%i==0)
			dem++;
	if (dem==2) return 1;
	return 0;
}
int xuly(int a[][100], int m, int n)
{
	int min=0;
	for (int j=0; j<n; j++)
		if (laNT(a[0][j])==1)
			min+=a[0][j];
	for (int i=1; i<m; i++)
	{
		int sum=0;
		for (j=0; i<n; j++)
			if(laNT(a[i][j])==1)
				sum+=a[i][j];
		if (sum<min)
			min=sum;
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}