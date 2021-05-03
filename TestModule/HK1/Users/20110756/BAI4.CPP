
#include <stdio.h>
#include <math.h>
#define size 100
void nhap (int A[size][size],int &dong, int &cot);
int ktnt(int x);
int tong(int A[size][size], int B[], int &dong2, int dong, int cot);
void xuat (int kq);
void main ()
{
	int A[size][size],B[size];
	int dong,cot,dong2;
	nhap(A,dong,cot);
	int kq=tong(A,B,dong2,dong,cot);
	xuat (kq);
}
void nhap (int A[size][size], int &dong, int &cot)
{
	scanf("%d%d",&dong,&cot);
	for(int i=0;i<dong;i++)
		for(int j=0;j<cot;j++)
			scanf("%d",&A[i][j]);
}
int ktnt(int x)
{
	int dem=0;
	for(int h=1;h<=x;h++)
	{
		if(x%h==0)
			dem=dem+1;
	}
	if(dem==2)
		return 1;
	return 0;
}
int tong (int A[size][size], int B[], int &dong2, int dong, int cot)
{
	dong2=0;
	int tong_nt;
	int i,j;
	for( i=0;i<dong;i++)
	{
		tong_nt=0;
		for(j=0;j<cot;j++)
		{
			if(ktnt(A[i][j])==1)
				tong_nt=tong_nt+A[i][j];
		}
		B[dong2++]=tong_nt;
	}
	int min=B[0];
	int k;
	for( k=1;k<dong2;k++)
	{
		if(B[k]<min)
			min=B[k];
	}
	return min;
}
void xuat(int kq)
{
	printf ("%d",kq);
}