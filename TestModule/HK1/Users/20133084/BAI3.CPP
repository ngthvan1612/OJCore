
#include<stdio.h>
void nhap(int &n,int a[]);
int kt(int a,int b);
void main()
{
	int n;
	int a[100];
	nhap(n,a);
	printf("%d",-1);
}
void nhap(int &n,int a[])
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
