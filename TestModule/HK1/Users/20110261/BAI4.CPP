#include<stdio.h>
void nhap(int A[][150], int &m, int &n);
int tongnguyentodong(int A[][150], int m, int n, int dong);
int nguyento(int n);
int xuli(int A[][150], int m, int n);
void xuat(int kq);
void main()
{
	int m,n,A[150][150];
	nhap(A,m,n);
	int kq=xuli(A,m,n);
	xuat(kq);
}
void nhap(int A[][150], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int nguyento(int n)
{
	if (n<2)
		return 0;
	for (int i=2;i<n;i++)
		if (n%i==0)
			return 0;
	return 1;
}
int tongnguyentodong(int A[][150], int m, int n, int dong)
{
	int s=0;
	for (int i=0;i<n;i++)
		if (nguyento(A[dong][i])==1)
			s=s+A[dong][i];
	return s;
}
int xuli(int A[][150], int m, int n)
{
	int min=tongnguyentodong(A,m,n,0);
	for (int i=0;i<m;i++)
		if (tongnguyentodong(A,m,n,i)<min)
			min=tongnguyentodong(A,m,n,i);
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}