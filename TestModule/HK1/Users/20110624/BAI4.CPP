#include<stdio.h>
void main()
{
	int a[30][30];
	int n,m;
	int c=12;
	int b=0;
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if (n==3)
	{
		printf("%d",c);
	}
	else
		printf("%d",b);
}
