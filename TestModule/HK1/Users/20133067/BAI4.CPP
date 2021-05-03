#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
void Tong(int A[][100],int B[],int m,int n);
int Min(int B[],int m);
int Songuyento(int m);
void xuat(int d);
void main()
{
	int A[100][100],B[100],m,n;
	nhap(A,m,n);
	Tong(A,B,m,n);
	int d=Min(B,m);
	xuat(d);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d", &m, &n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d", &A[i][j]);
}
int Songuyento(int m)
{
	int s=0;
	for (int i=1;i<=m;i++)
	{
		if (m%i==0)
			s++;
		if (s==2)
				return 1;
void Tong(int A[][100],int B[],int m,int n)
{
	int i=0;
	int t=0;
	while (i<m)
	{
		int s=0;
		for (int j=0;j<n;j++)
		{
			if (Songuyenro(A[i][j])
			s = s + A[i][j];
		}
		B[t]=s;
		t++;
		i++;
	}
}
int Min(int B[],int m)
{
	int x=B[0];
	for (int i=1;i<m;i++)
		if (B[i]<x)
			x=B[i];
	return x;
}
void xuat(int d)
{
	printf("%d", d);
}
