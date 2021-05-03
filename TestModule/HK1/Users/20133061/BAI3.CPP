#include<stdio.h>
void xuat(int kq);
void nhap(int &n,int a[]);
int chanle(int n,int a[]);

void main()
{
	int n;
	int a[100];
	nhap(n,a);
	int kq=chanle(n,a);
	xuat(kq);
}
void nhap(int &n,int a[])
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int chanle(int n,int a[])
{
	for (int i=0;i<n;i++)
		if (a[i]%2==0)
		
		 (a[i+1]%2==1);

		return -1;
		if (a[i]%2==1)
		{
			(a[i+1]%2==0);
			return -1;
		}

		else
		return 2;
		
}
void xuat(int kq)
{
	printf("%d",kq);
}