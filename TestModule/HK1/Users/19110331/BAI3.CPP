#include <stdio.h>
int kt(int n, int a[])
{
	if (a[0]%2==1)
	{
		for (int i=1;i<n;i++)
		if (i%2==1)
		{
			if(a[i]%2==1)
			{
				return i;
			}
			else
				continue;
		}
		else
			if(a[i]%2==0)
				return i;
			else
				continue;
	}
	else
	{
		for (int i=1;i<n;i++)
		if (i%2==0)
		{
			if(a[i]%2==1)
			{
				return i;
			}
			else
				continue;
		}
		else
			if(a[i]%2==0)
				return i;
			else
				continue;
	}
	return -1;

}
void main()
{
	int a[101];
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int c = kt(n,a);
	printf("%d",c);

}