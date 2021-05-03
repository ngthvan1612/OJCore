# include <stdio.h>
# include <string.h>
# include <math.h>
void nhap( char a[], char b[]);
long tong( char a[], char b[]);
void xuat ( long x);

void main ()
{
	char a[15],b[15];
	nhap(a,b);
	long kq= tong(a,b);
	xuat( kq);
}
void nhap( char a[], char b[])
{
	gets(a);
	gets(b);
}
long duaVeThapPhan( char a[])
{
	int n= strlen(a);
	long kq=0;
	for ( int i=0; i <n; i++)
	{
		if (a[i] >='0' && a[i] <='9')
			kq = kq+ (a[i] -'0')*(long)pow(16,n-i-1);
		else
			kq= kq+ ( a[i]-55)*(long)pow(16,n-i-1);

	}
	return kq;
}
long tong( char a[], char b[])
{
	long sum=0;
	sum = duaVeThapPhan(a) + duaVeThapPhan(b);
	return sum;
}

void xuat( long x)
{
	printf("%ld",x);
}
