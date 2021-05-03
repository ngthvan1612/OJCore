#include<stdio.h>

void nhap(int &m, int &n, int a[][100]);
void xuli(int m, int n, int a[][100], int b[]);
int SNT(int n);
void xuat(int m, int b[]);
void main()
{	
	int m,n,a[100][100];
	int b[100];
	nhap(m,n,a);
	xuli(m,n,a,b);
	xuat(m,b);
}

void nhap(int &m, int &n, int a[][100])
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++) scanf("%d",&a[i][j]);
}

void xuli(int m, int n, int a[][100], int b[])
{
	for (int i=0;i<m;i++)
	{
		int s=0;
		for (int j=0;j<n;j++) 
		{
			if (SNT(a[i][j])==1) s+=a[i][j];
		}
		b[i]=s;
	}
}

int SNT(int n)
{
	int s=0;
	for (int i=1;i<=n;i++)
		if (n%i==0) s++;
	if (s==2) return 1; else return 0;
}

void xuat(int m, int b[])
{
	int min=b[0];
	for (int i=1;i<m;i++)
		if (min>b[i]) min=b[i];
	printf("%d",min);
}