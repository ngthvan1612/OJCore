#include <stdio.h>

int ktrChanLe(int n, int a[100]);

void main()
{
	int n, a[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	ktrChanLe(n, a);
	printf("%d", ktrChanLe(n, a));
}

int ktrChanLe(int n, int a[100])
{
	bool flag = true;
	if(a[0] % 2 == 0)
	{
		for(int i = 0; i < n; i+=2)
		{
			if(a[i] % 2 == 0)
			{
				flag = true;
			}
			else 
			{
				flag = false;
				return i;
			}
		}
		for(int j = 1; j < n; j+=2)
		{
			if(a[j] % 2 != 0)
			{
				flag = true;
			}
			else 
			{
				flag = false;
				return j;
			}
		}
		if(flag == true)
		{
			return -1;
		}
	}
	else if(a[0] %2 != 0)
	{
		for(int e = 0; e < n; e+=2)
		{
			if(a[e] % 2 != 0)
			{
				flag = true;
			}
			else 
			{
				flag = false;
				return e - 1;
			}
		}

	for(int f = 1; f < n; f+=2)
	{
		if(a[f] % 2 == 0)
		{
			flag = true;
		}
		else 
		{
			flag = false;
			return f - 1;
		}
	}
	if(flag == true)
	{
		return -1;
	}
	}

}