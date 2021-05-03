#include <stdio.h>
 
void nhap(int *a, int *n)
{
	scanf("%d", n);
	for(int i=0; i<*n; i++)
	{
		scanf("%d", &a[i]);
	}
}

int kiemTra(int *a, int n)
{
	for (int i=0; i<n-1; i++)
	{
		int x=a[i]%2;
		int y=a[i+1]%2;
		if (x==y)
		{
			return i+1;
		}
	}
	return -1;
}

int main()
{
	int a[100];
	int n;
	nhap(a, &n);
	int kq=kiemTra(a, n);
	printf("%d", kq);

	return 0;
}