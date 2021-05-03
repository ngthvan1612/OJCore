#include<stdio.h>
void nhap(int a[],int &n);
int ktra(int a[],int n);
void xuat(int kq);
int main()
{
	int a[88],n;
	nhap(a,n);
	int kq=ktra(a,n);
	xuat(kq);
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int ktra(int a[],int n)
{
	int kq=2;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=0&&a[i]>1000)
		{
			return kq;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[0]%2==0)
		{
			for(int j=1;j<n;j++)
			{if(j%2==0&&a[j]%2==1)
			{
				kq=2;
			}
			else kq=-1;
		}
		}
		else if(a[0]%2==1)
		{
			for(int j=1;j<n;j++)
			{
			if(j%2==0&&a[j]%2==0)
			{
				kq=2;
			}
			else kq=-1;
			}
		}
	}
	return kq;
}
