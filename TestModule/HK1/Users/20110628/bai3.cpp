#include<stdio.h>
void nhap(int a[],int&n);
int chan(int n);
int le(int n);
void main()
{
	int a[100],n,dem=0;
	nhap(a,n);
	for (int i=0;i<n;i+=2)
		if (chan(a[i]) && le(a[i+1]))
			dem++;
	if (dem==n/2) printf("-1");
	if (dem==0) printf("-1");
}
void nhap(int a[],int&n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int chan(int n)
{
	if (n%2==0) return 1;
	return 0;
}
int le(int n)
{
	if (n%2!=0) return 1;
	return 2;
}
