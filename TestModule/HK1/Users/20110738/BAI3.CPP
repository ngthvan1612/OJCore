#include<stdio.h>
void nhap(int a[], int &n);
void xuat (int kq );
int test( int a[], int n);

void main ()
{
	int a[200],n;
	nhap(a,n);
	int kq= test(a,n);
	xuat (kq);
}
void nhap(int a[], int &n)
{
	scanf("%d\n",&n);
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
}
void xuat (int kq )
{
	printf("%d",kq);
}
int test( int a[], int n)
{
	int t=-1;
	int dem=0;
	for (int i=0; i<n; i++)
		if ( a[i] %2==0)
			if ((a[i+1]%2==1) && (i+1<n))
				dem++;
			else 
			{
				if (i+1!=n)
				{
					return i+1;
					break;
				}
			}
		else 
			if ((a[i+1]%2==0) && (i<n))
				dem++;
			else 
			{
				if (i+1 !=n)
				{
					return i+1;
					break;
				}
			}
	if (dem =n-1)
		return t;
}


