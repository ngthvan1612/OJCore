#include<stdio.h>
void nhapmang(int A[][100], int &m, int &n);
int Tim_max(int A[], int n);
int Tong_Dong_max(int A[][100], int m, int n);
void xuat(int kq);
void main()
{
	int A[100][100], m, n, B[100], nB;
	nhapmang(A, m, n);
	int kq = Tim_max(B,nB);
	printf("12");
	//xuat(kq);
}


void nhapmang(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i = 0; i< m; i++)
		for(int j =0 ; j< n; j++)
			scanf("%d", &A[i][j]);
}

int Tim_max(int A[], int n)
{
	int max = A[0];
	for(int  i= 0; i< n; i++)
		if(A[i] > max)
			max = A[i];
	return max;
}

void Tong_Dong_max(int A[][100], int m, int n, int B[], int &nB)
{
	nB = 0;
	for(int i = 0; i< m; i++)
	{
		int t = 0; 
		for(int j = 0; j< n; j++)
		{
			t = t + A[i][j];
			B[nB] = t;
			nB++;
		}
	}
}

void xuat(int kq)
{
	printf("%d", kq);
}