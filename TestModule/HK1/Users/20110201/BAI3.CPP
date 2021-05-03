# include <stdio.h>
void nhapMang (int &n, int A[]);
int xuLy ( int n, int A[]);
void xuat ( int kq);

void main()
{
	int A[100], n;
	nhapMang (n, A);
	int kq = xuLy (n, A);
	xuat(kq);
}

void nhapMang (int &n, int A[])
{
	scanf("%d", &n);
	for ( int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}

int xuLy ( int n, int A[])
{
	for ( int i = 0; i < n - 1; i++)
	{
		if ( A[i] % 2 == 0 && A[i+1] % 2 == 0)
			return i + 1;
		else if ( A[i] % 2 != 0 && A[i+1] % 2 != 0)
			return i + 1;
	}
	return -1;
}

void xuat ( int kq)
{
	printf("%d", kq);
}