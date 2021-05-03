#include<stdio.h>
int kiemtra(int a[], int n);
void nhap(int a[], int &n);
void main()
{
	int a[100], n;
	nhap(a,n);
	int kq=kiemtra(a,n);
	printf("%d", kq);
}

int kiemtra(int a[], int n)
{
	int kq=0;
	if(a[0]%2==1)
	{
		for(int i=0; i<n; i++)
		{
			if(i%2==1 && a[i]%2==0)
				kq=kq;
			else if(i%2==0 && a[i]%2==1)
				kq=kq;
			else return i;
		}
	}
	else 
	{
		for(int i=0; i<n; i++)
		{
			if(i%2==1 && a[i]%2==1)
				kq=kq;
			else if(i%2==0 && a[i]%2==0)
				kq=kq;
			else return i;
		}
	}
	return -1;
}
void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
}