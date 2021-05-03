#include<stdio.h>
void nhap(int a[],int &n);
int kiemtra(int a[], int n);
void xuat(int kq);
void main()
{
	int a[101],n;
	nhap(a,n);
	int kq=kiemtra(a,n);
	xuat(kq);
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int kiemtra(int a[], int n)
{
	int kt=-1;
	for(int i=0;i<n-1;i++)
	{
		if((a[i]%2!=0&&a[i+1]%2==0)||(a[i]%2==0&&a[i+1]%2!=0))
		{
			kt=-1;
		}
		else 
		{
			kt=i+1;
			break;
		}
	
	}
	return kt;

}
void xuat(int kq)
{
	printf("%d",kq);
}