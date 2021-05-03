#include<stdio.h>
void nhap(int a[], int &n);
int kiemTra(int a[], int n);
void xuat(int kt);

void main()
{
	int a[1000],n;
	nhap(a,n);
	int kt=kiemTra(a,n);
	xuat(kt);
}
void nhap(int a[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int kiemTra(int a[], int n)
{
	int i;
	if(a[0]%2==0)
	{
		for(i=0;i<n;i+=2)
		{
			if(a[i]%2!=0)
				return i;
		}
		for(i=1;i<n;i+=2)
		{
			if(a[i]%2==0)
				return i;
		}
	}
	else 
	{
		for(i=0;i<n;i+=2)
		{
			if(a[i]%2==0)
				return i;
		}
		for(i=1;i<n;i+=2)
		{
			if(a[i]%2!=0)
				return i;
		}
	}
	return -1;
}
void xuat(int kt)
{
	printf("%d",kt);
}


