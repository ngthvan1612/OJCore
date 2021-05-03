#include <stdio.h>
void xuat(long a[],long n);
void main()
{
	long a[100],n;
	scanf ("%d",&n);
	for (int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	xuat(a,n);
}

void xuat(long a[],long n)
{
	int d = 0;
	for (int i = 0; i < n-1; i++)
		if ((a[i] + a[i+1]) % 2 != 0)
              d++;

	if (d == n-1)
		printf ("-1");
	else 
	{
		for (int j = 0; j < n-1; j++)
			if ((a[j]+a[j+1]) % 2 == 0)
			{
				printf("%d",j+1);
				break;
			}
	}
}