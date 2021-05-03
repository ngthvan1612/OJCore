#include<stdio.h>
void nhap(int a[][101],int &m,int &n);
int ktra(int a);
int tinh(int a[][101],int m,int n);
void main()
{
	int a[101][101],m,n;
	nhap(a,m,n);
	int kq=tinh(a,m,n);
	printf("%d", kq);
}

void nhap(int a[][101],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d", &a[i][j]);
}

int ktra(int a)
{
	int dem=0;
	for (int i=1;i<=a;i++)
		if (a % i == 0) dem++;
	if (dem == 2) return 1;
	return 0;
}

int tinh(int a[][101],int m,int n)
{
	int min=99999;
	for (int i=0;i<m;i++)
	{
		int s=0;
		for (int j=0;j<n;j++)
			if (ktra(a[i][j])==1) s=s+a[i][j];
		if (s < min) min=s;
	}
	return min;
}