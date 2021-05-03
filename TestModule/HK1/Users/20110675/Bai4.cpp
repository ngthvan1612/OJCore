#include<stdio.h>
void nhap(int &m, int &n, int a[][100]);
int xuly(int m, int n, int a[][100]);
void xuat(int kq);

void main()
{
	int m,n,a[100][100];
	nhap(m,n,a);
	int kq=xuly(m,n,a);
	xuat(kq);
}
void nhap(int &m, int &n, int a[][100])
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m ; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
}
int laNT(int n)
{
	int dem=0;
	for(int i=1; i<=n; i++)
		if(n%i==0) dem++;
	if(dem==2) return 1;
	return 0;
}
int xuly(int m, int n, int a[][100])
{
	int sum=0;
	int b[100],nb=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(laNT(a[i][j]))
				sum=sum+a[i][j];
		}
		b[nb++]=sum;
		sum=0;
	}
	int min=1000000000;
	for(int k=0; k<nb; k++){
		if(b[k]<min) min=b[k];
	}
	return min;
}
void xuat(int kq)
{
	printf("%d", kq);
}
