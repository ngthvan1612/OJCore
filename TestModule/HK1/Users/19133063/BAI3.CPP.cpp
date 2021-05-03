#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int tmp=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0&&a[i+1]%2==0)
		{
			tmp=i+1;
			break;
		}
		if(a[i]%2!=0&&a[i+1]%2!=0)
		{
			tmp=i+1;
			break;
		}
		if(a[i]%2==0&&a[i+1]%2!=0)
		{
			tmp=-1;
			break;
		}
	}
	printf("%d",tmp);
	return 0;
}
