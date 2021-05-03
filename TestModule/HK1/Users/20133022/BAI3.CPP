#include<stdio.h>
void nhap(int a[],int &n);
int test(int a[],int n);
int main()
{
	int a[98],n;
	nhap(a,n);
	int kq=test(a,n);
	printf("%d",kq);
	return 0;
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int test(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if((a[i]%2!=0 && a[i+1]%2!=0)||(a[i]%2==0 && a[i+1]%2==0))
			return i+1;
	}
	return -1;
}