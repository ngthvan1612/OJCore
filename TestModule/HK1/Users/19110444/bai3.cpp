#include <stdio.h>
int kiemtra(int a[],int n);
void xuat(int kq);
void nhap(int a[],int &n);
void main()
{
	int a[100],n;
	nhap(a,n);
	int kq=kiemtra(a,n);
	xuat(kq);
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);

}
void xuat(int kq)
{
	printf("%d",kq);
}
int kiemtra(int a[],int n)
{
	int kq;
	for(int i=0;i<n-1;i++)
	{
		if((a[i]%2==0 && a[i+1]%2==1)|| (a[i]%2==1 && a[i+1]%2==0))
			kq=-1;
		else
		{
			kq=i+1;
			break;
		}
	}
	return kq;
}