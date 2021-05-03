#include < stdio.h > 
int  tong ( int A[][100] , int n, int m );
void nhap( int A[] , int &n , int &m);
void xuat(int kq);
int laNT(int x);
int  tong ( int A[][100] , int n, int m );
void nhap( int A[] , int &n , int &m)
{
	scanf(" %d%d", &n, &m );
	for( int i = 0; i < n; i++)
	{	for ( int j = 0; j < m ; i++)
		{
			scanf("%d%d", &A[i][j]);
		}
	}
}
void xuat(int kq)
{
	printf("%d", kq);
}
int laNT(int x)
{
	int dem = 0;
	for(int i = 1; i <= x ; i++)
		if( x %i == 0)
			dem++;
	if( dem == 2)
		return 1;
	else
		return 0;
}
int  tong ( int A[][100] , int n, int m )
{
	for(int i = 0; i < n; i++)
	{
		int s = 0;
		for (int j = 0; i< m; j++)
			if(laNT(A[i][j] ) == 1)
			 s = s + A[i][j];


	}

}
void main()
{
	int A[100][100], n , m;
	nhap(A,n,m);
    int kq = tong (A,n,m);
	xuat(kq);
}