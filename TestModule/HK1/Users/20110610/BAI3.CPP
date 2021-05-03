#include <stdio.h>

void nhap ( int a[], int &n);
int kiemTra( int a[], int n);
void xuat ( int kq);

void main ()
{
	int a[100],n;
	nhap(a,n);
	int kq = kiemTra(a,n);
	xuat(kq);
}

void nhap ( int a[], int &n)
{
	scanf( "%d", &n);
	for ( int i=0; i<n; i++)
		scanf("%d", &a[i]);
}

int sc( int x)
{
	if ( x%2==0)
		return 1;
	else
	return 0;
}

int sl ( int x)
{
	if ( x %2 != 0)
		return 1;
	else
	return 0;
}

int kiemTra( int a[], int n)
{
	for ( int i=0; i <n; i++)
	{
		if ( (sc(a[i])==1) && (sc(a[i+1])==1))
			return i+1;
		else
			if( (sl(a[i])==1) && (sl(a[i+1])==1))
				return i+1;
	}
	return -1;
}


void xuat ( int kq)
{
	printf ( "%d", kq);
}