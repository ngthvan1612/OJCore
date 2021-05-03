#include<stdio.h>

void nhap(int a[100],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}

void xuat(int kq)
{
	printf("%d",kq);
}

int xenke(int a,int b)
{
	if ((a+b)%2==0)
		return 0;
	return 1;
}

int kt(int a[100],int n)
{
	for(int i=0;i<n;i++)
		{
			if (xenke(a[i],a[i+1])==0)
				return i+1;
		}	
	return -1;
}

int main()
{
	int a[100],n;
	nhap(a,n);
	int kq=kt(a,n);
	xuat(kq);
	return 0;
}