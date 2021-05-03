#include<stdio.h>;

void nhap(int a[], int n)
{
	scanf("%d",&a);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
}

int xuly(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0  && a[i+1]%2==1 ||a[i]%2==1  && a[i+1]%2==0)
			return -1;
	}
	return -1;
}
void main()
{
	int a[1000],n;
	nhap(a,n);
	printf("%d",xuly(a,n));
}