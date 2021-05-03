#include<stdio.h>

void nhap(int& n);
void nhapMang(int a[], int n);
int chanLe(int x);
int kiemTra(int a[], int n);
void xuat(int kQ);

int main()
{
	int a[100], n;
	nhap(n);
	nhapMang(a, n);
	int kQ = kiemTra(a, n);
    xuat(kQ);
	return 0;
}
void nhap(int& n)
{
	scanf("%d", &n);
}
void nhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}
int chanLe(int x)
{
	if ( x % 2 == 0)
		return 1;
	return 0;
}
int kiemTra(int a[], int n)
{
	if(chanLe(a[0]) == 1)
	{
		for(int i = 1; i < n; i += 2)
		{
			if (chanLe(a[i]) == 0 && chanLe(a[i + 1]) == 1)
				return -1;
			else
			{
				break;
				return i;
			}
		}
	}
	else
	{
		for(int i = 1 ; i < n; i += 2)
		{
			if(chanLe(a[i]) == 1 && chanLe(a[i + 1]) == 0)
				return -1;
			else
			{
				break;
				return i;
			}
		}
	}
}
void xuat(int kQ)
{
	printf("%d", kQ);
}