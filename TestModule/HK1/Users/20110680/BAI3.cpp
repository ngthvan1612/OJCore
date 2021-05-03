#include <stdio.h>
int kiemtra(int x, int y, int z);
void main()
{
	int a[1000],n,i;
	scanf("%d", &n);
	for (i =0 ; i < n; i++) scanf("%d", &a[i]);
	i = 1;
	if ((a[0] % 2) == 0)
	{
		while ((kiemtra(a[i],i,1) == 1) && ( i < n)) i++;
	}
	else
	{
		while ((kiemtra(a[i],i,2) == 1) && (i <n)) i++;
	}
	if (i == n) printf("-1");
	else printf("%d", i);
}
int kiemtra(int x, int y, int z)
{
	if (z == 1) 
	{
		if (y % 2 != 0)
		{
			if ((x % 2 != 0)) return 1;
			else return 0;
		}
		else 
		{
			if ((x % 2 == 0)) return 1;
			else return 0;
		}
	}
	else if (z == 2)
	{
		if (y % 2 != 0)
		{
			if ((x % 2 == 0)) return 1;
			else return 0;
		}
		else 
		{
			if ((x % 2 != 0)) return 1;
			else return 0;
		}
	}
}