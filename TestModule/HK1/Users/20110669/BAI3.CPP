#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);

		if ((a[i] % 2 == 0 && a[i+1] % 2 == 1 && a[i-1] % 2 == 0))
		{
			s = -1;
		}
		else if (a[i] % 2 == 0 && a[i+1] % 2 == 0)
		{
			s = i;
		}
	}
	printf("%d",s);
	return 0;
}
