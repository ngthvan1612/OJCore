#include<stdio.h>
#define size 100
void nhap(int A[][size], int &m, int &n);
void xuat(int kq);
int timMin(int A[], int m);
void tongNT(int A[][size], int m, int n,int B[]);
int minNT(int A[][size], int m, int n);
void main()
{
	int A[size][size],m,n;
	nhap(A,m,n);
	int kq=minNT(A,m,n);
	xuat(kq);

}
void nhap(int A[][size], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int laNT(int x)
{
	int d=0;
	for(int i=1; i<=x; i++)
		if(x%i==0)
			d++;
	if(d==2)
		return 1;
	return 0;
}
int minNT(int A[][size], int m, int n)
{
	int B[size];
	tongNT(A,m,n,B);
	int kq=timMin(B,m);
	return kq;
}
void tongNT(int A[][size], int m, int n,int B[])
{
	for(int i=0; i<m; i++)
	{
		int s=0;
		for(int j=0; j<n; j++)
			if(laNT(A[i][j]))
				s+=A[i][j];
		B[i]=s;
	}
}
int timMin(int A[], int m)
{
	int min=A[0];
	for(int i=0; i<m; i++)
		if(A[i]<min)
			min=A[i];
	return min;
}



