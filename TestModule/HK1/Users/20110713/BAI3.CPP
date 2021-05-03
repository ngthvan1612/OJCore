#include <stdio.h>

void nhap(int &n,long a[]);
void xuat(int kq);
int xuli(int n,long a[]);

int main()
{
	int n;
	long a[1000];
	nhap(n,a);
	int kq=xuli(n,a);
	xuat(kq);
	return 0;
}
void nhap(int &n,long a[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%ld",&a[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int xuli(int n,long a[])
{
	int dem=0;
	for(int i=0;i<n-1;i++)
	{
		if( (a[i]%2==0&&a[i+1]%2!=0) || (a[i]%2!=0&&a[i+1]%2==0))
			dem++;
		else
			return ++i;
	}
	if(dem==n-1)
		return -1;
}