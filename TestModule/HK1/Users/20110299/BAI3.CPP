#include<stdio.h>
#include<math.h>
void nhap(long a[],long &n);
void tinh(long a[],long n);
void main()
{
	long a[200],n;
	nhap(a,n);
	tinh(a,n);
}
void nhap(long a[],long &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void tinh(long a[],long n)
{
	long kq;
	long dem;
	for(int i=0;i<n-1;i++)
		if(abs(a[i]-a[i+1])%2!=1)
		{
			dem=0;
			kq =i+1;
			break;
		}



		else
		{
			dem=1;

		}
	if(dem==0)
		printf("%d",kq);
	else
	    printf("-1");
}



