#include<stdio.h>
void nhap(int &row, int &col, int A[][100]);
int laNT(int a);
int tongdong(int A[][100], int a, int row);
int xuly(int A[][100], int row, int col);
void xuat(int t);
void main()
{
	int A[100][100];
	int row,col;
	nhap(row,col,A);
	int t = xuly(A,row,col);
	xuat(t);
}
void nhap(int &row, int &col, int A[][100])
{
	scanf("%d%d", &row, &col);
	for(int i = 0; i <row; i++)
		for(int j = 0; j < col; j++)
			scanf("%d", &A[i][j]);
}
int laNT(int a)
{
	int dem = 0;
	for (int i = 1; i <= a; i++)
	{
		if( a % i == 0)
			dem ++;
	}
	return dem;
}
int tongdong(int A[][100], int a, int row)
{
	int sum = 0;
	for (int i = a; i< row; i++)
		if(laNT(A[a][i]) == 2)
			sum += A[a][i];
		return sum;
}
int xuly(int A[][100], int row, int col)
{
	int temp = tongdong(A,0,col);
	for(int i = 0; i <row-1; i++)
	{
		if(tongdong(A,i,row) > tongdong(A,(i+1),row))
			temp = tongdong(A,(i+1),row);
	}
	return temp;
}
void xuat(int t)
{
	printf("%d", t);
}

