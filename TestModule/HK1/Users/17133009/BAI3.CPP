#include<stdio.h>
#define MAX 100
void nhap(int a[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int kiemTraChanLe(int a[], int n)
{
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		if((a[i]+a[i+1])%2==0)
			return i+1;
		else
			flag=1;
	}
	if(flag==1)
		return -1;
}
void main()
{
	int a[MAX],n;
	nhap(a,n);
	printf("%d",kiemTraChanLe(a,n));
}