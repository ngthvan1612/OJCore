#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
int laNT(int a);
int tinh(int A[][100],int m,int n);
void xuat(int kq);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=tinh(A,m,n);
	xuat(kq);
}

void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d", &m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &A[i][j]);
}

int tinh(int A[][100],int m,int n)
{
	int max=0;
	for(int i=0;i<m;i++)
	{
		int t=0;
		for(int j=0;j<n;j++)
			if(laNT(A[i][j]))
				t=t+A[i][j];
			if(t>max)
				max=t;
			break;
	}
	return max;
}

int laNT(int a)
{
	int dem=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}

void xuat(int kq)
{
	printf("%d", kq);
}