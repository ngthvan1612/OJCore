#include<stdio.h>
#define SIZE 101
void gimme(int &m, int &n, int A[SIZE][SIZE]);
int MAXSUMNT(int m,int n,int A[SIZE][SIZE]);
int NT(int a);

void main()
{
	int m,n;
	int A[SIZE][SIZE];
	gimme(m,n,A);
	int kq = MAXSUMNT(m,n,A);
	printf("%d",kq);
}
void gimme(int &m, int &n, int A[SIZE][SIZE])
{
	scanf("%d%d",&m,&n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d",&A[i][j]);
}
int MAXSUMNT(int m,int n,int A[SIZE][SIZE])
{
	int temp = 0;
	int tempmin;
	int B[SIZE];
	for(int i = 0; i< m; i++ )
	{
		for( int j = 0; j < n; j++ )
		{
			if(NT(A[i][j])
				== 1 ) temp = temp + A[i][j];
		}
		B[i] = temp;
		temp = 0;
	}
	tempmin = B[0];
	for( i = 1; i < m; i++)
	{
		if(B[i] < tempmin) tempmin = B[i];
	}
	return tempmin;
}
int NT(int a)
{
	int d =0;
	for(int i = 1; i <= a; i++)
		if(a%i == 0 ) d =d + 1;
	if(d == 2 ) return 1;
	return 0;
}