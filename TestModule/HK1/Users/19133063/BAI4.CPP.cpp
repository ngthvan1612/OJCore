#include<stdio.h>
#include<math.h>
int snt(int n)
{
	if(n==1)
	{
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	return n;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][101];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int tmp=1e9;
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			if(snt(a[i][j]))
			{
				sum+=a[i][j];
			}
		}
		if(tmp>sum)
		{
			tmp=sum;
		}
	}
	printf("%d",tmp);
}
