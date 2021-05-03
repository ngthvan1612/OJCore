#include<stdio.h>
void nhap(int a[], int &n);
void xuat(int x);
int xuli(int a[], int n);



void main()
{
	int a[100];
	int n;
	nhap(a,n);
	int kq=xuli(a,n);
	xuat(kq);
}

void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
}

void xuat(int x)
{
	printf("%d", x);
}

int xuli(int a[], int n)
{
	int vt;
	for(int i=0;i<n;i++)
	{
		if((a[i]%2!=0 && a[i+1]%2==0) || (a[i]%2==0 && a[i+1]%2!=0))
		{
			return -1;
		}
		else
			if(a[i]%2==0 && a[i+1]%2==0)
			{
				vt=a[i];
				return vt;
			}
	}
}
