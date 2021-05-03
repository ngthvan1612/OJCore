#include <stdio.h>
void nhap(int a[][100], int &m, int &na);
void xuat(int kq);
void find (int a[][100], int b[], int m, int na, int &nb);
int songuyento( int x);
int min (int b[], int nb);

void main ()
{
	int a[100][100],b[100],m,na,nb;
	nhap(a,m,na);
	int kq= min(b,nb);
	xuat(kq);
}
void nhap(int a[][100], int &m, int &na)
{
	scanf("%d%d\n",&m,&na);
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<na; j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
}
void xuat(int kq)
{
	printf("%d",kq);
}
void find (int a[][100], int b[], int m, int na, int &nb)
{
	nb=0;
	for (int i=0; i<m; i++)
	{
		int t=0;
		for (int j=0; j<na; j++)
			if (songuyento(a[i][j])==1)
				t=t+a[i][j];
		b[nb++]=t;
	}
}
int songuyento( int x)
{
	int dem=0;
	for (int i=1; i<x; i++)
		if (x%i==0)
			dem++;
	if (dem==1)
		return 1;
	else 
		return 0;
}
int min (int b[], int nb)
{
	int t=b[0];
	for (int i=1; i<nb; i++)
		if (t>b[i])
			t=b[i];
	return t;
}


