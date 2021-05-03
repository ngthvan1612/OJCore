#include <stdio.h>
int xuly(int a[], int n);
void nhapmang(int a[], int &n);
void main()
{
	int a[150], n;
	nhapmang(a,n);
	int kq = xuly(a,n);
	printf("%d", kq);
}
void nhapmang(int a[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}
int xuly(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		if(a[i-1] % 2 == 0)
		{
			if(a[i] % 2 == 0)
				return i;
		}
		else if(a[i-1] % 2 !=0)
		{
			if(a[i] % 2 !=0)
				return i;
		}
	}
	return -1;
}