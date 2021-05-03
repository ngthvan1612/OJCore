#include<stdio.h>
#include<math.h>
#define sz 100
int min(int B[sz],int nB);
int la_Ngto(int n);
int ktr(int A[sz][sz], int m, int n);
void nhap(int &m, int &n, int A[sz][sz]);
void xuat(int kq);
void main()
{
	int A[sz][sz];
	int m,n;
	nhap(m,n,A);
	int kq = ktr(A,m,n);
	xuat(kq);
}
void nhap(int &m, int &n, int A[sz][sz])
{
	scanf("%d%d", &m,&n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
}
int ktr(int A[sz][sz], int m, int n)
{
	int B[sz];
	int nB = 0;
	int tong;
	for (int i = 0; i < m; i++)
	{
		tong = 0;
		for (int j = 0; j < n; j++)	
			if (la_Ngto(A[i][j]) == 1) tong += A[i][j];
		B[nB++] = tong;
	}
	return min(B,nB);

}
int la_Ngto(int n)
{
	if (n<2) return 0;
	for (int  i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int min(int B[sz],int nB)
{
	int m = B[0];
	for (int i = 0; i < nB; i++)
		if (m > B[i]) m = B[i];
	return m;
}
void xuat(int kq)
{
	printf("%d", kq);
}