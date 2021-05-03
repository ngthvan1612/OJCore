#include<stdio.h>
#define N 100
void nhap(int a[N],int &n);
int xuly(int a[N],int n);
void main()
{
	int a[N],n;
	nhap(a,n);
	int kq=xuly(a,n);
	printf("%d",kq);
}
void nhap(int a[N],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int xuly(int a[N],int n)
{
	int d=0;
	for(int i=0;i<n-1;i++)
		if(((a[i]%2==0)&&(a[i+1]%2!=0))||((a[i]%2!=0)&&(a[i+1]%2==0)))
			d++;
	if(d==n-1)
		return -1;
	else
		for(int i=0;i<n-1;i++)
		if(((a[i]%2==0)&&(a[i+1]%2==0))||((a[i]%2!=0)&&(a[i+1]%2!=0)))
		{
			return i+1;
			break;
		}
	return 0;
}