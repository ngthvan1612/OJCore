#include<stdio.h>
#define SIZE 100
void xuat(int x);
void nhap(int A[][SIZE], int &m ,int &n);
int demNT(int A[][SIZE], int m, int n);
int timMax(int A[], int n);
int laNT(int x);
void main()
{
	int A[SIZE][SIZE],m,n;
	nhap(A,m,n);
	int kq = demNT(A,m,n);
	xuat(kq);
}
int laNT(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
		if (x%i==0)
			d++;
		if (d==2)
			return 1;
		return 0;
}
int timMax(int A[], int n)
{
	int max = A[0];
	for (int i=1; i<n;i++)
		if(A[i]>max)
			max = A[i];
		return max;
}
int demNT(int A[][SIZE], int m, int n)
{
int B[size]={0};
for (int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
		if (laNT(A[i][j]))
			B[i]++;
}
int kq = timMax(B,m);
return kq;
}
void xuat(int x)
{
	printf("%d",x);
}
void nhap(int A[][size], int m, int n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j];
}