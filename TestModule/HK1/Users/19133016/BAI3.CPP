#include<stdio.h>
void nhap (int a[], int &n);
int xuly (int a[], int n);
void ketqua(int a[], int n);
void main()
{
	int a[100],n;
	nhap(a,n);
	ketqua(a,n);
}
void nhap (int a[], int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int xuly (int a[], int n)
{
	int i;
	for (i=0;i<n-1;i++)
	{
		if ((a[i]%2==0&&a[i+1]%2!=0)||(a[i]%2!=0&&a[i+1]%2==0)) return 1;
	}
	for ( i=0;i<n-1;i++)
	{
		if ((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2!=0&&a[i+1]%2!=0)) return i;
	}
	
}
void ketqua(int a[], int n)
{
	int k=xuly(a,n);
	if (k==1) printf ("-1");
	else printf ("%d",k+1);
}