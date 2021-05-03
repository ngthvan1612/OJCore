#include <stdio.h>

void nhap(int &n,int a[100]);
int check(int a[100],int n);
void xuat(int kq);

void main()
{
	int n,a[100];
	nhap(n,a);
	int kq=check(a,n);
	xuat(kq);
}
void nhap(int &n,int a[100])
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int check(int a[100],int n)
{
	int x=-1;
	for (int i=0;i<n;i++);
	{
	if (i+2<=n)
	{
	if (((a[i]%2==0)&&(a[i+1]%2!=0)&&(a[i+2]%2==0))||((a[i]%2==0)&&(a[i+1]%2!=0)&&(a[i+2]%2!=0)))
			x=-1;
	else
	{
		if (((a[i]%2==0)&&(a[i+1]%2==0)&&(a[i++]%2==0))||((a[i]%2!=0)&&(a[i+1]%2!=0)&&(a[i++]%2!=0)))
				x=i+1;
		if (((a[i]%2!=0)&&(a[i+1]%2==0)&&(a[i++]%2==0))||((a[i]%2==0)&&(a[i+1]%2!=0)&&(a[i++]%2!=0)))
				x=i+2;
	}
	}
	}
	return x;
}
void xuat(int kq)
{
	printf("%d",kq);
}