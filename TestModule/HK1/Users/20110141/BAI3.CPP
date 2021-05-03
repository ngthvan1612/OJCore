#include<stdio.h>

void nhap(int &n, int a[])
{
	do
	{
		scanf("%d", &n);
	} while(n <0);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

int kiemtra(int n, int a[])
{
	int vitri;
	for(int i = 0; i<n; i++)
	{
		if((a[i] % 2 != 0 && a[i +1] % 2 != 0) || (a[i] % 2 == 0 && a[i +1] % 2 == 0))
		{
			vitri = i + 1;
			return vitri;
		}	
	}
	return -1;
	
}

void xuat(int x)
{
	printf("%d", x);
}


void main()
{
	int n;
	int a[100];
	nhap(n,a);
	int x = kiemtra(n,a);
	xuat(x);
}