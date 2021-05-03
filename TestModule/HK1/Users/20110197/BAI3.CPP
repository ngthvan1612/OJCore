#include<stdio.h>
void nhap (int a[], int &n);
void xuat ( int kq);
int chanle ( int a[], int n);

void main ()
{
	int a[100], n;
	nhap (a,n);
	int kq=chanle(a,n);
	xuat (kq);
}

void nhap (int a[], int &n)
{
	scanf ("%d", &n);
	int i;
	for (i=0; i<n; i++)
	{
		scanf ("%d", &a[i]);
	}
}

void xuat ( int kq)
{
	printf ("%d", kq);
}

int chanle ( int a[], int n)
{
	int kq=0;
	for (int i=0; i<n-1; i++)
	{
		if (a[i]%2==0)
		{
			if (a[i+1]%2==1)
				kq=-1;
			if (a[i+1]%2==0)
			{
				kq=a[i];
				break;
			}
		}
		if (a[i]%2==1)
		{
			if (a[i+1]%2==0)
				kq=-1;
			if (a[i+1]%2==1) 
			{
				kq=a[i];
				break;
			}
		}
	}
			return kq;
}