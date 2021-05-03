#include <stdio.h>
void nhap(int a[100][100],int &n,int &m);
void xuat(int a);
int tinh(int a[100][100],int n,int m);

void main()
{
	int a[100][100];
	int i,j,b;
	nhap(a,i,j);
	b=tinh(a,i,j);
	xuat(b);
}
void nhap(int a[100][100],int &n,int &m)
{
	scanf ("%d",&n);
	scanf ("%d",&m);
	for (int i=0;i<n;i++)
		for (int j=0; j<m;j++)
			scanf ("%d",&a[i][j]);
}
int tinh(int a[100][100],int n,int m)
{
	int sum=0;
	int min;
	min=-min;
	for (int i=0;i<n;i++)
	{
		sum=0;
		for (int j=0; j<m;j++)
			sum=sum+a[i][j];
		if (sum<min)  min=sum;
	}
	
	return min;
}
void xuat(int a)
{
	printf ("%d",a);
}
