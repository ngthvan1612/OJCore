#include<stdio.h>

void main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%2==0&&a[i+1]%2!=0)
		{
			printf("-1");
			break;
		}
		else if(a[i]%2!=0&&a[i+1]%2==0)
		{
			printf("-1");
			break;
		}
		else
		{
			printf("2");
			break;
		}
	}
}