#include<stdio.h>
int kiemtra(int n, int a[]);
void nhap(int &n, int a[]);
int main()
{
	int n, a[100];
	nhap(n,a);
	int t=kiemtra(n,a);
	printf("%d", t);
	return 0;
}
void nhap(int &n, int a[])
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
}
int kiemtra(int n, int a[])
{
	for(int i=0;i<n-1;i++)
	{
		if((a[i]+a[i+1])%2==0)
			return i+1;
	}
	return -1;
}
