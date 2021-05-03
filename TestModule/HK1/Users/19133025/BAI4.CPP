#include<stdio.h>
int Nto(int x);
int Timmax(int a[], int n);
int tongnt(int a[][100], int m, int n);
int tongntodong(int a[][100], int sh, int sc);
int main()
{
	int m,n;
	int A[100][100];
	scanf("%d%d",&m,&n);
	for(int i = 0 ;i < m ; i++)
		for(int j = 0 ; j < n ; j++)
		{
			scanf("%d",&A[i][j]);
		}
	int kq = tongnt(A,m,n);
	printf("%d", kq);
	return 0;
}
int Nto(int x)
{
	int d =0;
	for(int i = 1 ; i <=x; i++)
		if(x%i==0)
			d++;
	if(d==2)
		return 1;
	return 0;
}
int Timmax(int a[], int n)
{
	int min  = a[0];
	for(int i = 0 ; i < n ;i++)
	{
		if(a[i] < min)
			min = a[i];
	}
	return min;
}
int tongntodong(int a[][100], int sh, int sc)
{
	int k;
	int tong =0;
	int min =a[sh][0];
	for(k = 0 ; k < sc ; k ++)
	{
		if(Nto(a[sh][k]) == 1)
			tong = tong + a[sh][k];
	}
	return tong;
}
int tongnt(int a[][100], int m, int n)
{
	int B[10000] ={0};
	int tong =0;
	int k =0;
	for(int j = 0 ; j < n ; j++)
	{
		if(tongntodong(a,j,n)!= 0)
			B[k++]= tongntodong(a,j,n);
	}
	int kq = Timmax(B,m);
	return kq;
}