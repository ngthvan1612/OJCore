#include <stdio.h>
void nhap(int a[][100],int &m,int &n);
int kiemtra(int a[][100],int m,int n);
int lasoNT(int n);
void xuat(int kq);
void main ()
{
	int a[100][100],m,n;
	nhap(a,m,n);
	int kq=kiemtra(a,m,n);
	xuat(kq);
}
void nhap(int a[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int kiemtra(int a[][100],int m,int n)
{
	int b[100];
	for(int i=0;i<m;i++)
	{
		int tong=0;
		for(int j=0;j<n;j++)
			if (lasoNT(a[i][j])==1)
				tong+=a[i][j];
		b[i]=tong;
	}
	int min=b[0];
	for(i=1;i<m;i++)
		if (b[i]<min)
			min=b[i];
	return min;
}
int lasoNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if (n%i==0)
			dem++;
	if (dem==2)
		return 1;
	return 0;
}
void xuat(int kq)
{
	printf("%d",kq);
}