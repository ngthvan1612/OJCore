#include<stdio.h>
int snt(int x);
void tachmang(int A[][100], int m, int n, int B[], int &nB);
void xuat(int B[], int nB);
void main()
{
	int A[100][100], m, n, B[100], nB;
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i ++)
		for(int j = 0; j < n; j ++)
			scanf("%d",&A[i][j]);
	tachmang(A, m, n, B, nB);
	xuat(B, nB);
}
int snt(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i ++)
		if(x % i == 0)
			dem ++;
	if(dem == 2)
		return 1;
	return 0;
}
void tachmang(int A[][100], int m, int n, int B[], int &nB)
{
	nB = 0;
	for(int i = 0; i < m; i ++)
	{
		int tong = 0;
		for(int j = 0; j < n; j ++)
			if(snt(A[i][j])== 1)
				tong = tong + A[i][j];
		B[nB++] = tong;
	}
}
void xuat(int B[], int nB)
{
	int min = B[0];
	for(int i = 0; i <nB; i ++)
		if(B[i] < min)
			min = B[i];
	printf("%d", min);
}
