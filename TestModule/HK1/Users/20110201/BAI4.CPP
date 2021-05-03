 # include <stdio.h>
void nhapMang ( int &n, int &m, int A[][100]);
int kiemTraSoNT ( int x);
void tinhTong ( int n, int m, int A[][100], int B[], int &a);
int soNhoNhat ( int a, int B[]);
void xuat ( int kq);

void main()
{
	int A[100][100];
	int n, m;
	nhapMang (n, m, A);
	int B[100];
	int a;
	tinhTong (n, m, A, B, a);
	int kq = soNhoNhat (a,B);
	xuat (kq);
}

void nhapMang ( int &n, int &m, int A[][100])
{
	scanf ("%d", &n);
	scanf("%d", &m);
	for ( int i = 0; i < n; i++)
	{
		for ( int j = 0; j < m; j++)
		{
		scanf("%d", &A[i][j]);
		}
	}
}

int kiemTraSoNT ( int x)
{
	int d = 0;
	for ( int i = 1; i <= x; i++)
	{
		if ( x % i == 0)
			d++;
	}

	if ( d == 2)
		return 1;
	return 0;

}

void tinhTong ( int n, int m, int A[][100], int B[], int &a)
{
	a = 0;

	for ( int i = 0; i < n; i++)
	{ 
		int Sum = 0;
		for ( int j = 0; j < m; j++)
		{
			if ( kiemTraSoNT( A[i][j]) == 1)
				Sum += A[i][j];
		}

		B[a++] = Sum;
;
	}
}

int soNhoNhat (int a, int B[])
{

	int Min = B[0];
	for ( int i = 0; i < a; i++)
	{
		if ( B[i] < Min )
			Min = B[i];
	} 
	return Min;
}

void xuat ( int kq)
{
	printf("%d", kq);
}

