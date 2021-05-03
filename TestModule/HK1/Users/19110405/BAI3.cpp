#include <stdio.h>
#include <math.h>
int kiemtra(int a[],int n);
void nhap(int a[],int &n);
void main()
{
	int a[100],n;
	nhap(a,n);
	int kq=kiemtra(a,n);
	printf ("%d",kq);
}
void nhap(int a[],int &n)
{
	scanf ("%d",&n);
	for (int i=0;i<n;i++)
		scanf ("%d",&a[i]);
}
int kiemtra(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n-1;i++)
	{
		if ((a[i]%2==0 && a[i+1]%2!=0) || (a[i+1]%2==0 && a[i]%2!=0))
		{
			dem=-1;
		}
		else
		{
			dem=i+1;
			break;
		}
	}
	return dem;
}

