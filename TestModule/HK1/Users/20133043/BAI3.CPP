#include<stdio.h>
void nhap(int a[], int &n);
int central(int a[], int n);

void main()
{
	int a[101], n;
	nhap(a, n);
	int kq=central(a, n);
	printf("%d", kq);
}
void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
int central(int a[], int n)
{
	int dem=0;
	for(int i=0; i<n; i++)
	{
		if ((a[i] % 2 == 0 && a[i+1] % 2 != 0) || (a[i] % 2 != 0 && a[i+1] % 2 == 0))
			
		{
			dem++;
			break;
		}
		else
			return i+1;

	}
		   return -1;
}