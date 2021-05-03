#include<stdio.h>

void nhap (int a[][100], int &m, int &n);
void xuat ( int kq);
int tinhtong (int a[][100], int m, int n);
 int lasnt (int x);
void main ()
{
	int a[100][100],m,n;
	nhap (a,m,n);
	int kq=tinhtong (a,m,n);
	xuat (kq);
}

void nhap (int a[][100], int &m, int &n)
{
	scanf ("%d%d", &m, &n);
	int i,j;
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
		{
			scanf ("%d", &a[i][j]);
		}
}

void xuat ( int kq)
{
	printf ("%d", kq);
}

int tinhtong (int a[][100], int m, int n)
{
	int i, j, min=50000;

	for (i=0; i<m; i++)
	{
		int sum=0;
		for (j=0; j<n; j++)
		{
			if (lasnt(a[i][j])==1)
				sum+=a[i][j];
			if (j>=n)
				break;
		}
		if (sum<min)
		{
			min=sum;
		}
	}
	return min;
}
 int lasnt (int x)
 {
	 int d=0;
	 int i;
	 for (i=1; i<=x; i++)
	 {
		 if (x%i==0)
			 d++;
	 }
	 if (d==2)
		 return 1;
	 return 0;
 }