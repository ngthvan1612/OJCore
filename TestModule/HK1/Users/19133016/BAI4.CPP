#include<stdio.h>
#define size 100
void nhap (int a[size][size], int &m, int &n);
int min(int a[], int n);
int nguyento(int a);
void bai4( int a[size][size], int m, int n);
void main ()
{
	int a[size][size],m,n;
	nhap(a,m,n);
	bai4(a,m,n);
}
void nhap (int a[size][size], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&a[i][j]);

}
int min(int a[], int n)
{
	int min=a[0];
	for (int i=0;i<n;i++)
	{
		if (a[i]<min) min =a[i];
	}
	return min;
}
int nguyento(int a)
{
	int dem=0;
	for (int i=1;i<=a;i++)
	{
		if (a%i==0) dem++;
	}
	if (dem==2) return 1;
	return 0;
}
void bai4( int a[size][size], int m, int n)
{
	int b[100];
	int nB=0;
	int kq;
	for (int i=0;i<m;i++)
	{
		int s=0;
		for (int j=0;j<n;j++)
		{
			if (nguyento(a[i][j])) s=s+a[i][j];
		}
		b[nB++]=s;
		
	}
	kq= min(b,nB);
	printf("%d",kq);
}
