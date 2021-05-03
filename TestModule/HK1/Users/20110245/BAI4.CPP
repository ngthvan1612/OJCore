#include <stdio.h>
#define SIZE 100

void nhap(int A[][SIZE],int &m, int &n);
int tinhtong(int A[],int n);
int xuli(int A[][SIZE],int m,int n);
void xuat(int kq);

void main()
{
	int A[SIZE][SIZE];
	int m,n;
	nhap(A,m,n);
	int kq=xuli(A,m,n);
	xuat(kq);
}
void nhap(int A[][SIZE],int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int tinhtong(int A[SIZE],int n)
{
	int tong;
	for (int i=1;i<n;i++)
		tong=tong+A[i];
	return tong;
}
int xuli(int A[][SIZE],int m,int n)
{
	int tong=tinhtong(A,m);
	int min=a[0][SIZE]
	for (i=1;i<n;i++)
	{
		if tong<min
			min[i]=tong;
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}




