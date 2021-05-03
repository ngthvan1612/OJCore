#include<stdio.h>
#define N 100
void nhap(int a[],int &n)
{
	scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
}
int xuly(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if ((a[i]%2==0 && a[i+2]%2==0) || (a[i]%2!=0 && a[i+2]%2!=0))
			return -1;
		else 
		return i+2;
	}
}
void main()
{
	int a[N],n;
	nhap(a,n);
	int kq=xuly(a,n);
	printf("%d",kq);
}
