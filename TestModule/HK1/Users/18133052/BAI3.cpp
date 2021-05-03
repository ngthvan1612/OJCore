#include<stdio.h>

void nhapMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}
void xuLy(int a[], int n)
{
	int kq = -1;
	for(int i = 0; i <n; i++)
	{
		if( (a[i] % 2 == 0) && (a[i+1] % 2 == 1) ||  (a[i] % 2 == 1) && (a[i+1] % 2 == 0))
		{
			kq = -1;
		}
		else if(i + 1 == n)
		{
			kq = -1;
		}
		else
		{
			kq = i +1;
			break;
		}
	}
	printf("%d", kq);
}
void main()
{
	int a[100];
	int n;
	scanf("%d", &n);
	nhapMang(a,n);
	xuLy(a,n);
}