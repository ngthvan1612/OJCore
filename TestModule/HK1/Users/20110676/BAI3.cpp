#include<stdio.h>
void nhap(int &n, int a[]);
int kiemtra(int n, int a[]);
void xuat(int kq);
void main()
{
    int n;
	int a[100];
	nhap(n,a);
	int kq=kiemtra(n,a);
	xuat(kq);
}
void nhap(int &n, int a[])
{
    scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
int kiemtra(int n, int a[])
{
    for(int i=0; i<n; i++)
	{
	    if(a[i]%2==0 && a[i+1]%2==0 || a[i]%2==1 && a[i+1]%2==1)
		{
		    return i+1;
			break;
		}
		else if(i==n-1) return -1;
	}
}
void xuat(int kq)
{
    printf("%d", kq);
}